#include <stdio.h>
#include <string.h>

char sub[100];

char *substring(char *str, int start, int stop)
{

    if (stop <= start)
        return NULL;

    if (stop >= strlen(str))
        stop = strlen(str) - 1;

    if (str == NULL)
        return NULL;

    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {

        if (i >= start && i < stop)
        {
            sub[j] = str[i];
            j++;
        }

        i++;
    }

    return sub;
}
int main()
{
    char a[] = "comme ici, comme ailleurs";
    puts(substring(a, 0, 10));
}