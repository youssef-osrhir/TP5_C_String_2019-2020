#include <stdio.h>
#include <string.h>
 
char *reverse(char *s)
{

    int n = 0;

    while (s[n] != '\0')
    {
        n++;
    }

    //apres while n va contenir la taille

    for (int i = 0; i < n / 2; i++)
    {
        char tmp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = tmp;
    }

    return s;
}

int main()
{
    char c[100];

    gets(c);

    puts(reverse(c));
}
