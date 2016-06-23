int solution(vector<int> &A) {
    vector<int> tmp(A.size(), -2147483648);
    tmp[0] = A[0];
    for(int i=1; i<A.size(); i++) {
        for(int j=1; j<=6) {
            if((i - j)>=0) tmp[i] = max(tmp[i], A[i] + tmp[i-j])
        }
    }
    return tmp[A.size()-1];
}