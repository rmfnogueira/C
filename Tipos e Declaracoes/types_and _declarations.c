#include <stdio.h>

// function takes no parameters
int main(void)
{
    printf("\nHello\nThis is Types_And_Declarations practice!\n");

    // CHAR TYPE
    // 1 BYTE in memory, 0x10 hexadecimal, 8 bits
    char mychar = 'A';

    // using placeholder to print char
    printf("\nValue: %c\n", mychar);
    printf("\n%d", mychar);

    // signed char -128 - 127 aproximadamente
    signed char char_signed = 'b';
    printf("\nSigned char: %d\n", char_signed);

    // measuring how "long" using %zi or %zu, sizeOf
    printf("\nMeasuring length using sizeof operator: %zi byte long:\n", sizeof(char_signed));

    // testing unsigned char 0-255;
    unsigned char_unsigned = 255;
    printf("\nUnsigned char: %d\n", char_unsigned);

    // INTEGER TYPE
    // cand be:
    //  Decimal integer      - negative and positive numbers
    //  octal constant       - begin with a zero sign (0), followed by numbers 0 - 7 (just like linux)
    //  hexadecimal constant - 0x or 0X, see hexadecimal numbers;
    // int is usually 4 bytes widw
    // from: -32768 to +32767 on our computer usually ranges -2147483648 to +2147483647
    // modifiers:
    // signed,unsigned, short, long:
    // signed - default - simply type int
    // unsigned qualifier says type int can only hold positive values

    int x = 123; // decimal
    int y = 072; // octal
    int z = 0xA; // hexa
    printf("\n%d\n%o\n%X\n", x, y, z);

    int onevalue = 10;
    printf("\nOne value with diferent representations:\n%d\n%o\n%x\n", onevalue, onevalue, onevalue);

    // unsigned integers
    unsigned u = 123456789u;
    printf("\n unsigned int: %u\n", u);

    // type short - 2 bytes in length
    // type long - 4 bytes in length

    short sho = 1234;
    printf("\nShort int: %d\n", sho);
    long lon = 12345678l;
    printf("\nLong int: %ld\n", lon);

    // chaining types together
    unsigned short st = 1234u;
    printf("\nUnsigned short: %hu\n", st); //%hu format specifi

    // declare and print type long value
    unsigned long logg = 123456789ul; // unsigned long, combining suffixes
    printf("\nUnsigned long: %lu\n", logg);

    // unsigned long long
    unsigned long long ll = 123456789llu;
    printf("\nUnsigned long long%llu\n", ll);

    // FLOAT Types
    // there are 3 types:
    // float, double, long double

    // float:
    // used for storing single-precision floating-point numbers (real numbers) - 4 bytes wide, ex.: 123.456
    // whole part number (123) separator (.) fractional/decimal 456

    float my_boat = 123.456f;
    printf("\nFloat:%f", my_boat);                   //%f default of format specifier is 6, also adds imprecise 001 part
    printf("\nFloat: decimal part:%.3f\n", my_boat); //%.3f to print only 3 decimal places
    printf("\nFloat: specify lenght/width of:%3.3f\n", my_boat);

    // double:
    // also for storing floating point values - 8 bytes length/wide, offers increased precision and range as compared to type float

    double d = 12345.6789;
    // floating point constants whitout suffixes are of type double by default
    printf("\n%f\n", d);
    double exponent = 12e-3;
    // to print double, use %f or %lf format specifier
    printf("\nDouble with exponent: %f\n", exponent);
    // long double:
    // increased range precision
    long double my_long_double = 123251.1351346l; // have l or L suffixes
    printf("\nValue:%Lf\n", my_long_double);
}
