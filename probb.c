//prob b
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<string.h>

int main(){
    int n,i;
    int sum = 1;
    int no_zero_occur = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &n);

        if (n != 0){
            no_zero_occur = 1;
            sum *= n;
        }

    }
    if (no_zero_occur == 0){
        printf("0");
    }else{
        printf("%d", sum);
    }
    return 0;
}
