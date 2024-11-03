 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    FILE * fpointer = fopen("11-1_employees.txt", "w");
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); //fprintf() means print to a file. 

    fclose(fpointer);
 }


 /*
 r = read
 w = write
 a = append
 */
