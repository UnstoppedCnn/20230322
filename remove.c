//
// Created by 18751 on 2023/3/22.
//
#include "stdio.h"
void Oprate(int *arr,int size);
void Showarr(int *arr,int size);
void main(){
    int arr[16] = {12,12,32,22,32,54,5,454,54,65,11,78};
    int len = sizeof (arr)/sizeof (arr[0]);
    printf("%d\n",len);
    Oprate(arr,len);
    len = sizeof (arr)/sizeof (arr[0]);
    Showarr(arr,len);
}
void Oprate(int *arr,int size){
    int temp;
    for (int i = 0; i < size; ++i) {
        temp = arr[i];
        for (int j = i; j < size; ++j) {
            int tmp=j;
            if(arr[j]==temp&&temp!=0){
                while(tmp>i){
                    arr[tmp]=arr[tmp+1];
                    tmp--;
                }
            }
        }
    }
}
void Showarr(int arr[],int size){
    for (int i = 0; i < size; ++i) {
        printf("%-3d",arr[i]);
    }
}