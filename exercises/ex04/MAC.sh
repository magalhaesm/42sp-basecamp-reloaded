#!/bin/sh
# ifconfig -a | grep Ethernet | awk '{print $2}'
ifconfig -a | awk '/ ether/ {print $2}'
