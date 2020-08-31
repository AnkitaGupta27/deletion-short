#include<stdio.h>

int main(){

	int arr[10],i,n,num,pos;
	printf("\n value of n : ");
	scanf("%d",&n);

	printf("\n Enter array : \n");
	for(i=0;i<n;i++){

		scanf("%d",&arr[i]);

	}

	printf("\n value of pos : ");
	scanf("%d",&pos);

	for(i=pos; i<n-1;i++){

		if(i>=pos)
			arr[i]=arr[i+1];

	}

	n=n-1;
	printf(" Array is : \n");
	for(i=0;i<n;i++){

		printf("%d \n",arr[i]);

	}

	return 0;

}
