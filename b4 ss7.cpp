#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	printf("Nhaps chieu dai va chieu rong : ");
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		printf("\n");
		for(int a=1;a<=n;a++){
			printf("*");
		}
	}
}

