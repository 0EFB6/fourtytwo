# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 09:27:33 by tnard             #+#    #+#              #
#    Updated: 2021/07/22 09:27:34 by tnard            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

cat /etc/passwd | sed "/^#/d" | sed -n 'n;p' | cut -f1 -d":" | rev | sort -r | sed -n $FT_LINE1,${FT_LINE2}p | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./' | sed -e 's/\n/ /g' | tr -d '\n'