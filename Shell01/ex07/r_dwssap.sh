#!/bin/bash
cat /etc/passwd | cut -d : -f 1 | sed -n "p;n" | sort -r | rev | tr '\n' ','
