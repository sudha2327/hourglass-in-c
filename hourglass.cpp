#include<stdio.h>
int main(){
	int a[20][20];
	int c;
	int sum;
	int max=-200000; //suppose if we assigning the any negative value matrix int =0 will not give the answers so that just ass neative values as like -500000 someting you will get the answer 
	scanf("%d",&c);
	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//printing
	
	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++){
			printf("%d \t ",a[i][j]);
		}
		printf("\n");
	}
	
	//hour glass max sum
	
	for(int i=0;i<c-2;i++){
		for(int j=0;j<c-2;j++){
			 sum=(a[i][j]+a[i][j+1]+a[i][j+2] )+ (a[i+1][j+1] )+ (a[i+2][j]+a[i+2][j+1]+a[i+2][j+2] );
			
			if(sum>max){
				max=sum;
			}else{
				continue;
			}
			
				//printf("sum of tth hourglass sytem is :%d",sum);
		}
	}
//	printf("sum of tth hourglass sytem is :%d",sum);
    printf("max sum:%d",max);
	
	return 0;
}
