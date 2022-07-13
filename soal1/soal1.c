#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf ("Halo, mas!\nNamanya siapa, mas?\n");
    gets(str);
    printf ("Halo, mas %s!\nSelamat hari lebaran\nMohon maaf lahir dan batin dari kelompok ITB05 :D\nSemoga kuliah, karir, dan kehidupannya semakin lancar kedepannya :DD", &str);
    return 0;
}
