#include <stdio.h>

int main()
{
    // Single line comments: compiler will ignore this
    
    /* Multi
    Line
    Comments
    */

    //  int, float, char

    int a1=67;       // 2 to 4 bytes
    float b1=35.88;  // 4 bytes - 6 decimal precision
    char c1='g';     // 1 byte

    unsigned int integer1 =8;
    unsigned short integer2 =13;    // 2 bytes

    long integer3=6478696;      // 4 bytes
    short integer4=76;          // 2 bytes
    double myfloat1=7.45;               // 8 bytes - 15 decimal places precision
    long double myfloat2=7.465487885;   // 10 bytes - 19 decimal places precision

    printf("The size taken by int is %d\n", sizeof(int));
    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by float is %d\n", sizeof(float));
    printf("The size taken by double is %d\n", sizeof(double));
    printf("The size taken by long double is %d\n", sizeof(long double));
    printf("The size taken by char is %d\n", sizeof(char));
    printf("The size taken by unsigned char is %d\n", sizeof(unsigned char));
    printf("The size taken by short int is %d\n", sizeof(short int));

    printf("hello %d\n", a1);
    printf("hello %f\n", b1);
    printf("hello %c\n", c1);

    printf("\n*******Rules for creating variables*********");
    int akpName;   // This is variable declaration
    akpName = 76;  // This is variable initialization
    char five = '5'; // This is variable declaration and initialization

    const int i = 9;
    // i = 10;
    akpName = 98;

    printf("\n\n*******Types of operators in C*********\n");

    /*
    Arithmetic Operators
    Relational Operators
    Logical Operators
    Bitwise Operators
    Assignment Operators
    Misc Operators
   */
    // Arithmetic Operators
    int a = 60, b = 7, c = 8;
    printf("The sum of a and b is %d\n", a + b);
    printf("The difference of a and b is %d\n", a - b);
    printf("The multiplication result of a and b is %d\n", a * b);
    printf("The division result of a and b is %d\n", a / b);
    printf("The modulo result of a and b is %d\n", a % b);
    printf("The increment result of a is %d\n", ++a);
    printf("The decrement result of a is %d\n", --b);

    // Relational Operators
    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan);
    printf("%d\n", harry != rohan);
    printf("%d\n", harry > rohan);
    printf("%d\n", harry < rohan);

    // Logical Operators
    int h = 0, j = 1;
    printf("The logical operator returned %d\n", h && j);
    printf("The logical operaTor returned %d\n", h || j);
    printf("The logical operator returned %d\n", !j);
    printf("The logical operator returned %d\n", !h);

    // Bitwise Operators
    // A = 60 B=13
    // A = 00111100
    // B = 00001101
    // R = 00001100
    int A = 60, B = 14;
    printf("Bitwise and operator returned %d\n", A & B);
    printf("Bitwise or operator returned %d\n", A | B);
    printf("Bitwise xor operator returned %d\n", A ^ B);
    printf("Bitwise ones complement operator returned %d\n", ~B);
    printf("Bitwise left shift operator operator returned %d\n", A << B);
    printf("Bitwise right shift operator operator returned %d\n", A >> B);

    // Assignment Operators
    // =, +=, -=, *=, %=, etc
    int ha = 9;
    ha += 9;
    printf("ha is %d\n", ha);

    // Misc Operators - &, *, ?:

    printf("\n\n*******Taking input from user in C*********");
    int akpInput;
    printf("\n Please enter the value of akpInput");
    // scanf("%d", &akpInput);
    // printf("\n You Entered %f as akpInput", (float) akpInput);

    // int num1, num2;
    // scanf("%d", &num1);
    // scanf("%d", &num2);
    // printf("\n num1/num2 is %f", (float)num1/num2);

    printf("\n\n*******Decision Making in C*********\n\n");
    int age;
    printf("Enter your age\n");
    // scanf("%d", &age);
    age = 44;
    if (age < 18)
    {
        printf("You cannot drive");
    }
    else if (age >= 18 && age <= 24)
    {
        printf("You are banned from driving");
    }
    else
    {
        printf("You can drive but drive carefully\n");
    }

    // Exercise: Tell me about Switch statement
    int i4 = age > 3 ?100 : 200; //short hand if else
    printf(" %d ", i4);

    printf("\n\n*******Loop in C*********\n\n");
    int index = 0;
    while (index < 7)
    {
        printf("%d\n", index);
        // index++;
    }

    for(int j = 0; j < 18; j++)
    {
        printf("%d\n", j);
    }

    do
    {
        printf("do while loop is running");
    }
    while (j>667567788967686);
    
    printf("\n\n*******Functions in C*********\n\n");
    

    return 0;
}