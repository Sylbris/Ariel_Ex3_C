#include<stdio.h>
#include"isort.h"

int main()
{
//int arr[]={2,6,52,0,3,5,6,87};
int arr[]={2,6,52,4,124,123,6,2};
//int arr[]={2,1};
int size=8;
int *pointer=arr;
//shift_element(pointer,3);
insertion_sort(pointer,size);
for(int i=0;i<size;i++){
printf("%d , ",arr[i]);
}
}
