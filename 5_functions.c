#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[]) {  //just strings are a little different. 
    printf("Hello %s\n", name);
}

int main() {
    sayHi("Mike");
    sayHi("Tony");
    sayHi("Liam");

    return 0;
}
