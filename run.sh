#!/bin/bash

source_file="$1"

gcc "$source_file" && ./a.out
