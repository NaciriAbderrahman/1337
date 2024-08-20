#include <unistd.h>

void ft_putnbr(int nb)
{
	int s,w,z,y;
	if(nb>9){
		s= nb%10;
		z= nb/10;
		ft_putnbr(z);
		ft_putnbr(s);
	}else if(nb<0){
		y=-nb;
		write(1,"-",1);
		ft_putnbr(-nb);
		}else{
			w = nb+'0';
			write(1,&w,1);
		}




}


void ft_print_combn(int n ){
	int a , z ,e ,r ,t, y,u,i;
	i=0;
	z=0;
	e=0;
	r=0;
	t='0';
	y='0';
	u='0';
	if(n==1){
		while(i <= 8){
			
			i++;
			t++;
			ft_putnbr(i);
			write(1,"\n",1);
	         }

	}else if(n==2){
		 while(i<=9){
			z=0;
			y='0';
			z=i+1;
			    while(z<=9){
				ft_putnbr(i);
				ft_putnbr(z);
				write(1,",",1);
				
				z++;
			      }
			     i++;
			     
		           }
		 }else if(n==3){
				while(i<=9){
				      y='0';
				      
					z=i+1;
					while(z<=9){
						u='0';
						
						e=z+1;
					while(e<=9){
						     ft_putnbr(i);
						     ft_putnbr(z);
						     ft_putnbr(e);
						     write(1,",",1);
						     
						     e++;
						   }
						  z++;
						  
					        }
						i++;
						
                                       }

				}



}


int main(){

	ft_print_combn(3);
}
