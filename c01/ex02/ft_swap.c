#include <unistd.h>

void ft_putnbr( int a)
{
	int s , y;
	if (a>9){
		s = a/10;
		y = a%10;
		ft_putnbr(s);
		ft_putnbr(y);
	  }else if(a<0){
		s = -a;
		ft_putnbr(s);
	  }else {
		a = a+'0';
		write(1,&a,1);
	   }

}



void		ft_swap(int *a,int *b)
{
	int s;
	s = *a;
	*a= *b ;
	*b = s ;
	write(1,"a=",2);
	ft_putnbr(*a);
	write(1,"\n" ,1);
	write(1,"b=",2);
	ft_putnbr(*b);

}

int main()
{
	int a,b;
	a= 5 ;
	b=6 ;
	ft_swap(&a,&b);
	write(1,"\n",1);
}
