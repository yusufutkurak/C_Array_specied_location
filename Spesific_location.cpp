#include <stdio.h>
void swap(int *,int);
int main()
{
	int i,loc;
	int ar[30];

	printf("Enter 10 integers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&ar[i]);
	}
	
	printf("Enter 5 integers:\n");
		for(;i<15;i++){
		scanf("%d",&ar[i]);
	}
	
	printf("Enter location:\n");
	scanf("%d",&loc);
	
	swap(ar,loc);
	
	printf("New array:");
	for(i=0;i<15;i++){
		printf("%d ",ar[i]);
	}
	return 0;
}

void swap(int* arr, int lc){
	int i,j=10,temp;
	i=lc;
	
	for(;i<(lc+5);i++,j++){
	        temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}	
}


