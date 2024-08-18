#include<unistd.h>
void ft_print_alphabet(void)
{
	char z;
	z = 'z';

	while(z>='a')
	{
		write(1,&z,1);
		z--;
		write(1,"\n",1);
	}

}

int main()
{
	ft_print_alphabet();
}

