
#include "get_next_line.h"
#include <stddef.h>
#include <stdio.h>
#include<stdlib.h>
#include <fcntl.h>
int	main(void)
{
	int		fd;
	char	*line;
    int i = 1;
	fd = open("fichier.txt", O_RDONLY);
    if (fd < 0)
       { 
        return(1);
       }
	while ((line = get_next_line(fd)) != NULL)
    {
        printf("ligne %d : %s\n", i, line);
	    free(line);
        i++;
    }
    close(fd);
    return (0);
}