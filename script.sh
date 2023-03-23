#!/bin/bash

wget https://github.com/pranavkrish04/traboda-pwn/blob/main/chall?raw=true -O chall
wget https://raw.githubusercontent.com/pranavkrish04/traboda-pwn/main/gdbcommands
chmod +x chall
gdb chall -x gdbcommands
