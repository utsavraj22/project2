#include <stdio.h>
int main()
{
    char name[20];
    int count=0, i=0;
    printf("Enter the string:\n");
    // scanf("%5s",name);
    gets(name);
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("%d", count);
    /*printf("%.5s",name);
    printf("%10.5s",name);
    printf("%s",&name[2]);
    puts(name);
    puts(name);*/
    return 0;
}