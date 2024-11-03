 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    char characterName[] = "John";
    int characterAge = 35;
    printf("there once was a man named %s \n", characterName);
    printf("%s was %d years old\n", characterName, characterAge);

    // Do math
    printf("Your number is: %f \n", 5.0 + 4.5);

    //print the pointer of characterAge
    printf("Pointer is: %p \n", &characterAge);

    return 0;
 }


/*
%f for float
%d for integer
%s for string
%c for character
%p for pointer address
*/