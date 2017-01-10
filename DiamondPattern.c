//Program for Diamond Pattern
/*
author @dasolanki
*/
#include<stdio.h>
int main(){
int n,c,k,space=1;
printf("Enter number of rows\n");
scanf("%d",&n);

space=n-1;		//here we will divide diamond in 2 parts upper and lower

//printing upper part
for(k=1;k<=n;k++){
	for(c=1;c<=space;c++){
		printf(" ");	//leaving space before printing
	}
	space--;
	for(c=1;c<=2*k-1;c++){
		printf("*");	//printing * by calculating row no.
	}
	printf("\n");	//moving yo new line after printing one

}
space=1;

//printing lower part
for(k=1;k<=n-1;k++){
	for(c=1;c<=space;c++){
		printf(" ");
	}
	space++;
	for(c=1;c<=2*(n-k)-1;c++){
		printf("*");
	}
	printf("\n");
}
return 0;
}
