# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falupine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/10 14:28:32 by falupine          #+#    #+#              #
#    Updated: 2018/08/10 14:36:03 by falupine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IP=$(ifconfig| grep "inet " | cut -d " " -f 2 | tr -d " ");
if [ -z "$IP" ]
then
	echo "I am lost!";
else
	echo "$IP";
fi
