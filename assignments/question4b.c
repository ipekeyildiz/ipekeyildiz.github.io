#include <stdio.h>
#include <math.h>
void computeHomeValue();
int main(void)
{
    int popularity, size;
    double z;
    
    printf("enter popularity and size \n");
    scanf("%d %d", &popularity, &size);
     computeHomeValue(popularity, size, &z);
    z =z * 10000;
    printf("%f", z);
    
    return 0;
}
     void computeHomeValue(int x, int y, double *sum) {
         *sum = pow(x,3) + pow(y,2);}