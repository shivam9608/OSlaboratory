/* Authored by: Shivam Kumar Singh (Roll: B-61)
             Reg. No. 11803277 (Section: K18MS)
    
(b) ADDITION OF TWO NUMBERS USING THREADS */

#include<stdio.h>
#include<pthread.h>
int global[2];

void *sum_thread(void *arg)
{
    int *args_array;
    args_array = arg;

    int n1,n2,sum;
    n1=args_array[0];
    n2=args_array[1];
    sum = n1+n2;

    printf("N1 + N2 = %d\n",sum);
}

int main() 
{
    printf("First number: ");
    scanf("%d",&global[0]);

    printf("Second number: ");
    scanf("%d",&global[1]);
    pthread_t tid_sum;
    pthread_create(&tid_sum,NULL,sum_thread,global);
    pthread_join(tid_sum,NULL);

    return 0;
}
