#!/bin/bash

wget https://github.com/pranavkrish04/traboda-pwn/blob/main/chall?raw=true -O chall

chmod +x chall
gdb chall
