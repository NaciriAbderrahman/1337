#include<unistd.h>

void 	ft_putstr_non_printable(char *str){

	int i = 0;

	while(str[i] !='\0'){
			if(str[i] == 92){
				str[i+15] = str[20];
				str[i+14] = str[19];
				str[i+13] = str[18];
				str[i+12] = str[17];
				str[i+11] = str[16];
				str[i+10] = str[15];
				str[i+9]  = str[14];
				str[i+8]  = str[13];
				str[i+7]  = str[12];
				str[i+6]  = str[11];
				str[i+5]  = str[10];
				str[i+4]  = str[9];
				str[i+3]  = str[8];
				str[i+1] = '0';
				str[i+2] = 'a';

			}
			write(1,&str[i],1);
			++i;
	}

}


int main(){
char c[]={'C','o','u','c','o','u','\\','n','t','u',' ','v','a','s',' ','b','i','e','n',' ','?'};


ft_putstr_non_printable(c);
write(1,"\0",1);
}
