#include<unistd.h>

void ft_print_comb(void){
	char a , z , e ;
	int q , s , d ;
	a='0';
	z='1';
	e='2';
	q=0;
	s=0;
	d=0;
   while(q<8)
    {
	s=0;
	z='1';
	while(s<8)
	{
		d=0;
		e='2';
		    while(d<8)
			{
			    write(1," ",1);
			    write(1,&a,1);
			    write(1,&z,1);
			    write(1,&e,1);
			    write(1,",",1);
			    d++;
			    e++;
			}
		z++;
		s++;
	}
	a++;
	q++;
     }
}

int main(){
ft_print_comb();
}
