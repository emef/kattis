#include <cmath>
#include <stdio.h>
#include <vector>

struct point {
  float x, y;
};

inline int dist(const point &a, const point &b) {
  float eucl = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
  return round(eucl);
}

std::vector<int> greedy_solve(const std::vector<point> &points) {
  const auto n = points.size();
  std::vector<int> tour(n, 0);
  std::vector<bool> used(n, false);

  tour[0] = 0;
  used[0] = true;

  for (int i=1; i<n; i++) {
    int best = -1;
    int best_dist;
    for (int j=0; j<n; j++) {
      if (used[j]) continue;
      int this_dist = dist(points[tour[i-1]], points[j]);
      if (best == -1 || this_dist < best_dist) {
        best_dist = this_dist;
        best = j;
      }
    }

    tour[i] = best;
    used[best] = true;
  }

  return tour;
}


int main(int argc, char **argv) {
  int n;
  if (scanf("%d", &n) < 0) {
    fprintf(stderr, "error getting N\n");
    return 1;
  }

  std::vector<point> points;
  for (int i=0; i<n; i++) {
    point pt;
    if (scanf("%f %f", &pt.x, &pt.y) < 0) {
      fprintf(stderr, "error getting point %d/%d\n", i, n);
      return 1;
    }

    points.push_back(std::move(pt));
  }

  std::vector<int> tour = greedy_solve(points);
  for (const auto i : tour) {
    printf("%d\n", i);
  }

  return 0;
}
