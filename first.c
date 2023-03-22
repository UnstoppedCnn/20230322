#include <stdio.h>

//
// Created by 18751 on 2023/3/22.
//
void main(){
    int arr[10] = {1,3,5,7,9,11,13,15,17,19};
    int i=0,j=10-1;
    int temp;
    while(i<=j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int k = 0; k < 10; ++k) {
        printf("%3d",arr[k]);
    }
}