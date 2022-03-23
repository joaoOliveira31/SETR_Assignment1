#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MySAG.h"



static int array[maxSize];
static int size = 0;


void MySAGInit()
{
	printf("Adicione %d valores\n",maxSize);
}

void MySAGInsert()
{
	printf("Valor a inserir: ");
	scanf("%d",&array[size]);
	size++;
}

void MySAGMax(){
  
    int temp=0;
	//int size=sizeof(stream)/sizeof(stream[0]);

    for (int i = 0; i < size; ++i) {
    
    if (temp < array[i]) {
      temp = array[i];
	  
    }
   
  }
  printf("Máximo é %d \n",temp);
  
}

void MySAGMin(){

    int temp=array[0];
	//int size= sizeof(stream)/sizeof(stream[0]);
    for (int i = 0; i < size; ++i) {
    
    if ( temp > array[i]) {
      temp = array[i];
	  printf("switch happens\n");
    }
   
  }
  printf("Minimo é %d \n",temp);
  // for(int i=0; i<size; i++) {
  //    printf("Array[%d] = %d ",i, array[i]);
  // }
}


int MySAGAvg()
{
   //printf("MySAGAvg running...\n"); 
   int ave = 0;
   int var = 0;
   //printf("SIZE = %d\n",size);
   for (int i = 0; i < size; i++)
   {
       var = var + array[i];
   }
   ave = var/size;
   return ave;
}

int MySAGFreq(int number)
{
   //printf("MySAGFreq running...\n"); 
   int sum = 0;

   for (int i = 0 ; i < size ; i++)
   {
      if(number==array[i]){sum=sum+1;}
   }
   return sum;
}
