#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int giai_thua=1;
	printf("Nhap vao so nguyen n : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		giai_thua*=i;
	}
	printf("Giai thua cua %d la : %d ",n,giai_thua);
}
