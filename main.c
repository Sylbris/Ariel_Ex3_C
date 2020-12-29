#include<stdio.h>
#include"isort.h"
#define WORD 30
#define line 256
int getliness(char s[]);
int main()
{
char lines[256];
while(getliness(lines)){
printf("%s\n", lines);
}
//int arr[]={2,6,52,0,3,5,6,87};
//int arr[]={2,6,52,4,124,123,6,2};
//int arr[]={2,1};
//int size=8;
//int *pointer=arr;
//shift_element(pointer,3);
//insertion_sort(pointer,size);
//for(int i=0;i<size;i++){
//printf("%d , ",arr[i]);
//}


}
int getliness(char s[]){
	char c;
	int counter=0;
	while((c=getchar())!='\n' && c!=EOF){
		s[counter]=c;
		counter++;
	}
	s[counter]=0;
	return counter;
}
