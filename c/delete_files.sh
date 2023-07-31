#!/bin/bash

# Deleting files without .c extension, excluding *.sh and *.md files
find . -type f ! -name "*.sh" ! -name "*.md" ! -name "*.c" -delete
