#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;

    float X1, Y1, R;



    scanf("%f %f %f", &a,&b,&c);




    scanf("%f %f %f", &X1,&Y1,&R);




    float distance = fabs(a * X1 + b * Y1 - c) / sqrt(a * a + b * b);



    if (distance == sqrt(R)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
