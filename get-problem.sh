#!/usr/bin/env bash

if [[ $1 -eq '' ]]; then 
    echo "needs a problem to get"
    exit 1
fi

curl --silent https://projecteuler.net/problem=$1 | htmlq .problem_content  -tw > problem$1
