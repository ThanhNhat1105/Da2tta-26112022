#include <stdio.h>
float PT( float a, float b, float &x);
int main()
{
	float a, b ,x;
	printf("\n nhap gia tri a ");
	scanf("%f",&a);
	printf ("\n nhap gia tri b:");
	scanf("%f", &b);
	
	
	int nghiem =PT(a , b , x);
        if(nghiem == 0) {
        printf("\nPhuong trinh da cho vo so nghiem");
    }
    else if(nghiem == 1){
        printf("\nPhuong trinh da cho vo nghiem" );
    }
    else{
        printf("\nPhuong trinh da cho co nghiem phan biet\nx=%.4f",x);
    }
	return 0;
}
float PT(float a, float b, float &x)
{
 if (a==0)
 	{
 		return 0;
 	}
 	else if (b==0)
 	{
 		return 1;
 	}
 	else 
 	{
 		x=(-b/a);
 		return 2;
 	}
}
