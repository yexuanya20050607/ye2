#include <stdio.h>
int main()
{
	int n;
	int shi;
	int bai;
	int ge;
	int t;
	scanf("%d",&n);
	bai=n/100;
	shi=n/10%10;
	ge=n%100%10;
	t=ge*100+shi*10+bai*1;
    printf("%d",t);
	return 0;
}

	