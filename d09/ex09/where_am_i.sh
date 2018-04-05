where_i_am=$(ifconfig | grep inet\ | grep -Eo '[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}')
if [ -z "$where_i_am" ]
then
	echo "I am lost!"
else
	ifconfig | grep inet\ | grep -Eo '[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}'
fi