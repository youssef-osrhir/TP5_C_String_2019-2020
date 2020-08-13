#include <stdio.h>

void supprimer_char(char *s, int i)
{
  int j = i;
  while (s[j] != '\0')
  {
    s[j] = s[j + 1];
    j++;
  }
} 
char *supprimer_espaces(char *s)
{
  int i = 0;
  while (s[i] != '\0')
  {
    // le cas ou l'espace se trouve à la fin ou au debut
    if ((i == 0 || s[i + 1] == '\0') && s[i] == ' ')
      supprimer_char(s, i);

    // le cas ou on a plusieurs espaces suivis au milieu
    if (s[i] == ' ')
    {
      int j = i;
      while (s[j] == ' ')
      {
        supprimer_char(s, j);
        j++;
      }

      if (s[j - 1] == ' ')
        supprimer_char(s, j - 1);
    }

    i++;
  }
  puts(s);

  return s;
}
int main()
{
  char s[] = " Bonjour      tout      le       monde ";
  printf("Avant :");
  puts(s);

  printf("Apres :");
  supprimer_espaces(s);
}
