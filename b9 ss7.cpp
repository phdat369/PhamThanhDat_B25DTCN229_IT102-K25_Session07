#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int tong=0;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	for(int a=1;a<=cbrt(n);a++){
		for(int b=1;b<=cbrt(n);b++){
			if( pow(a,3)+pow(b,3)==n){
				printf("\nCac cap so nguyen thoa man : (%d,%d)",a,b);
				tong+=1;
		}
		}
	}
	if(tong==0){
		printf("Khong tim thay cap so");
	}
}
