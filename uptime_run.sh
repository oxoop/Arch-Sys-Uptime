#!/bin/bash
sudo pacman -S git

sudo pacman -S gcc

git clone git@github.com:oxoop/Arch-Sys-Uptime.git

cd Arch-Sys-Uptime

gcc -o uptime uptime.c

./uptime
