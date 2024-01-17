#include<stdio.h>
#include<math.h>
int main() {
    float i,x,n,sum;
    sum = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i=2; i<=n; i++) {
        sum = sum + (pow(x,i)/x);
    }
    printf("Sum of the pattern is %d", sum);
    return 0;
} // this program prints the sum of the pattern of x^2/x + x^3/x + x^4/x + ........ +x^n/x