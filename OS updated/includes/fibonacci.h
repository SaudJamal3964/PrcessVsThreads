#define FIBONACCI_H
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <pthread.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>
#include "data.h"
int i;




void fibonacciProcess()

{
    printf("\n _______________\n");
    printf("|               |");
    printf("\n| USING PROCESS |");
    printf("\n|_______________|\n");

int a=0, b=1, n=a+b;


	clock_t start;
    start = clock();

pid_t pid = fork();
if (pid == 0)
{
    printf("0 %d ",n);
    while (i>1) {
        n=a+b;
        printf("%d ", n);
        a=b;
        b=n;
        i--;
        if (i == 0) {
           
        }
    }
}
    else 
    {
	start = clock() - start;
	printf("\n");
	printf("-------------------------------------------");
        printf("\nTime taken using process: %f seconds\n", (float)start / CLOCKS_PER_SEC);
        printf("-------------------------------------------\n");
	fibpt=(float)start / CLOCKS_PER_SEC;
        waitpid(pid, NULL, 0);
	
        
    }
	
  
}

pthread_t tid;
pthread_t tid2;
int fibo[1000];
int top=-1;
void *printFibo(void *vargp){
  pthread_join(tid2,NULL);
  sleep(1);
  for(int i=0;i<=*(int*)vargp;i++)
{
    printf("[ %d ] ",fibo[i]);
    printf(" ");
  }
}
void *calcFibo(void *vargp){
    int t1 = 0, t2 = 1, nextTerm = 0;
    fibo[0]=t1;
    fibo[1]=t2;
    top=1;
    int i=0;


    while(i <= *(int *)vargp)
    {
        nextTerm = t1 + t2;
        top++;
        fibo[top]=nextTerm;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }
}
void fibonacciThread()
{
	printf("Enter the number of a Fibonacci Sequence:\n");
	scanf("%d ", &i);
    printf("\n _______________\n");
    printf("|               |");
    printf("\n| USING THREADS |");
    printf("\n|_______________|\n\n");

    fibs=i;
    clock_t start;
    start = clock();
    pthread_create(&tid,NULL,printFibo,(void*)&i);
    pthread_create(&tid2, NULL, calcFibo, (void*)&i);

    pthread_join(tid, NULL);
	start = clock() - start;
	printf("\n");
	printf("-------------------------------------------");
        printf("\nTime taken using threads: %f seconds\n", (float)start / CLOCKS_PER_SEC);
        printf("-------------------------------------------\n");
	fibtt=(float)start / CLOCKS_PER_SEC;
}
