#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int tong=0;
	int i;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	while(n!=0){
		i=n%10;
		tong=tong*10+i;
		n = n/10;
	}
	printf("So dao nguoc la : %d",tong);
}
