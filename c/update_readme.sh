#!/bin/bash

# Delete the contents of README.md file
> README.md

# Add title block "## List of Programs" to README.md
echo -e "## List of Programs\n" >> README.md

# Append the output of ls -1 to README.md (listing file names with line numbers)
ls -1 | nl >> README.md

echo "List of programs has been updated in README.md."

