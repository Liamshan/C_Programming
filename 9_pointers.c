  #include <stdio.h>
 #include <stdlib.h>

 int main() {
    int age = 30;
    int * pAge = &age;  //initialize a pointer with '*' call a pointer with '&'

    double gpa = 3.4;
    double *pGpa = &gpa;

    char grade = 'A';
    char *pGrade = &grade;

    printf("The pointer for grade is here: %p\n", &grade);  // same
    printf("The pointer for grade is here: %p\n", pGrade);  // same
    
 }

