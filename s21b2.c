#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("An.txt","r");
char text;

text = fgetc(fptr);
printf("%c",text);



return 0;

}

