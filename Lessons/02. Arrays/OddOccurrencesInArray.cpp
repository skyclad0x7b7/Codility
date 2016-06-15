int solution(vector<int>& A) {
    char *checkBoard = new char[1000000001];
    for(int i=0; i < A.size(); i++) {
        checkBoard[A[i]]++;
    }
    for(int i=0; i<1000000001; i++) {
        if(checkBoard[i] % 2) {
            delete [] checkBoard;
            return i;
        }
    }
    delete [] checkBoard;
    return 0;
}