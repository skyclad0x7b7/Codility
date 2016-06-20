int solution(vector<int> &A) {
    int minAvg = 2147483647;
    int curCount;
    int retIndex = 0;
    double sum = 0;
    double avg = 0;

    for(curCount = 2; curCount < 4; curCount++) {
        for(int i=0; i<A.size()-(curCount-1); i++) {
            sum = 0;
            for(int j=0; j<curCount; j++) {
                sum += A[i + j];
            }
            avg = sum / (double)curCount;
            if(avg < minAvg) {
                minAvg = avg;
                retIndex = i;
            }
        }
    }
    return retIndex;
}