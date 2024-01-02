# start.sh

#!/bin/bash

# Function to display help
show_help() {
    echo "Usage: ./start.sh [options] [file]"
    echo "Options:"
    echo "  --help       Display this help message"
    echo "  [file]       Path to the C code file to compile and run (default: get_started/hola.c)"
    exit 0
}

# Default route param
route="chapter_1/get_started/hola.c"

# Check for --help option
if [ "$1" == "--help" ]; then
    show_help
fi

# Check if a parameter is provided
if [ ! -z "$1" ]; then
    # If a parameter is provided, use it
    route="$1"
fi

# Compile and run the C code with the parameter
cc "./$route" && ./a.out
