#include <unistd.h>
void ft_putnbr(int nb)
{
	int s , w , z,y;
	if(nb > 9){
		s = nb % 10;
		z = nb / 10;
		ft_putnbr(z);
		ft_putnbr(s);
	}else if(nb<0){
		 y = -nb;
		write(1,"-",1);
		ft_putnbr(-nb);
	  }
	else{
		w = nb + '0';
		write(1,&w,1);
	}
}

int main()
{
	ft_putnbr(-10);

}
