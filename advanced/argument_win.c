#include <stdio.h>

__asm__("pop %rdi;"
		"pop %rsi;"
        "ret;");

int win(int a, int b){
	char* str = "/bin/sh;";
	char x[8];
	if(a == 0xdead && b == 0x1337){
		system(str);
	}
}

int main(){
	char a[10];
	gets(a);
}