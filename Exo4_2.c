
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
        
        /*si le string contient plusieur séparateur suivi tel que plus d'un espace l'un après l'autre on les ignore avec continue*/
        if(str[i] == sep)
        {
          i++;
          continue;
        }

           
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
    char sepp;
    printf("Donnez une URL\n");
    gets(s);
    printf("Donnez le séparateur\n");
    scanf("%c", &sepp);
    splitstring(s, sepp);

    for (int i = 0; i < nombre_de_mots; i++)
    {
        puts(split[i]);
    }
}
