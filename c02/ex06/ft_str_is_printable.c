#include<unistd.h>


int		ft_str_is_printable(char *str){

	int i;
	i=0;
	while(str[i] != '\0'){
		if(str[i] >= '0' && str[i] <='9' ){
			write(1,"0",1);
		
		}else{
			write(1,"1",1);
		}
		i++;
	}

}

int main (){
	char c[]={'1','a','2'};
	ft_str_is_printable(c);
	write(1,"\n",1);
}
