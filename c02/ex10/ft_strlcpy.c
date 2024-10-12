#include<unistd.h>

unsigned int ft_strlcpy(char *dest,char *src, unsigned int size){
	int count , i;
	count = 0;
	i = 0;

	while(src[count] != '\0'){
		count++;
	}


	while (src[i] != '\0' && i<size-1)
	{
	dest[i] = src[i];
	i++;

	}
	count = count + '0';
	write (1,&count,1);

}


int main(){
char a[10];
char c[] = {'a','a','a','a','a','a'};
int z=1;

ft_strlcpy(a,c,2);
}
