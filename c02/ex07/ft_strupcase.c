#include<unistd.h>

char		*ft_strupcase(char *str){
	int i = 0 ;
	while(str[i]!='\0'){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] = str[i] - 32;
		}
		write(1,&str[i],1);

	i++;

}

}


int main(){
	char c[]={'a','Z','e','d','a'};
	ft_strupcase(c);

}
