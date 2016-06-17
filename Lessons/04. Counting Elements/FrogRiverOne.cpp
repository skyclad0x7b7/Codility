bool validation(bool *bList, int X);

int solution(int X, vector<int> &A) {
    int endCount = 0;
    int len = A.size();
    
    bool *bList = new bool[X];
    for(int i=0; i<X; i++) bList[i] = false;

    for(int i=0; i<len; i++) bList[A[i]-1] = true;
    if(!validation(bList, X)) return -1;

    for(int i=0; i<X; i++) bList[i] = false;
    for(int i=0; i<len; i++) {
        if(!bList[A[i]-1]){
            bList[A[i]-1] = true;
            if(++endCount == X) return i;
        }
    }
    return -1;
}

bool validation(bool *bList, int X){
    for(int i=0; i<X; i++) if(!bList[i]) return false;
    return true;
}