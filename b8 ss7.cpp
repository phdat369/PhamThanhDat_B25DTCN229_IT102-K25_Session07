#include <stdio.h>
#include <math.h>
int main(){
	long long n;
	int x;
	int tong=0;
	int i;
	printf("Nhap vao so nguyen n : ");
	scanf("%lld",&n);
	printf("\n Nhap vao x tu 0-9 : ");
	scanf("%d",&x);
	while(n!=0){
		i=n%10;
		if(i==x){
			tong+=1;
		}
		n=n/10;
	}
	printf("So lan xuat hien : %d",tong);
}
