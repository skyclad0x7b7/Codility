#include <vector>

int solution(int N) {
    bool flag = false;
    int count = 0;
    int maxCount = 0;
    vector<int> binList;
    while(N > 0) {
        binList.push_back(N % 2);
        N /= 2;
    }
    
    for(int i=0; i< binList.size(); i++) {
        if(binList[i]) {
            if(!flag) flag = true;
            else {
                if(maxCount < count) maxCount = count;
            }
            count = 0;
            continue;
        } else if(flag) count++;
    }
    return maxCount;
}