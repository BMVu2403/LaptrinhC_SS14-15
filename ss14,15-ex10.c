#include<stdio.h>

int main(){
    char str[100]="Xin chao Vietnam"; 
    int freq[256]={0};                
    for (int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    printf("Ki tu va so lan xuat hien:\n");
    for (int i=0;i<256;i++){
        if (freq[i]>0){
            printf("%c:%d\n",i,freq[i]);
        }
    }
    return 0;
}

