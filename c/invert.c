#include <stdio.h>

int main () {
	char str[20];
	printf( "type a single word: " );
	
	scanf("%s" , &str);   // hello\0
	
	for(int i = 0; str[i] != 0; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
	
	printf("%s\n",  str );

	return 0;
}
