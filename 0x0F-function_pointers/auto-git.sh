#!/bin/bash

# Get the list of files to push
FILES=$(ls | grep -v "$0")

# Loop through the files and push them to git
for file in $FILES
do
  # Add the file to git
  git add $file

  # Create the commit message
  MESSAGE="Updating $file"

  # Commit the changes
  git commit -m "$MESSAGE"

  # Push the changes to the remote repository
  git push
done

echo "done"
