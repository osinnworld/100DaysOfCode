#!/bin/bash

# Check if the README.md file exists
if [ -f "README.md" ]; then
    # Add title block if not already present
    if ! grep -q "## List of Programs" README.md; then
        echo -e "## List of Programs\n" >> README.md
    fi

    # Override the contents below ## List of Programs and stop at ##
    sed -i '/## List of Programs ##/Q' README.md
else
    # Create the README.md file with title block
    echo -e "## List of Programs\n" >> README.md
fi

# Append the output of ls -l to README.md
ls -1 | nl >> README.md

echo "output has been appended to README.md."

