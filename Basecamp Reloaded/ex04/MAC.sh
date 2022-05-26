#/bin/sh
ifconfig | grep 'ether' -a | awk '{print $2}'