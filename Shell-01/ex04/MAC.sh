 #/bin/sh
ifconfig | grep 'ether' -a | awk '{print $2" ", $3, $4" ", $5}'