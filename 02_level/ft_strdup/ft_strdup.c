#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    char *dup;

    while(src[i])
        i++;
    dup = (char *)malloc((i + 1) * sizeof(char));
    if(!dup)
        return NULL;
    i = 0;
    while(src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    return (dup);
}

#include <stdio.h>

int main(void){
    char *str = "hello world ";
    char *dup = ft_strdup(str);

    printf("%s\n",dup);
    return 0;
}