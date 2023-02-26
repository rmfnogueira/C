/*
A file is an array of bytes.

To be able to read from a file we need to utilize a couple of functions.

WORKFLOW:
Abrir o ficheiro: função fopen()
Ler uma linha: função fgets()
Fechar o ficheiro: função fclose();
*/
#include <stdio.h>

// reads all lines
int fn1()
{
    char str[100];
    FILE *file_pointer = fopen("file.txt", "r");  // open a file
    while (fgets(str, 100, file_pointer) != NULL) // read line of text
    {
        printf("%s", str); // print the line of text
    }
    fclose(file_pointer); // close the file
}
// with error checking
int fn2()
{
    char str[100];
    FILE *file_pointer = fopen("file.txt", "r"); // open a file
    if (!file_pointer)
    {
        while (fgets(str, 100, file_pointer) != NULL) // read line of text
        {
            printf("%s", str); // print the line of text
        }
    }
    fclose(file_pointer); // close the file
}

int main(void)
{
    fn1();
    fn2();
}