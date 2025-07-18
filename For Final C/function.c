#include <stdio.h>

int Sum(int a, int b) {
    int sum = a+b;
    a = 0;
    return sum;
}

int sumaray(int myparam[], int limit){
    int i;
    int sum=0;
    for(i=0; i < limit; ++i)
    sum += myparam[i];
    return sum;
}

int main()
{
int myarr1[5] = {1,2,3,4,5};
int myarr2[8] = {1,2,3,4,5,6,7,8};
printf ("sum=%d\n", sumaray(myarr1, 5));
printf ("sum=%d\n", sumaray(myarr2, 8));
return 0;
    
}