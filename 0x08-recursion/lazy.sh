#!/bin/bash
git add .
echo "Enter Commit Message"
read commit_msg
git commit -m "${commit_msg}"
echo "Message Read Successfully"
git push
