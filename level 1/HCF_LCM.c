//program for calculating HCF and LCM
/*
author @dasolanki
*/
#include <stdio.h>
long gcd(long,long);
int main(){
	long x,y,hcf,lcm;
	printf("Enter two integers\n");
	scanf("%d%d", &x,&y);
	
	hcf=gcd(x,y);
	lcm=(x*y)/hcf;
	
	printf("Greatest Common Divisor of %d and %d = %d\n",x,y,hcf);
	printf("Least Common Multiple of %d and %d = %d\n",x,y,lcm);
	
	return 0;

}

/*if 1st no. is 0 then 2nd no. is gcd make 2nd no. 0 by substracting smallest form largest and return 1st no. as gcd*/

long gcd(long x,long y){
	if(x==0){
		return y;
	}
	while(y!=0){
		if(x>y){
			x=x-y;
		}else{
			y=y-x;
		}
	}
	return x;
}
