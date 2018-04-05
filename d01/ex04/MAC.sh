ifconfig -a link | grep ether | awk '{print $2}'
