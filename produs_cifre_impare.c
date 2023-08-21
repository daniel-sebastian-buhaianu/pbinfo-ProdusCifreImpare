#include <stdio.h>

int main()
{
	char c, ok = 0; unsigned p = 1;
	
	while (scanf("%c", &c) != EOF && c >= '0' && c <= '9') {
		if ((c - '0') % 2) {
			p *= (c - '0');
			ok = 1;
		}
	}
	
	ok ? printf("%u", p) : printf("-1");

	return 0;
}
