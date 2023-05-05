#!/bin/bash

# Check if git is installed
if ! command -v git &> /dev/null; then
  echo "Git is not installed. Please install git and try again."
  exit 1
fi

# Function to check if a file is deleted or overwritten
check_conflict() {
  git status --porcelain | grep -E "^(D[ M]|[ MD])" > /dev/null
}

# Fetch the remote changes
git fetch

# Attempt to merge the remote branch
git merge --no-commit --no-ff FETCH_HEAD

# If there's a conflict, check if it's a deletion or overwriting conflict
if [ $? -ne 0 ]; then
  if check_conflict; then
    echo "Deletion or overwriting conflict detected. Please resolve the conflict manually."
    git merge --abort
  else
    echo "Auto-merging the changes."
    git merge --continue
  fi
else
  echo "Merged successfully without conflicts."
fi
