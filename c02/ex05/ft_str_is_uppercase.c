#include <unistd.h>


int		ft_str_is_lowercase(char *str){
	int i;
	while(str[i] != '\0'){
	if(str[i] >= 'A' && str[i] <='Z'){

				write(1,"1",1);
	}else{

		write(1,"0",1);
	}
		i++;
	}
}




int main (){

	char c[] = {'A','Z','a','R','z'};
	ft_str_is_lowercase(c);
	write(1,"\n",1);
}
