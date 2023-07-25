#!/bin/bash

# Function to extract the description from the document section of a C program
get_description() {
    local file="$1"
    local description

    # Read the document section from the C program file
    description=$(sed -n '/\/\*\*/,/\*\//p' "$file" | sed '/\/\*\*/,/\*\//d')

    # Remove leading and trailing whitespace
    description=$(echo "$description" | sed 's/^[[:space:]]*//; s/[[:space:]]*$//')

    echo "$description"
}

# Update README.md for each C program
update_readme() {
    local readme="/home/osinnworld/100DaysOfCode/README.md"
    local program_files=(/home/osinnworld/100DaysOfCode/c/*.c)
    local program_index=1

    # Create or clear the README.md file
    echo -e "# 100 Days of Code - C Programs\n" > "$readme"
    echo -e "This repository contains C programming examples completed as part of the [100 Days of Code](https://github.com/osinnworld/100DaysOfCode) challenge. Each program demonstrates various concepts in C programming and aims to improve coding skills.\n" >> "$readme"
    echo -e "## Table of Contents\n" >> "$readme"

    for program_file in "${program_files[@]}"; do
        local program_title="Program $program_index"
        local program_description=$(get_description "$program_file")

        # Update Table of Contents
        echo "- [$program_title: $(basename "$program_file" .c)](#$program_title)" >> "$readme"

        # Update program details
        echo -e "\n## $program_title: $(basename "$program_file" .c)\n" >> "$readme"
        echo '```c' >> "$readme"
        cat "$program_file" >> "$readme"
        echo '```' >> "$readme"
        echo -e "\nDescription: $program_description\n" >> "$readme"

        ((program_index++))
    done
}

# Call the update_readme function
update_readme

echo "README.md has been updated."
