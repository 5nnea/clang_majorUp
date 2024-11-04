#include <stdio.h>
#include <string.h>
int main(){
	int a;
	char b[1000];
	
	scanf("%d",&a);
	int i;
	for(i = 0; i<a; i++){
		scanf("%s",&b);
		printf("%c%c\n",b[0],b[strlen(b)-1]);
	}
}