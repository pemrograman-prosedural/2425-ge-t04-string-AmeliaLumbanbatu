// 12S24023 - Jaya Bestina Simbolon
// 12S24031 - Amelia Renata Lumbanbatu

#include <stdio.h>

void convertotext(int Ascii){
  printf ("%c", Ascii);
}

    int main () {
    int v;
  char str[61];
  scanf("%60[^\n]", str);

  for (int v = 0; str[v]!='\0' &&  str[v+1]!='\0' &&str[v+2]!='\0'; v+=3){
    int Ascii = 0;
    sscanf(&str[v], "%3d", &Ascii);
    convertotext(Ascii);
  }
  
   printf("\n");
  return 0;
}