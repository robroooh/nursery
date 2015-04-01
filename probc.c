//prob c
#include <stdio.h>
#include <math.h>

float findmax(float arr[], int T){
    float max = arr[0];
    int i;
    for (i = 1; i < T; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}
float findmin(float arr[], int T){
    float min = arr[0];
    int i;
    for (i = 1; i < T; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int i,T;
    float max,min;
    scanf("%d", &T);
    float* arr = malloc(sizeof(float*)*T);

    for (i = 0; i < T; i++){
        scanf("%f", &arr[i]);
    }
    max = findmax(arr, T);
    min = findmin(arr, T);

    printf("%.2f", max-min);

    return 0;
}
