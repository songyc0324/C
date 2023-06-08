#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "mango tree";
	printf("%s\n", str);

	strncpy(str, "apple-pie", 5);
	printf("%s\n", str);

	return 0;
}