#include <algorithm>

int solution(int K, vector<int> &A) {
    int count = 0;
    unsigned int sum = 0;    
    for(int i=0; i<A.size(); i++) {
        sum += A[i];
        if(sum >= K) {
            count++;
            sum = 0;
        }
    }
    return count;
}