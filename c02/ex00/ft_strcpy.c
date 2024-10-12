#include<unistd.h>

char		*ft_strcpy(char *dest,char *src){
		int i;
		i=0;
	while(src[i] != '\0'){
			dest[i] = src[i];
			i++;
}
	while(dest[i]!='\0'){
	write(1,&dest[i],1);
	i++;
}

	return dest;
}

int main(){
	char ab[5];
	char ba[] ={'h','e','l','l','o'};
	 ft_strcpy(ab,ba);
	write(1,"\n",1);
}
