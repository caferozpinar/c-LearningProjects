#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int array[15] ={};
int temp = 0;
int max = 0;
int min = 60;
int avg = 0;
int smax=0;
int main () {
        time_t tol;
        srand((unsigned int) time(&tol));
        //random numbers
		for(int x=0;x<15;x=x)
		{
			temp = rand()%60;
			if(temp>=20)
			{
		        array[x]=temp;
			    x++;
			}
		}
		//array value's printed.
		printf("array values:\n");
		for(int i = 0;i<15;i++)
		{
			//array[i]=rand()%60;
			printf("%d\n",array[i]);
		}
		//find array's maximum value.
		for(int i = 0;i<15;i++)
		{
			if(array[i]>max)
			{
				max=array[i];
			}
		}
		//find array's second maximum value.
		for(int i = 0;i<15;i++)
		{
			if(array[i]==max) continue;
			
			else if(array[i]>smax)
			{
				smax=array[i];
			}
		}
		//find array's minimum value.
		for(int i = 0;i<15;i++)
		{
			if(array[i]<min)
			{
				min=array[i];
			}
		}
		//find array's average value.
		for(int i = 0;i<15;i++)
		{
				avg+=array[i];
		}
		avg=avg/15;
		
		printf("min value of array:%d\n",min);
		printf("max value of array:%d\n",max);
		printf("second max value of array:%d\n",smax);
		printf("avg value of array:%d\n",avg);
		
		
    return(0);
}
