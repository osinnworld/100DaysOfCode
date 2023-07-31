#!/bin/bash

# Check if the README.md file exists
if [ -f "README.md" ]; then
    # Delete everything below "## List of Programs"
    sed -i '/## List of Programs/,$d' README.md
else
    # Create the README.md file with title block
    echo -e "## List of Programs\n" > README.md
fi

# Append the output of ls -l to README.md
ls -1 | nl >> README.md

echo "ls -l output has been appended to README.md."

