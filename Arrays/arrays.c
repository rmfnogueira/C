#include <stdio.h>

int main(void)
{
    // type_name array_name[array_size];

    // manual initialization
    int array_1[5] = {1, 2, 4, 5, 6};

    // intitialize array_2 with loop
    int array_2[5];
    for (int i = 1; i < 6; i++)
    {
        printf("%d", array_1[i]);

        array_2[i] = i;
        // print array_2 values
        printf("%d", array_2[i]);

        // print index and value
        printf("\narray_2[%d]=%d\n", i, array_2[i]);

        // character array
        char char_array[] = "\nHello";
        printf("%s", char_array);
        // using %s format specifier to print characters

      
        int int_arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
        // print out
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; i++)
            {
                printf("\n%d", int_arr[i][j]);
            }
            printf("\n");
        }
    }
}
