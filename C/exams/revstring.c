#include <stdio.h>
#include <string.h>
int main(){
    char name[20]="Utsav",name1[20]="Raj";
    int len,i,ch;
    strcat(name,name1);
    printf("%s",name);
    len = strlen(name);
    for(i=0;i<=len/2;i++){
        ch=name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=ch;
    }
    printf("%s",name);
    //strrev(name);
    //printf("\t%s",name);
    return 0;
} 