#include<stdio.h>
int main() {
	int n,i,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		int term=i*i;
		sum+=term;
	}
	printf("sum of the series:%d\n",sum);
	return 0;
}
