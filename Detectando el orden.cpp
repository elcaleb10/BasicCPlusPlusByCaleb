#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B && B == C) {
        printf("I\n");
    }
    else if (A <= B && B <= C) {
        printf("C\n");
    }
    else if (A >= B && B >= C) {
        printf("D\n");
    }
    else {
        printf("X\n");
    }

    return 0;
}

