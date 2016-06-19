int solution(int A, int B, int K) {
    int ret;
    unsigned a, b, k;
    a = A;
    b = B;
    k = K;
    
    if(A%K) ret = ((b - a) + (a % k)) / k;
    else ret = ((b - a) + k ) / k;
    return ret;
}