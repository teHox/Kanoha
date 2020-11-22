#include <stdio.h>
#include <math.h>
int main(){
    float x = 0.5;
    const float PI = 3.14;
    float Y;

    for (int i = 1; i <= 10; i++){
        Y = x*(1-pow(x, 2)/(pow(i, 2)*(pow(PI, 2))));
        printf("Результат = %f\n" , Y);
    }
    return 0;
}
