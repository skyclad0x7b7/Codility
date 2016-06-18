#include <algorithm>

int solution(vector<int> &A) {
    unsigned long long int ret = 0;
    unsigned long long int plus = 0;

    vector<int>::iterator left = find(A.begin(), A.end(), 0);
    vector<int>::iterator right;
    plus = count(left, A.end(), 1);

    ret += plus;
    while(left != A.end()) {
        right = find(left + 1, A.end(), 0);
        plus -= count(left, right, 1);
        
        ret += plus;
        left = right;
    }
    if(ret > 1000000000) return -1;
    return ret;
}