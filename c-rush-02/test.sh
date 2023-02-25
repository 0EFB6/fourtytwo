#!/bin/bash

for i in {1..1000000}
do
    ./rush-02 $i
	printf '\n'
done
