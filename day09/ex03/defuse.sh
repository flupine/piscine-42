# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falupine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/10 11:06:20 by falupine          #+#    #+#              #
#    Updated: 2018/08/10 12:55:25 by falupine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEMPS="$(stat -f %m -t %Y bomb.txt)"
FINAL=$((TEMPS - 1))
echo "${FINAL}"