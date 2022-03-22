#include <stdio.h>
#include "MySAG.h"

static stream[100];

void MySAGInsert()
{
	static int pos=0;
	printf("Valor a inserir: ");
	scanf("%d",&stream[pos]);
	pos++;
}

void MySAGInit()
{
	int opc;
	while(1)
	{
		printf("Escolha uma opção:\n");
		printf("1:Adicionar Valor\n");
		printf("2:Valor Maximo\n");
		printf("3:Valor Minimo\n");
		printf("4:Valor Medio\n");
		printf("5:Frequencia Valor\n");
		printf("0:Sair\n");
		scanf("%d",&opc);
		if(opc==0)
			break;
		else if(opc==1)
			MySAGInsert();
		//else if(opc==2)
			//MySAGMax();
		//else if(opc==3)
			//MySAGMin();
		//else if(opc==4)
			//MySAGAvg();
		//else if(opc==5)
			//MySAGFreq();
		else
			printf("Opção Invalida\n");

	}
	printf("Saiu\n");
}

int main(void)
{
	MySAGInit();
}