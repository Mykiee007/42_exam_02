#include <unistd.h>

// 10:59pm = 11:24pm

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char *s1;
    char *s2;

    if(argc == 3)
    {
        s1 = argv[1];
        s2 = argv[2];
        if(s1[0] == '\0')
        {
            write(1,"1\n",2);
            return 0;
        }
        while(s2[i] != '\0')
        {
            if(s2[i] == s1[j])
            {
                if(s1[j + 1] == '\0')
                {
                    write(1,"1\n",2);
                    return 0;
                }
                j++;
            }
            i++;
        }
        write(1,"0",1);
    }
    write(1,"\n",1);
    return 0;
}