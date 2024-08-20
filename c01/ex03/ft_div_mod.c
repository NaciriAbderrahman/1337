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



void	 ft_div_mod(int a, int b,int *div,int *mod){

	*div = a/b;
	*mod = a%b;
	write(1,"div=",4);
	ft_putnbr(*div);
	write(1,"\n",1);
	write(1,"mod=",4);
	ft_putnbr(*mod);
}

int main(){

	int a,b,div,mod;
	a=10;
	b=2;
	ft_div_mod(a,b,&div,&mod);
}
