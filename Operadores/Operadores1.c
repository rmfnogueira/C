#include <stdio.h>

int main(void)
{
    /*OPERATORS:
    arithmetic:
    + adicao        ---
    - subtracao     ---
    * multiplicaçao ---
    / divisao       --- can be integer or floating point numbewrs, integral division ocorre quando ambos os operandos são do mesmo tipo.
    % modulus       --- devolve o resto, 9 % 2 = 5; em matematica 9 dividido por 2 = 4.5, o modulus devolve o resto, a seguir ao separador
    */
    // ASSINGMENT OPERATORS
    int int1 = 3;
    int int2 = int1;
    printf("%d", int2);

    char c1 = 'A';
    char c2 = c1;
    int d1 = 3;
    float f1 = 123.3f;

    printf("\nCHAR: %c,\nINT: %d,\nFLOAT: %f", c2, d1, f1);

    // COMPOUND ASSIGNMENT

    /*RELATIONAL OPERATORS
    >- greater than
    <- less than
    >= greater then or equal
    <= less than or equal
    */

    int int4 = 5;
    int int5 = 4;
    int isgreaterthan = int4 > int5;
    printf("\nThe value of \"is greater then\" expression %d\n", isgreaterthan);

    /*EQUALITY OPERATORS
     == equal to
     != not equal to
    */

    int equals1 = 3;
    int equals2 = 35;
    int comparison = equals1 = equals2;
    printf("\n%d", comparison);

    /* LOGICAL OPERATORS
       && AND
       || OR
    \  ! unary negation - must be escaped
    */
    int equals_AND = equals1 && equals2;
    int equals_OR = equals1 || equals2;
    int equals_NEGATION = !equals1;
    printf("\nAND: %d", equals_AND);
    printf("\nOR: %d", equals_OR);
    printf("\nNEGATION: %d", equals_NEGATION);

    /* INCREMENT AND DECREMENT
    (++var_name)    ++ prefix
    (var_name++)    ++ postfix
    (--var_name)    prefix --
    (var_name--)    postfix --
    */
    int inc1 = 10;
    int inc2 = 30;
    int prefix = ++inc1;
    int postfix = inc2++;
    printf("\nprefix: %d, postfix: %d", prefix, postfix);

    // EXPRESSIONS
    // Type Conversions: some conversions are implicit, and occur automatically
    // we cexplicitily convert between types with the (convert_to_type) expression syntax

    // explicit conversion
    int con_char;
    con_char = (int)c1; // using EXPLICIT CAST
    printf("\nResult:%d", con_char);

    // implicit conversion
    // double inc1_2 = inc1 / inc2;
    // printf("\nResult:%f", inc1_2);
    // or to get the correct value, use an EXPLICIT CAST
    double inc1_2 = (double)inc1 / inc2;
    printf("\nResult:%f", inc1_2);

    // Selection statements
    // IF with single statement
    int if1 = 123;
    if (if1 < 200)
        printf("\nif1 is %d", if1);

    // IF block of statements
    if (if1 < 200)
    {
        printf("\nif1 is %d", if1);
        printf("\nif1 is %d", if1);
        printf("\nif1 is %d", if1);
        printf("\nif1 is %d", if1);
    }
    // with condition using AND operator
    if (if1 < 200 && if1 >= 100)
    {
        printf("\nCondition is true.");
    }
    // using OR
    if (if1 < 200 || if1 > 100)
    {
        printf("\nCondition is true.");
    }
    // using NEGATION\!
    if (!(if1 = 123))
    {
        printf("\nCondition is true.");
    }
    // IF_ELSE
    /*
    if (some_condition)
        some_statement:
    else
        other_statement;
    */
    // SWITCH
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;

    // default:
    //     break;
    // }

    // WHILE
    int counter = 0;
    while (counter < 10)
    {
        printf("\nWHILE loop");
        counter++;
    }

    // DO
    int counter2 = 0;
    do
    {
        printf("\nDO loop");
        counter2++;
    } while (counter2 < 5);

    // FOR
    for (size_t i = 0; i < 5; i++)
    {
        printf("\nFOR loop");
    }
}
