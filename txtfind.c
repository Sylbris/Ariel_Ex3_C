#include<stdio.h>
#include<string.h>
#include"isort.h"
#define WORD 30
#define line 256

/*
// Takes Stdio , and converts into each sentence into
// a char array.
*/

int getlines(char s[]){
	char c;
	int counter=0;
	while((c=getchar())!='\n'){
		s[counter]=c;
		counter++;
	}
	return counter;
}
/*
// Takes stdio and converts into words.
//
*/

int getword(char w[]){
	char c;
	int counter=0;
	while((c=getchar())!='\0' && c!=' ' && c!='\t'){
		w[counter]=c;
		counter++;
	}
	return counter;
}
//check if str2 has str1
int substring(char *str1, char *str2){
	if(strlen(str1)>strlen(str2)){
		return 0;
	}
	if(strstr(str1,str2)!=NULL){ return 1; }
	else {
		return 0;
	}
}
int similar(char *s,char *t, int n){
return 0;
}
/*
//
//
*/
void print_lines(char *str){
	char lines[line];
	char words[WORD];
	while(getlines(lines)){
		while(getword(words)){
			if(substring(str, words)==1){
				printf("%s" , lines);
				}
			}
		}
}

void print_similar_words(char *str){
	char words[WORD];
	while(getword(words)){
		if (similar(str, words, 0)==1 || similar(str, words, 1)==1){
			printf("%s" , words);
		}
	}
}

