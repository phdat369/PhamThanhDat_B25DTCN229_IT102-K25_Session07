#include <stdio.h>
#include <math.h>
int main(){
	int N;
	printf("Nhap so nguyen N : ");
	scanf("%d",&N);
	int so_chan=0;
	int so_le=0;
	for(int i=1;i<=N;i++){
		if(i%2==0){
			so_chan+=1;
		}
		else {
			so_le+=1;
		}
	}
		printf("So chu so chan : %d\n",so_chan);
		printf("So chu so le : %d",so_le);
}
