/** \file main.c
* \brief Testa as funcoes
* \author João Oliveira, Diogo Leao, Gonçalo Moniz
* \date 22-3-21
* \bug Sem bugs
*/

#include <stdio.h>
#include <stdlib.h>
#include "MySAG.h"

/** \brief Funcao main testa as funcoes
* \date 22-3-21
*/

int main(void)
{
    MySAGInit();
    for(int i=0;i<maxSize;i++)
        MySAGInsert();
    MySAGMin();
    MySAGMax();
    printf("Media = %d\n",MySAGAvg());
    printf("Frequencia numero: ");
    int n;
    scanf("%d",&n);
    printf("Esse numero aparece %d vezes\n",MySAGFreq(n));

}