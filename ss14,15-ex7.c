#include <stdio.h>

int main() {
    char str[]="Xinchao,Vietnam!123@#";
    int letters=0,digits=0,specials=0;
    int size=strlen(str);
    for(int i=0;i<size;i++){
    	if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
    		letters++;
		}else if(str[i]>='0'&&str[i]<='9'){
			digits++;
		}else{
			specials++;
		}
	}
	printf("Chu cai: %d, Chu so: %d, Ky tu dac biet: %d\n", letters, digits, specials);

    return 0;
}
