#include <stdio.h>
#include <string.h>

void str_reverse(char *str, int len){
	if (len < 2)
		return ;
	char temp = str[0];
	str[0] = str[len-1];
	str[len-1] = temp;
	str_reverse(str+1, len-2);
}

void print_str(char *str){
	printf("%c", *(str+1));
}

int main(int argc, char *argv[]){
	char str[] = "Hello World!";
	printf("%s\n", str);
	str_reverse(str, strlen(str));
	printf("%s", str);
	return 0;
}
