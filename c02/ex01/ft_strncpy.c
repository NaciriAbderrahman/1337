#include<unistd.h>

char		*ft_strcpy(char *dest,char *src,unsigned int n){
		int i;
		i=0;
	while(i<n ){
			dest[i] = src[i];
			i++;
	}

	i=0;
	while(dest[i]!='\0'){
		write(1,&dest[i],1);
		i++;
	}

	return dest;
}

int main(){
	char ab[5];
	char ba[] ={'h','e','l','l','o'};
	 ft_strcpy(ab,ba,3);
	write(1,"\n",1);
}
