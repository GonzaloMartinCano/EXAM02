/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:25:08 by gmartin-          #+#    #+#             */
/*   Updated: 2020/01/21 19:25:09 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int asci[255] = {0};
    int i = 0;
    int j = 0;
    
    if (argc == 3)
    {
        i = 1;
        while (i < 3)
        {
            j = 0;
            while(argv[i][j])
            {
                if (!asci[(unsigned char)argv[i][j]])
                {
                    asci[(unsigned char)argv[i][j]] = 1;
                    write(1, &argv[i][j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
