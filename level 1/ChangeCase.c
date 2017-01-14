//Program for changing the case of input string
/*
author @dasolanki
*/
#include <stdio.h>
#include <string.h>
int main(){
int ch;
char str[100];
printf("Enter a String\n");
scanf("%s",&str);
printf("Enter your choice:\n");
printf("1.Lower Case\n2.Upper Case\n");
scanf("%d",&ch);
switch(ch){
case 1:printf("%s\n",strlwr(str));	//strlwr() will print string in lower case
	break;
case 2:printf("%s\n",strupr(str));	//strupr() will print string in upper case
	break;
}	
}
