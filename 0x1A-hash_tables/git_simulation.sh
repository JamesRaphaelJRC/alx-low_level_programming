#!/bin/bash


# This is a git simulator that git adds, git commits and git push.
# - The script takes the first commandline argument and assigns it to '$1'
# - shift command is issued to remove the first argument so that the remaining args correspond to the filenames
# - the fil_no is set to the total number of commandline args passed (excluding the script name)
# - the for loop git adds inddividual files
# the comm


filename=$1
shift
file_no=$#

for ((i=1; i<=file_no; i++))
do
    git add "${!i}"
done

read -p "Enter a commit message: " message
git commit -m "$message"
git push
