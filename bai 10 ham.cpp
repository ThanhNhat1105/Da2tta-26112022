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
	float tong=0;
	int i=0;
	float a=0.0;
	while (i<n)
	{
		tong=tong+((2*a+1)/(2*i+2));
		i++;
		a++;
	}
		return tong;
}
