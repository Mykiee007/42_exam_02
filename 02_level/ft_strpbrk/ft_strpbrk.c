#include <unistd.h>
#include <stdio.h>


// need more practice - this needs casting

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;

    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s2[j] == s1[i])
            {
                return((char *)&s1[i]);
            }
            j++;
        }
        i++;
    }
    return NULL;
}

int main(void)
{
    const char *s1 = "Hello world.";
    const char *s2 = "or";

    char *str = ft_strpbrk(s1,s2);
    printf("%p\n", str);
     printf("%s\n", str);

    return 0;
}