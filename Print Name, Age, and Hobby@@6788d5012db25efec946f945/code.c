#include <stdio.h>

int main() {
    char x[25],z[25];
    int y;
    scanf("%s %d %s "&x, &y,&z);

    printf("Name: %s\nAge: %d\nHobby: %s",x,y,z );
    return 0;
}