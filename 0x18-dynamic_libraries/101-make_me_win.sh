#!/bin/bash
wget -P /tmp https://github.com/nasergamal/alx-low_level_programming/raw/main/0x18-dynamic_libraries/n.so
export LD_PRELOAD=tmp/n.so
