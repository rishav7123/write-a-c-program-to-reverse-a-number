// write a c program to reverse a number

#include<stdio.h>
#include<math.h>

int main(){
    int num = 1234;
    int reversed = 0, remainder;

    printf("Original number: %d\n", num);

    while(num != 0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("reversed number: %d\n", reversed);
    return 0;
}