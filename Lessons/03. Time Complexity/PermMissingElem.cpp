int solution(vector<int> &A) {
    int len = A.size();
    if(len == 0) return 1;
    bool *bList = new bool[100005];
    for(int i=0; i<100005; i++) bList[i] = false;
    for(int i=0; i<len; i++) {
        bList[A[i]] = true;
    }
    for(int i=1; i<100005; i++) if(!bList[i]) return i;
    return 0;
}