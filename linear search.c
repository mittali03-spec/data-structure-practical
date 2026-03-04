#include <stdio.h>
int main(){
	int a[5],i,n=5,element;
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the searching element");
	scanf("%d",&element);
	for(i=0;i<n;i++){
		if(a[i]==element){
			printf("the element location is %d",i);
		}
	}
	return 0;
}
