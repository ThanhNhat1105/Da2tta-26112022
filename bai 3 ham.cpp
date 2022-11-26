#include <stdio.h>
int tongN(int n);
int main()
{
	int n;
do
	{
	printf("\n nhap gia tri n:");
	scanf("%d",&n);	
	}
while (n<1||n>10);

printf("\n Tong S(n) la: %d ", tongN(n) );
return 0;
}
//ham tinh tong

int tongN(int n)
{
	int tong=0;
	int i=1;
	while (i<=n)
	{
		tong=tong+i;
		i++;
	}
		return tong;
}
