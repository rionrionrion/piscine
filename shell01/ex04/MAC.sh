ifconfig -a | grep "ether" | sed -e "s/^.*ether //g" -e "s/ .*//g"
