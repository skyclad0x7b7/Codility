#include <algorithm>

int solution(vector<int> &A) {
    int c = 0;
    if(A.size() == 0) return 1;
    sort(A.begin(), A.end());
    for(int i=0; i<A.size(); i++) {
        if(A[i] > 0) {
            c = i;
            break;
        }
    } 
    
    if(A[c] != 1) return 1;

    for(int i=c+1; i<A.size(); i++) {
        if((A[i] - A[i-1]) > 1) return A[i-1]+1;
    }
    return A[A.size()-1]+1;
}