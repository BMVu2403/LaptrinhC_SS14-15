#include<stdio.h>

int main(){
    char str[100]="Xin chao Vietnam"; 
    char chuoi;
    int i,j;
    printf("Chuoi ban dau:%s\n",str);
    printf("Nhap ki tu can xoa:");
    scanf("%c",&chuoi);
    for (i=0,j=0;str[i]!='\0';i++){
        if (str[i]!=chuoi){
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    printf("Chuoi sau khi xoa ki tu '%c':%s\n",chuoi,str);
    return 0;
}

