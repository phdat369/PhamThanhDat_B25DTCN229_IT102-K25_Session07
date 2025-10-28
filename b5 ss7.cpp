#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	int so_ban_dau=n;
	int tong=0;
	int a;
	while(n!=0){
		a=n%10;
		tong=pow(a,3)+tong;
		n=n/10;
	}
	if(so_ban_dau==tong){
		printf("Day la so Armstrong");
	}
	else{
		printf("Day khong phai la so Armstrong");
	}
	
}
