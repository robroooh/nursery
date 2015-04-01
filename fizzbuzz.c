//fizzbuzz
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void fizzbuzz(int n){
    if(n % 3 == 0 && n % 5 == 0){
        printf("Fizz Buzz");
    }else if (n % 3 == 0){
        printf("Fizz");
    }else if (n % 5 == 0){
        printf("Buzz");
    }else{
        printf("%d", n);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    fizzbuzz(n);
    return 0;
}
