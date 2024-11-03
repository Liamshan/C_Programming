 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    
    char grade = 'A';

    switch(grade) {
        case 'A':
            printf("You did great! ");
            break;
        case 'B':
            printf("You did aight! ");
            break;
        case 'C':
            printf("Yo, step it up! ");
            break;
        case 'D':
            printf("You straight up suck! ");
            break;
        case 'F':
            printf("Get your shit together! ");
            break;
        default :
            printf("invalid grade.");
    }

    return 0;

 }
