#!/bin/sh
all_files=$(find . -type f)
tracked_files=$(git ls-files)
echo "$all_files" | grep -vFf <(echo "$tracked_files") | sed 's/\.\///g'
