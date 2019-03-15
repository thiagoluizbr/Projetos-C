#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int primo (int n) {
	
	for(int i=2; i<n; i++) {
		if(n==2){
			return 1;
		}
		if (n%i!=0){
			continue;
		}
		else{
			return 0;	
		}
	}
	return 1;
}
int main(int argc, char** argv) {
	int n;
	printf("entre com um valor: \n");
	scanf("%d",&n);
	printf("%d\n",primo(n));
}
