#include <stdio.h>
#include <string.h>

char * substring (char * str, int start, int stop)
{
  if(start >= stop || str == NULL)
    return NULL;

  if(stop >= strlen(str))
    stop = strlen(str)-1;
  
  char sous_chaine[100];
  int j=0;

  for(int i=start; i<stop;i++)
  {
    sous_chaine[j]=str[i];
    j++;
  }

  puts(sous_chaine);

  return sous_chaine;


}
int main()
{
  char s[]="Bonjour tous le monde";

  substring(s, 3, 14);
}
