
//Bruno Portilla Hinojosa
//ITESM
#include <stdio.h>
#include <string.h>

int main() {    //asigno variables.
    int n;
    int begin=0;
    int end=0;      //con estas variables volteare el orden de los cracteres en el string.
    int counter=0;

    char phr[100];      //hago el string normal y volteado.
    char revert[100];

    printf("In this program you can enter any phrase and i will show it backwards.\nEnter a phrase:\n");
    gets(phr);                  //pido una frase para meter e el string.

    while (phr[counter] != '\0')    //cuento los caracteres en el string.
        counter++;

    end = counter - 1;

    for (begin = 0; begin < counter; begin++) { //meto la frase volteada en el string revert.
        revert[begin] = phr[end];
        end--;
    }

    revert[begin] = '\0';



    printf("Here is the phrase you entered, but backwards: \n%s", revert); //muestro el string.

    return 0;
    ;}