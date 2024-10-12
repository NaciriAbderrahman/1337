#include <unistd.h>


int		ft_str_is_lowercase(char *str){
	int i = 0 ;
	while(str[i] != '\0'){
	if(str[i] >= 'a' && str[i] <='z'){

				write(1,"1",1);
	}else{

		write(1,"0",1);
	}
		i++;
	}
}




int main (){

	char c[] = {'a','z','e','g','1','A'};
	ft_str_is_lowercase(c);
	write(1,"\n",1);
}
