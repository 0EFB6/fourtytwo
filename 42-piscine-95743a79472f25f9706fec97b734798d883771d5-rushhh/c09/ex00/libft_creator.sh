# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 09:05:23 by tnard             #+#    #+#              #
#    Updated: 2021/07/22 09:25:51 by tnard            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

gcc -c *.c && ar rc libft.a *.o && rm *.o && ranlib libft.a