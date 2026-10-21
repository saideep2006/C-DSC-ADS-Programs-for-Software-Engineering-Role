#include<stdio.h>
#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the array size: \n");
	scanf("%d",&n);
	int *arr = (int*) malloc (n*sizeof(int));
	int *arr1 = (int*) calloc (n,sizeof(int));
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d ",&arr1[i]);
	}
	printf("Entered elements are: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("Entered 2nd array elements are: ");
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
	return 0;
}
