#include<unistd.h>

int wasB(char c, char  *s, int pos)
{
	int i = 0;
	if (pos == 0)
		return 0;

	while (s[i] && i < pos)
	{
		if (c == s[i])
			return 1;
		else 
			i++;
	}
	return 0;
}

int mylen(char *s)
{
	int i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return i;
}

int main(int ac, char ** av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	int i = 0;
	char tmp;


	while (av[1][i])
	{	
	   if 	(av[1][i] &&  !wasB(av[1][i], av[1], i))
		{
		tmp = av[1][i];
		write(1, &tmp, 1);
		i++;
		}
		else 
			i++;
	}	
	
 	i = 0;	
	while (av[2][i])
	{	
	   if 	(av[2][i] &&  !wasB(av[2][i], av[2], i) && !wasB(av[2][i], av[1], mylen(av[1])  ))
		{
		tmp = av[2][i];
		write(1, &tmp, 1);
		i++;
		}
		else 
			i++;
	}	
	write(1, "\n", 1);
	return 0;


}

