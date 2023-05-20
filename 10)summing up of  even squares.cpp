#include<stdio.h>
int main() {
	int n,i,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2) {
		int term=i*i;
		sum+=term;
	}
	printf("sum of the even series:%d\n",sum);
	return 0;
}
