#include <unistd.h>
void ft_print_comb2(void)
{
	int a , z, e,r;
	char q,s,d,f;
	a = 0;
	z = 0;
	e = 0;
	r = 0;
	q = '0';
	s = '0';
	d = '0';
	f = '0';
	while(a < 10)
	{
		z=0;
		s='0';
		while(z<9)
		{
		    e=0;
		    d='0';
			while(e<10)
			{
				r=0;
				f='0';
				while(r<10)
				{
					write(1,&q,1);
					write(1,&s,1);
					write(1," ",1);
					write(1,&d,1);
					write(1,&f,1);
					write(1,",",1),
					r++;
					f++;
				}
				d++;
				e++;
			}
			s++;
			z++;
		}
		q++;
		a++;
	}
}

int main(){
	ft_print_comb2();
}
