int win(){
	char x[] = "/bin/sh";
	__asm__("pop %rbp;");
	system(x);
}

int main(){
	char buf[32];
	printf("32 length buffer: ");
	gets(buf);

}