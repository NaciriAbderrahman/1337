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



void	 ft_ultimate_div_mod(int *a, int *b){
	int t,y;
	t = *a;
	y = *b;
	*a = t / y;
	*b =t%y;
	write(1,"a=",2);
	ft_putnbr(*a);
	write(1,"\n",1);
	write(1,"b=",2);
	ft_putnbr(*b);
	write(1,"\n",1);
}

int main(){

	int a,b;
	a=10;
	b=2;
	ft_ultimate_div_mod(&a,&b);
}
