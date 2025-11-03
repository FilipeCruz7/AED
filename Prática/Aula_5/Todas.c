#include <stdio.h>

unsigned int num_calls1,num_calls2,num_calls3; //global var
unsigned int T1(unsigned int n) {
    num_calls1 ++;
    if (n==1)
        return 1;
    return T1(n / 2) + n;
}

unsigned int T2(unsigned int n) {
    num_calls2++;
    if (n == 1)
        return 1;
    return T2(n / 2) + T2((n + 1) / 2) + n;
}

unsigned int T3(unsigned int n) {
    num_calls3++;
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 2 * T3(n / 2) + n;
    else
        return T3(n / 2) + T3((n + 1) / 2) + n;
}

int main() {
    printf("N\tT1(N)\tChamadas1\tT2(N)\tChamadas2\tT3(N)\tChamadas3\n");
    printf("------------------------------------------------------------------\n");

    for (unsigned int n = 1; n <= 15; n++) {
        num_calls1 = num_calls2 = num_calls3 = 0;

        int r1 = T1(n);
        int c1 = num_calls1;

        int r2 = T2(n);
        int c2 = num_calls2;

        int r3 = T3(n);
        int c3 = num_calls3;

        printf("%d\t%d\t%d\t\t%d\t%d\t\t%d\t%d\n", n, r1, c1, r2, c2, r3, c3);
    }

    printf("------------------------------------------------------------------\n");

    return 0;
}