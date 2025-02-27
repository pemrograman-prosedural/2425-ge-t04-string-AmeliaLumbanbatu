// 12S24023 - Jaya Bestina Simbolon
// 12S24031 - Amelia Renata Lumbanbatu

#include <stdio.h>

int main(int _argv, char **_argc) {
    char str[60];
    scanf("%60[^\n]", str);


    for(int v = 0; str[v] != '\0'; v++) {
      printf("%03d", (int)str[v]);
    }

    printf("\n");

  return 0;
}
