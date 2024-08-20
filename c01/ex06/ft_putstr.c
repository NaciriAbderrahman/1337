#include <unistd.h>



void ft_putstr(char *str){
	int i , nb ;
	i=0;
	nb=0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
		nb++;
	}
	write(1,"\n",1);
	nb = nb + '0';
	write(1,&nb,1);
}


int main(){
	char f[]= {'h','e','l','l','o'};
	ft_putstr(f);
	write(1,"\n",1);
}

