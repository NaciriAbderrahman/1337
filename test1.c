#include<unistd.h>

char 	*ft_strcapitalize(char *str){
	int i;
	i = 0;
	while(str[i] != '\0'){
		if(str[0] >='a' && str[0] <= 'z'){
			str[0]=str[0] - 32;
			}
		if(str[i] == 32){
			if(str[i+1] >= 'a' && str[i+1] <= 'z'){
			 str[i+1] = str[i+1] - 32;
			 }
			}
		if(str[i] == 63){
			if(str[i+1] >= 'a' && str[i+1] <='z'){
			 str[i+1] = str[i+1] -32;
			 }
			}
		if(str[i] == 59){
			if(str[i+1] >='a' && str[i+1] <='z'){
			 str[i+1] = str[i+1]-32;
			 }
			}
			
			if(str[i] == 43){
			if(str[i+1] >='a' && str[i+1] <='z'){
			 str[i+1] = str[i+1]-32;
			
			}
			}
		i++;

	}

	i=0;
	while(str[i] != '\0'){
			write(1,&str[i],1);
		i++;
		}


}


int main(){
	char c[] = {'+','a'};
	ft_strcapitalize(c);
	write(1,"\n",1);
}
