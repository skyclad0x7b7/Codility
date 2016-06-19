#include <algorithm>

class ACGT {
public:
    int a, c, g, t;
    ACGT():a(0), c(0), g(0), t(0){}
};

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    vector<int> ret;
    vector<int> count;
    count.assign(4, 0);

    ACGT *acgt = new ACGT[S.length()+1];

    for(int i=0; i<S.length(); i++) {
        switch(S[i]) {
        case 'A':
            count[0]++;
            break;
        case 'C':
            count[1]++;
            break;
        case 'G':
            count[2]++;
            break;
        case 'T':
            count[3]++;
            break;
        }
        
        acgt[i+1].a = count[0];
        acgt[i+1].c = count[1];
        acgt[i+1].g = count[2];
        acgt[i+1].t = count[3];
    }
    
    int minNum = 0;
    for(int i=0; i<P.size(); i++) {
        if(acgt[Q[i]+1].a - acgt[P[i]].a) minNum = 1;
        else if (acgt[Q[i]+1].c - acgt[P[i]].c) minNum = 2;
        else if (acgt[Q[i]+1].g - acgt[P[i]].g) minNum = 3;
        else minNum = 4;
        ret.push_back(minNum);
    }
    
    delete [] acgt;
    return ret;
}