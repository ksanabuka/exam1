#include<unistd.h>

int isP(int n)
{
	if (n == 0 || n == 1)
		return 0;
	int i = 2;
	int nbr = n;
	while (i < nbr)
	{
		if (n % i == 0)
			return 0;
		else 
			i++;
	}
	return 1;
}

int primeSum(int n)
{
	if (n == 0 || n == 1)
		return 0;
	
	int i = 2;
	int res = 0;
	while  (i <= n)
	{
		res+= (isP(i)) ? i : 0;
	   i++;	
	}
	return res;
}

int myatoi(char *s)
{
	while ( *s && (*s == 32 || (*s >= 9 && *s <= 13)))
		s++;
	int sign = (*s == '-') ? -1 :  1;
	(*s == '-' || *s == '+') ? s++ : s;

	long res = 0;
	while (*s && (*s >= '0' && *s <= '9'))
	{
		res= res * 10 + *s - '0';
		s++;
	}
	return ((int)res * sign);
	
}


void putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}

	else 
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n > 9)
			putnbr(n/10);
		char tmp;
		tmp = n % 10 + '0';
		write(1, &tmp, 1);

	}
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char ** av)
{
	if (ac != 2 || myatoi(av[1]) < 1)
	{
		write(1, "0\n", 2);
		return 0;
	}
	putnbr(primeSum(myatoi(av[1])));

	write(1, "\n", 1);
	return 0;


}

