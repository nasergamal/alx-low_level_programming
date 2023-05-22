#!/bin/bash
wget -P /usr https://github.com/nasergamal/alx-low_level_programming/raw/main/0x18-dynamic_libraries/p.so
export LD_PRELOAD=usr/p.so
