name=twostones
samplesin=$(wildcard samples/*.in)
samplesout=$(wildcard samples/*.out)

build: $(name).cpp
	g++ -g -O2 -static -std=gnu++14 $(name).cpp -o $(name)

judge: build
	../judge $(name)

test: build
	../judge $(name) -test

all: build
