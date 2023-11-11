#!/bin/bash

# Shell script to print the maximum process ID value

# Path to the pid_max file
pid_max_file="/proc/sys/kernel/pid_max"

# Check if the file exists
if [ -e "$pid_max_file" ]; then
    # Read and print the maximum process ID value
    max_pid=$(cat "$pid_max_file")
    echo "Maximum Process ID Value: $max_pid"
else
    # Display an error message if the file doesn't exist
    echo "Error: $pid_max_file not found."
fi
