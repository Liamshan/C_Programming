 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    /*
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);  //to store inside an variable you need a pointer

    printf("your age is: %d\n", age);

    //now with string (no pointer needed on name)
    char name[20]; // grabs characters up to the first space
    printf("Enter your name: ");
    scanf("%s", name);
    printf("your name is %s\n", name);
    */

    // Getting a string from a user (with spaces)
    char fullname[20];
    printf("Enter your full name: ");
    fgets(fullname, 20, stdin);
    printf("\nyour full name is %s", fullname);
   
 }
