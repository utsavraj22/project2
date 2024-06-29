#include <stdio.h>
int main(){
    char alphabets;
    printf("Enter the alphabets:\n");
    scanf("%c",&alphabets);
    switch(alphabets){
        case 'a':printf("Apple");
        break;
        case 'b':printf("Ball");
        break;
        case 'c':printf("Cat");
        break;
        case 'd':printf("Dog");
        break;
        case 'e':printf("Ear");
        break;
        case 'f':printf("Finger");
        break;
        case 'g':printf("Goat");
        break;
        case 'h':printf("Hen");
        break;

    }
    return 0;
}