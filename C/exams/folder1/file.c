#include <stdio.h>
void main(){
FILE *fp;
int n,num=0;
printf("Enter the value for n:\n");
scanf("%d",&n);
fp=fopen("abcde.txt","w");
while(num<=n){
    if(num%2!=0)
    fprintf(fp,"%d\n",num);
    num++;
}
fclose(fp);
}