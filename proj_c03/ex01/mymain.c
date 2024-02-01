#include<stdio.h>
#include<string.h>
int main()
{
    // b has less ASCII value than g
    char first_str[] = "hello";
    char second_str[] = "hello";
 
    int res = strncmp(first_str, second_str, 10);
     
    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
         
    printf("\nValue returned by strcmp() is: %d\n" , res);
     
     
    return 0;
}
