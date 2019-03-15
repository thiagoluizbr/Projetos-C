#include <iostream>

int fahrenheit(int c){
	int f;
	
	f = 1,8 * c + 32;
	return f;
}

int main(int argc, char** argv) {
	int c, f;
	
	printf("Digite o grau em Celsius: \n");
	scanf("%d", &c);
	
	f = fahrenheit(c);
	
	printf("%d Celsius = %d Fahrenheit \n", c,f);
	
}
