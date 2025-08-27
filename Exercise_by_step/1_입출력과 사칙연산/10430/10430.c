//
// Created by rache on 25. 8. 27..
//

#include <stdio.h>

int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n", (A+B)%C);
    printf("%d\n", ((A%C) + (B%C))%C);
    printf("%d\n", (A*B)%C);
    printf("%d\n", ((A%C) * (B%C))%C);
    return 0;
}
