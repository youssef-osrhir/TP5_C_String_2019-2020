#include <stdio.h>
#include <string.h>


void supprimer_char(char* s, int i)
{
  
  while(s[i] != '\0' )
  {
    s[i]=s[i+1];
    i++;
  }
}

char * supprimer_espaces (char * s)
{
  int i=0;
  int j;

  //supprime les espaces avant la premiere lettre
  if(s[0]==' ')
    {
      int k=0;
      while(s[k]==' ')
      {
        supprimer_char(s, k);
        k++;
      } 
    }
    if(s[0]==' ')//chyata
      supprimer_char(s, 0);
    
  //supprimer les espaces au milieu de la chaine et à la fin
  while(s[i]!='\0')
  {
    if(s[i]==' ')
    {
      j=i+1;
      while(s[j]==' ')
      {
        supprimer_char(s, j);
        j++;
      }

      if(s[j-1]==' ')
        supprimer_char(s, j-1);
    }

    i++;
  }

//suppression des espaces à la fin restants
  long cpt=strlen(s)-1;

  while(s[cpt]==' ')
  {
    supprimer_char(s,cpt);
    cpt--;
  }
  return s;
}




int main()
{
   char chaine[] = "   Bonjour     tous    le    monde                                         ";
   char resultat[] ="Bonjour tous le monde";


   puts(chaine);
   supprimer_espaces(chaine);
   puts(chaine);
   puts(resultat);

   printf("%ld\n",strlen(resultat));
   printf("%ld\n",strlen(chaine));


 
    
}  
