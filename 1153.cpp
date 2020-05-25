#include <stdio.h>
int num[1000001] = { 0 };
int N;
void prime() {
    for (int i = 2; i*i <= N; i++)
    {
        if (num[i] == 1) continue;
        for (int j = 2; j*i <= N; j++) num[i*j] = 1;
    }
}
void find_prime(int n) {
    int a, b;
    for (int i = 2; i <= N>>1; i++)
    {
        if (num[i] == 0 && num[N - i] == 0) {
            printf("%d %d", i, N - i);
            return;
        }
    }
}
int main() {
    scanf("%d", &N);
    prime();
    if (N < 8) 
        printf("-1");
    else
    {
        if (N & 1) {
            printf("2 3 ");
            N -= 5;
            find_prime(N);
            return 0;
        }
        else
        {
            printf("2 2 ");
            N -= 4;
            find_prime(N);
            return 0;
        }
    }
}