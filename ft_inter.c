/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:55:52 by gmartin-          #+#    #+#             */
/*   Updated: 2020/01/13 18:43:42 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int asci[255] = {0};
    
    if (argc == 3)
    {
        while(argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[2][j] == argv[1][i])
                {
                    if(asci[(int)argv[1][i]] == 0)
                    {
                        asci[(int)argv[1][i]] = 1;
                        write(1, &argv[2][j], 1);
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1,"\n", 1);
    return(0);
}
