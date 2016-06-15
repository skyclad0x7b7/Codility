vector<int> solution(vector<int> &A, int K) {
    vector<int> ret;
    int len = A.size();
    if(len == 0) return ret;
    int c = K % len;
    for(int i=0; i < len; i++) {
        ret.push_back(A[(len - (c - i)) % len]);
    }
    return ret;
}   