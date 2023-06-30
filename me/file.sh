#!/bin/bash
directory="/home/ec2-user/directory"
yourName="me"

int="i";
nextNumber=$i++;

for ((i = 1; i <= 25; i++))
        touch "${directory}/${yourName}${nextNumber}"

echo "Files created successfully."
