//
// Created by 18751 on 2023/3/22.
//
#include <stdio.h>
#include <string.h>

void Oprate(int *arr,int size);
void Showarr(int arr[],int size);
void main(){
    int arr[10] = {1,3,5,7,9,11,13,15,17,19};
    int size = sizeof (arr)/sizeof (arr[0]);
    Oprate(arr,size);
    Showarr(arr,size);
}
void Oprate(int *arr,int size){
    for (int i = 1; i < size; ++i) {
    }
}
void Showarr(int arr[],int size){
    for (int i = 0; i < size; ++i) {
        printf("%-3d",arr[i]);
    }
}