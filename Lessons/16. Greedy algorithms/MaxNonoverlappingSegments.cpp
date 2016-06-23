bool isOverlapped(int a1, int a2, int b1, int b2) {
    return (a1 <= a2 && a2 <= b1) ||  (a2 <= a1 && a1 <= b2);
}


int solution(vector<int>& A, vector<int>& B) {
    if(A.size() == 0) return 0;
    if(A.size() == 1) return 1;

    int count = 1;
    int a1 = A[A.size()-1];
    int b1 = B[B.size()-1];
    
    for(int i = A.size()-2; i>=0; i--) {
        if(isOverlapped(a1, A[i], b1, B[i])) {
            a1 = max(a1, A[i]);
        }
        else {
            count++;
            a1 = A[i];
            b1 = B[i];
        }
    }

    return count;
}