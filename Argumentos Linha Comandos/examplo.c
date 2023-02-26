/*
main function signature:
    int main(int argc, char *argv[])
calling:
    myexe param1 param2
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    // argc is the number of command-line arguments we pass to our executable
    // argv is the pointer to an array of strings that represent the arguments.
    printf("The command-line arguments are:\n");
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    // Invoke .exe with param1 param2
}