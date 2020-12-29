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
	while((c=getchar())!='\n' && c!=EOF){
		s[counter]=c;
		counter++;
	}
	s[counter]=0;
	return counter;
}
/*
// Takes stdio and converts into words.
//
*/

int getword(char w[]){
	char c;
	int counter=0;
	while((c=getchar())!='\0' && c!=' ' && c!='\t' && c!=EOF){
		w[counter]=c;
		counter++;
	}
	w[counter]=0;
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
int similar(char *s,char *t, int n)
{
	int i = 0;
	if (strlen(s) == strlen(t) || strlen(s) +1 == strlen(t))
		{
		for (int j = 0; j < strlen(t); j++)
			{
			if (s[i] == t[j]){
				i++;
									}
			}
			}
	if (i == strlen(s)){
		return 1;
	}
	return 0;
	}
/*
//
//
*/
void print_lines(char *str){
	char lines[line];
	while(getlines(lines)){
			if(substring(str, lines)==1){
				printf("%s" , lines);
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
int main(){

char words[WORD];
scanf(" %s", words);
//printf("%s", words);
char ch;
scanf(" %c", &ch);
if(ch=='a'){
print_lines(words);
}
if(ch=='b'){
print_similar_words(words);
}

}

