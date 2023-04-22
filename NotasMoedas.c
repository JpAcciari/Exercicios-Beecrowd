#include <stdio.h>

int main()
{
    double n;
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05, m01;

    printf("Insira o valor");
    scanf(" %lf", &n);
    n = n + 0.001;

    n100 = n / 100;
    n = n - (n100 * 100);
    n50 = n / 50;
    n = n - (n50 * 50);
    n20 = n / 20;
    n = n - (n20 * 20);
    n10 = n / 10;
    n = n - (n10 * 10);
    n5 = n / 5;
    n = n - (n5 * 5);
    n2 = n / 2;
    n = n - (n2 * 2);

    m1 = n / 1;
    n = n - (m1 * 1);
    m50 = n / 0.5;
    n = n - (m50 * 0.5);
    m25 = n / 0.25;
    n = n - (m25 * 0.25);
    m10 = n / 0.10;
    n = n - (m10 * 0.10);
    m05 = n / 0.05;
    n = n - (m05 * 0.05);
    m01 = n / 0.01;
    n = n - (m01 * 0.01);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}