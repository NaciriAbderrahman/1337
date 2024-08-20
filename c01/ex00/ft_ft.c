#include <unistd.h>

void ft_putnbr(int a)
{
	int s,y;
	if(a<0){
		s= -a;
		ft_putnbr(s);
		write(1,"-",1);
	}else if(a>9)
		{
 		  s = a/10;
		  y = a%10;
		  ft_putnbr(s);
		  ft_putnbr(y);
	}else{
	   a = a +'0';
	   write(1,&a,1);
	}
}


void 		ft_ft(int *nbr){

	*nbr = 42;
	ft_putnbr(*nbr);

}


int main(){
	int a;
	ft_ft(&a);
	write(1,"\n",1);
}
