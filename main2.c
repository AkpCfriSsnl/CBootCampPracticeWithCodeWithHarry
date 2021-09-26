#include <stdio.h>
#include <string.h>

int glo = 76;
// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

void newPrint(char * char1)
{
    printf("The value is %s\n", char1);
}

int sum(int a, int b)
{
    return a+b;
}

float average(float a, float b)
{
    return (a+b)/2;
}

struct Books{
    char name[50];
    char author[50];
    int price;
} book;


void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book Price is %d\n", bk.price);
}

int main(){
    // newPrint("Hello World\n");
    // printf("The sum of 123 and 235 is %d\n", sum(123,235));
    // printf("The average of 123 and 235 is %f\n", average(123,235));

    // int glo=452;
    // printf("Glo is %d\n", glo);

    int arr[10] = {80,31,42,13,44,52,64,47,88,97};
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the values for index %d\n", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("The value for index %d is %d\n", i, arr[i]);
        // scanf("%d", &arr[i]);
    }
    

    // printf("%d", arr[0]);

    return 0;
}