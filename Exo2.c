#include <stdio.h>
int a = 'é';
int b = 'è';
int c = 'à';

char *majuscule(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        //on filtre poru avori que les lettres minuscules
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
        if (s[i] == a || s[i] == b)
        {
            s[i] = 'E';
        }
        if (s[i] == c)
        {
            s[i] = 'A';
        }

        i++;
    }
    puts(s);
    return s;
}

int main()
{

    if (a > b)

        printf("haha");
    char chaine[] = "Pas de concours d'entrée à l’ENSAM cet été 2020 !";
    majuscule(chaine);
    puts(chaine);
}
