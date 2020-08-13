#include <stdio.h>
#include <strings.h>

char split[100][100];
int nombre_de_mots;

char **splitstring(char *str, char sep)
{
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        int k = 0;

        while (str[i] != sep && str[i] != '\0')
        {
            split[j][k] = str[i];
            i++;
            k++;
        }
        i++;
        j++;
    }
    nombre_de_mots = j;

    return split;
}
int main()
{
    char s[100];
    printf("Donnez une URL\n");
    gets(s);

    splitstring(s, ' ');

    for (int i = 0; i < nombre_de_mots; i++)
    {
        puts(split[i]);
    }
}
