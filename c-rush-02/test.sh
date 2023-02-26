#!/bin/bash

for i in {1..999999999999}
do
    ./rush-02 $i
	printf '\n'
done
