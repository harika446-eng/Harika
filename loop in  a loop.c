#include<stdio.h>
int main(){
	int i,j,n;;
	printf("enter no of rows:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
{
	for(j=1;j<i;j++){
		if((i+j)%2==0){
			printf("\t1");
		}else
		{
			printf("\t0");
		}
	}
	printf("\n");
}

}
