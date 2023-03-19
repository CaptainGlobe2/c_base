#include <stdio.h>

int main()
{
	int a[30],max,size,i;
	printf("enter the number of elements:");
	scanf("%d",&size);
	printf("enter the number of elements\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<size;i++){
		if(max<a[i]){
			max=a[i];}
		}
		printf("max value is %d",max);
}
