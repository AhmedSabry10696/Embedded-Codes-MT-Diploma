#include <stdio.h>
/* Description:
 * Application demonstrate the idea of useage pointer to character as a string
 */
void display_string(char *s)
{
	printf("str = ");
	while(*s != '\0')
	{
		printf("%c",*s);
		s++;
	}
	printf("\n");
}

int main(void)
{
	char *str = "C Programming";
	printf("str = %s\n",str);
	str = "Embedded Systems";
	printf("str = %s\n",str);
	display_string(str);
	return 0;
}
