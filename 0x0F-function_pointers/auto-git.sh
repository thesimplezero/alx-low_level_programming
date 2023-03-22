#!/bin/bash

# Get the list of files to push
files=$(ls | grep -v $0)

# Loop through the files and add, commit, and push each one
for file in $files; do
  git add $file
  git commit -m "Pushing $file"
  git push
done

# Echo "done" when finished
echo "done"
