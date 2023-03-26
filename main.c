#define array_size 10
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
int a[array_size];
int i;
int k;

srand(time(NULL));
k=0;
for (i=0;i<array_size;i++){
   a[i]=rand()%200 -100;
   //printf("%d\n",a[i]);
if(a[i]>0) k=k+1;}
printf(" Number of positive numbers is %d",k);
}
