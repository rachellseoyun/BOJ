//
// Created by rache on 25. 8. 27..
//

#include <stdio.h>
// wrong code

//int main(void) {
//    int A, B;
//    scanf("%d %d", &A, &B);
//    printf("%d\n", A / B );
//    return 0;
//}

//double is for lf
int main(void) {
    double A, B;
    if (scanf("%lf %lf", &A, &B) != 2)
        return 0;
    printf("%lf\n", A / B);
    return 0;
}

//read int and divide float
//int main(void) {
//    int A, B;
//    scanf("%d %d", &A, &B);
//    printf("%.10f\n", (double)A / B);
//    return 0;
//}