#include <stdio.h>

int main() {
    int arr[10];
    int max=arr[0],num=0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if(arr[i]>max){
            max=arr[i];
        }
        num+=arr[i];
    }
    printf("最大的数是%d",max);
    printf("十个数之和是%d",num);
    for (int i = 0; i < 10; ++i) {
        if(arr[i]<max){
            max=arr[i];
        }
    }
    printf("最小的数是%d",max);
}
