#include <algorithm>

int solution(vector<int> &A) {
    if(A.size() == 0) return 0;
    sort(A.begin(), A.end());
    if(A[0] != 1) return 0;
    if(A.size() == 1) return 1;
    for(int i=0; i<A.size()-1; i++) {
        if(A[i+1] - A[i] != 1) return 0;
    }
    return 1;
}