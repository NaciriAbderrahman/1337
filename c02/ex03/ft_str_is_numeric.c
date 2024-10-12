#include <unistd.h>

int		ft_sfr_is_alpha(char *str){
		int i = 0;
	while(str[i] != '\0'){
	if (str[i] >='a' && str[i] <= 'z'){

			write(1,"0",1);
		}else if(str[i] >= 'A' && str[i] <= 'Z') {
			write(1,"0",1);
		}else{
			write(1,"1",1);
		}
	i++;
	}

}


int main(){
	char c[] ={'1','2','A','a'};
	ft_sfr_is_alpha(c);
	write(1,"\n",1);

}
