#include<unistd.h>

void ft_pntnb(int n){
	int s,d;
	if(n<0){
	   write(1,"-",1);
	   n = -n;
	   ft_pntnb(n);
	}else if(n > 9){
	 s = n/10;
	 d = n%10;
	ft_pntnb(s);
	ft_pntnb(d);
	}else{
	n= n+'0';
	write(1,&n,1);
	write(1,"\n",1);
		}

}


int		ft_strcmp(char *s1,char *s2){

	int i=0;
	int s = 0;

	while(s1[i]=='\0' && s2[i]== '\0'){
		s = s1[i] - s2[i];
		i++;
	}
	ft_pntnb(s);

}

int main(){
	char i []={'t'};
	char s []={'t','e','s','t'};
	ft_strcmp(i,s);

}
