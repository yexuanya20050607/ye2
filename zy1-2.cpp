#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch,a;
	scanf("%c",&a);
	a=(ch>='A'&&ch<='Z')?(ch):(ch+32);
	printf("%c",a);
return 0;
}
