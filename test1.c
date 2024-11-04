#include <stdio.h>

int main(){
	int n,a, count = 0;
	int arr[100];
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		scanf("%d ",&arr[i]);
	}
	scanf("\n%d",&a);
	for(int i = 0; i<n; i++){
		if(arr[i]==a){
			count++;
		}
	}
	printf("%d",count);
}	