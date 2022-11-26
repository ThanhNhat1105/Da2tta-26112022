#include <stdio.h>
float tongN(int n);
int main()
{
	int n;
do
	{
	printf("\n nhap gia tri n:");
	scanf("%d",&n);	
	}
while (n<1||n>10);

printf("\n Tong S(n) la: %f ", tongN(n) );
return 0;
}
//ham tinh tong

float tongN(int n)
{
	float tong=1;
	int i=1;
	while (i<=n)
	{
		tong=tong+(1.0/(2*i+1));
		i++;
	}
		return tong;
}
