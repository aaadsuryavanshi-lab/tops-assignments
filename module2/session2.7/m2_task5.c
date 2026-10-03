#include<stdio.h>
main(){
	int n,i,j,k;
	printf("\nEnter the number as height of pyramid: ");
	scanf("%d",&n);
		for(i=1;i<=n;i++){
		for(k=(n-1);k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
}
