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



void	 ft_rev_int_tab(int *tab, int size){
	int i ;
	i = size-1;
	while(i >= 0){
		ft_putnbr(tab[i]);
		i--;
	}
}

int main(){
	int tab[]={1,2,3,4,5};
	ft_rev_int_tab(tab,5);
	write(1,"\n",1);
}
