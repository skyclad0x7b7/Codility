#include <math.h>

int solution(vector<int> &A) {
    int lowSum = A[0];
    int highSum = 0;
    int offset;
    int minOffset = 2147483647;
    
    for(int i=1; i<A.size(); ++i) highSum += A[i];
    
    for(int i=1 ; i<A.size(); ++i) {
        offset = abs(lowSum - highSum);
        if(offset == 0) return 0;
        if(offset < minOffset) {
            minOffset = offset;
        }
        lowSum += A[i];
        highSum -= A[i];
    }
    return minOffset;
}