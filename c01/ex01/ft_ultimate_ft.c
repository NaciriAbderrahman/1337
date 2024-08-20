#include<unistd.h>

void ft_putnbr(int a)
{
	int s , y ;
	if(a > 9 ) {
		s = a/10;
		y=a%10;
		ft_putnbr(s);
		ft_putnbr(y);
	}else if (a<0){
			s = -a;
			write(1,"-",1);
			ft_putnbr(s);
		      }
		else{
		a=a+'0';
		write(1,&a,1);
		
	     }
}


void 		ft_ultimate_ft(int *********nbr)
{
	*********nbr=42;
	ft_putnbr(*********nbr);

}


int main (){
	int a;
	int *nb1,**nb2,***nb3,****nb4,*****nb5,******nb6,*******nb7,********nb8,*********nb9;
	nb9=&nb8;
	nb8=&nb7;
	nb7=&nb6;
	nb6=&nb5;
	nb5=&nb4;
	nb4=&nb3;
	nb3=&nb2;
	nb2=&nb1;
	nb1=&a;
	ft_ultimate_ft(nb9);
	write(1,"\n",1);
}
