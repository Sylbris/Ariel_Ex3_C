#include<stdio.h>
#include"isort.h"

void shift_element(int* arr, int i){

int *pointer=(arr+i);

for(int j=0;j<i;j++){
//printf("pointer is %d: \n", *pointer);
//printf("arr is %d: \n", *arr);
*pointer=*(pointer-1);
pointer--;
}
}
/*
// The program holds 2 pointers i is bigger than j,
// goes over the array, if it encounters an element that is smaller than its previous one,
// begin insertion_sort, count elements that are bigger than pointer_j. 
// once finished move the elements of the array and store the element that is erased.
*/
void insertion_sort(int* arr, int len){
if(len>1){
int *pointer_i; //will point to the second
int *pointer_j; //will point to the first
int counter=0; //Will counter how many elements we need to shift.
int j=0; //our first index
int temp=0; //will be used to swap elements in array.

for(int i=1;i<len;i++){
j=i-1; //j holds the first index.
pointer_i=(arr+i); 
pointer_j=(arr+j);
counter=0;
if(*pointer_j>*pointer_i){ //if we encounter an elemenet not in place begin insertion sort.
while(j>=0 && *pointer_j>*pointer_i){

counter++;
j--;
pointer_j=(arr+j);

}

temp=*(pointer_i);
shift_element(arr+j+1,counter);
*(arr+j+1)=temp;

}
printf("[ ");
for(int j=0;j<len;j++)
{
printf("%d , ",arr[j]);
}
printf("] \n");
}
}
}

