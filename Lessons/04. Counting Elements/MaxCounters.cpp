#include <cstring>

vector<int> solution(int N, vector<int> &A) {
    int maxValue = 0;
    int savedMaxValue = 0;
    int *ret = new int[N];
    memset(ret, 0, sizeof(int) * N);
    
    for(int i=0; i<A.size(); i++) {
        if(A[i] >= 1 && A[i] <= N) {
            ret[A[i]-1] += 1;
            if(ret[A[i]-1] > maxValue) maxValue = ret[A[i]-1];
        }
        else if (A[i] == (N+1)) {
            memset(ret, 0, sizeof(int) * N);
            savedMaxValue += maxValue;
            maxValue = 0;
        }
    }
    for(int i=0; i<N; i++) ret[i] += savedMaxValue;
    vector<int> newRet(&ret[0], &ret[N]);
    delete [] ret;
    return newRet;
}