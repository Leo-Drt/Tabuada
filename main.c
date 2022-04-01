#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,resultado;
    printf("Tabuada\n");
    printf("Qual tabuada voce quer saber ?\n");
    scanf("%d",&n);
    for(i=0; i<=10; i++){
        resultado = n * i;
        printf("%dx%d= %d\n",n,i,resultado);
    }

    return 0;
}
