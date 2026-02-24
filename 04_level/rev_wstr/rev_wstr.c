#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int first;
    char *s;

    i = 0;
    first = 0;
    s = argv[1];
    if (argc == 2)
    {
        while(s[i] != '\0')
            i++;
        i--;
        while(i >= 0)
        {
            while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))
                i--;
            j = i;
            while(j >= 0 && (s[j] != ' ' && s[j] != '\t'))
                j--;
            if(first)
                write(1," ", 1);
            write(1, &s[j+1], i - j);
            first = 1;
            i = j;
        }
    }
    write(1,"\n",1);
    return 0;
}