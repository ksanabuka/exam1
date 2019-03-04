#include<unistd.h>

int iS(char c)
{
	return (c == 32 || (c >= 9 && c <= 13 )) ? 1 : 0;
}
void fw(char *s)
{
	while(iS(*s) && *s)
		s++;
	char tmp;
	while(!iS(*s) && *s)
	{
		tmp = *s;
		write(1, &tmp, 1);
		s++;	
	}
}

int main(int ac, char ** av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}


	fw(av[1]);
	write(1, "\n", 1);
	return 0;

}



