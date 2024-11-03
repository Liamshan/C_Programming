 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    char line[255];
    FILE * fpointer = fopen("11-1_employees.txt", "r");
    
    fgets(line, 255, fpointer);  // Grab the first line in the file
    printf("%s", line);
    fgets(line, 255, fpointer);  // Grab the second line in the file
    printf("%s", line);

    fclose(fpointer);
    return 0;
 }


 /*
 r = read
 w = write
 a = append

 Files are read 1 line at a time.
 */
