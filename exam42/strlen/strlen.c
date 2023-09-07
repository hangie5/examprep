#include <stdio.h>

int strlen(char *str);
{
    int i;

    i = 0;
    while(str[i])
    i++;
    return(i);
}

int    main(void)
{
    char    *c= "test";
    printf("%d", ft_strlen(c));
}