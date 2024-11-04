#include <stdio.h>

int main(){
	int a;
	char b[1000];
	
	scanf("%s",&b);
	scanf("%d", &a);
	
	printf("%c",b[a-1]);
}