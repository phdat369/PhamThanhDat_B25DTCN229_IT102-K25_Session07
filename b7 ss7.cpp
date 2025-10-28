#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("Nhap 2 khoang a va b : ");
	scanf("%d%d",&a,&b);
	if(a>=b){
		for(int i=b;i<=a;i++){
			printf("\n%d",i);
		}
	}
	else if(b>=a){
		for(int n=a;n<=b;n++){
			printf("\n%d",n);
		}
	}
}
