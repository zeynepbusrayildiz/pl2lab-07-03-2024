#include <stdio.h>
#include <stdlib.h>

int oddcount(int A[], int n){
	int odd=0;
	if(n<=0) return 0;
	else{
		if(A[n-1]%2!=0) odd++;
		return odd + oddcount(A,n-1);
	}
}

int main() {
	int res, i=0, a;
	printf("Please enter the number of elements:\n");
	scanf("%d",&a);
	int A[100];
	for(i=0;i<a;i++){
		printf("Please enter the %d. element:",i+1);
		scanf("%d",&A[i]);
	}
	
	res=oddcount(A, a);
	printf("The number of odd numbers is : %d",res);
	
	return 0;
}
