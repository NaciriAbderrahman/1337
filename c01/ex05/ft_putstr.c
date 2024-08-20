#include <unistd.h>



void ft_putstr(char *str){
	int i ;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}


int main(){
	char f[]= {'h','e','l','l','l','o'};
	ft_putstr(f);
	write(1,"\n",1);
}

