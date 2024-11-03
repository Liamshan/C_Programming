 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    int age = 30;
    int *pAge = &age;

    // Print the pointer
    printf("the pointer: %p\n", &age);
    // Print the dereferenced pointer value
    printf("the pointer's information: %d", *pAge);

    //watch the dereference and reference. 
    printf("\n\n\n");
    printf("\npointer: %d", &age);
    printf("\ninfo: %d", *&age);
    printf("\npointer: %d", &*&age);
    printf("\ninfo: %d", *&*&age);

    return 0;
 }

 /* The purpose of dereferencing a pointer is to grab the actual info from the pointer
 I assume this is important because moving and referencing a pointer in a program is very fast
 and efficient, but at the very end of the function, you'll actually need the value that's stored at that memory address
 so i guess the pointer is like a zip file, instead of copying, and pasting a huge matrix in and out of loops and functions
 you just reference it's location until you need it, then you unpackage it at the very end to save the time and memory space
 of moving the whole package around each time. 

  & means reference a pointer
  * means dereference a pointer (get the value at the pointer)

  (practice this stuff)

 */
