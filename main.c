#include "stm32f10x.h"
#include <stddef.h>
void *malloc(size_t size)
{
	static char buffer[1024] = {0};
	return buffer;
}
int main(void)
{
#ifdef DEBUG
	char *str2 = "Hello!\0";
	char ans[2] = {'y','n'};
#endif
	while(1); 
}
