find . -type f | grep .sh |xargs basename -a | sed "s/.sh$//g"                                    
