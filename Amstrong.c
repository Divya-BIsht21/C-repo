#include<stdio.h>
int main(){
	int n,num, rem, sum=0;
	printf("Enter the no to check if amstrong or not: ");
	scanf("%d\n", &num);
		n=num;
		while(num>0){
			rem = num % 10;
			sum = (rem*rem*rem)+sum;
			num/=10;
		}if(n==sum){
			printf(" is an amstrong no.");
		}else{
			printf(" is not an amstrong no.");
		}
		return 0;
	}


