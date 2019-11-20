/*
TITLE:        Fibonacci series in C
Contributor:  Collins Upendo, Alias: TechniCollins
              University of Nairobi
              2019
Initialize a to 0 and b to 1 because 
the first two terms of the series are 
0 and 1 respectively. c adds the two numbers
tracker will help terminate the loop
n will hold value from user
*/
#include <stdio.h>
int fib[100]; //carries up to the first 100 terms of the fibonacci series
int fib2[100];
int tracker = 1, counter = 1;//Tracker and counter are global variables because it will be used in more than one function
int fibonnacci(int n)
{

int a=0, b=1, c;

while(tracker < n){
    c=a +b;
    a = b;
    b = c;
    tracker++;
    fib[tracker-1] = a;//-1 Because tracker begins at 1 but first index of array is 0
}
return a;
}

int fibmax(int num)
{
    int d=0, e=1, f;
    while(f < num)
    {
        f = d+e;
        d = e;
        e = f;
        counter++;
        fib2[counter-1] = f;
    }
    
}

int main()
{
    int n, i, num, k;
    int response = -20;
    printf("What do you need?\nEnter 1: Fibonacci upto n terms\nEnter 2: Fibonacci upto a certain number\n");
    scanf("%d", &response);
    if(response == 1)
    {
    printf("Enter number of terms\n");
    scanf("%d", &n);
    fibonnacci(n);
    for(i = 0; i<tracker; i++)
    {
        printf("%d, ", fib[i]);
    }
    }
    else if(response == 2)
    {
        printf("Enter maximum number\n");
        scanf("%d", &num);
        fibmax(num);
        for(k = 0; k<counter; k++)
        {
            printf("%d, ", fib2[k]);
        }
    }
    else
    {
        printf("Invalid choice");
    }
}
