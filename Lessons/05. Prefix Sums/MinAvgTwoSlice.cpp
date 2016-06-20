int solution(vector<int> &A) {
    int minAvg = 2147483647;
    int curCount = 2;
    int retIndex = 0;

    int sum = 0;
    double avg = 0;
    do {
        for(int i=0; i+curCount < A.size(); i++) {
            for(int j=0; j<curCount; j++) {
                sum += A[i+j];
            }
            avg = (double)sum / curCount;
            if(avg < minAvg) {
                minAvg = avg;
                retIndex = i;
            }
            sum = 0; 
        }
        curCount += 1;
    } while(curCount < A.size());
    return retIndex;
}