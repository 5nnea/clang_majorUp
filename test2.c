#include <stdio.h>

int main(){
	int n,a,x;
	scanf("%d %d",&n,&x);
	int arr[10000000];
	
	for(int i = 0; i<n-1; i++){
		scanf("%d ",&arr[i]);
	}
	for(int i = 0; i<n; i++){
		if(arr[i]<x){
			printf("%d ",arr[i]);
		}
	}
}	