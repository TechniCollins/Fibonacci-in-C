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
int tracker = 1;//Tracker is a global function because it will be used in more than one function
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
int main()
{
    int n, i;
    printf("Enter number of terms\n");
    scanf("%d", &n);
    fibonnacci(n);
    for(i = 0; i<tracker; i++)
    {
        printf("%d, ", fib[i]);
    }
}
