#include <stdio.h>
int main(){
    FILE *fp;
    fp=fopen("ab.txt","w");
    fprintf(fp,"Who are you?\n");
    fputs("I am utsav",fp);
    fclose(fp);
    return 0;
}
