#include <bits/stdc++.h>

using namespace std;

// x^2n = x^n * x^n
// x^B/2�� ���� �˰� �ִٰ� �����ϰ� x^B�� ���� ����
// B�� Ȧ���̸� B/2���� 1�� �����Ǳ� ������ A�� �� �� �� ������
unsigned long long cal(unsigned long long A, int B, unsigned long long C) {
    if(B==0) {
        return (unsigned long long)1;
    }
    else {
        unsigned long long result = cal(A, B/2, C);
        result *= result;
        result %= C;
        if(B%2==1) {
            result *= A;
            result %= C;
        }
        return result;
    }
}

int main(void) {
    unsigned long long A, C, result;
    int B;
    scanf("%llu%d%llu",&A,&B,&C);
    result = cal(A, B, C);
    printf("%llu\n",result);
    return 0;
}
