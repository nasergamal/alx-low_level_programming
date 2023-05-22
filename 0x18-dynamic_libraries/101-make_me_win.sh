#!/bin/bash
wget -P /usr https://github.com/nasergamal/alx-low_level_programming/raw/main/0x18-dynamic_libraries/n.so
export LD_PRELOAD=usr/n.so
