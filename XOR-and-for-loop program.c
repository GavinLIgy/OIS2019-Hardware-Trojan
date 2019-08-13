#include <stdio.h>

int main() {

	int a = 0x65, b = 0x01,c = 0;
	
	while(1){
		c = a ^ b;
		printf("%x = %x ^ %x\n", c, a, b);
		b++;
	}
}
