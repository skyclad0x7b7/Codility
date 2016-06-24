
#include <math.h>

int solution(vector<int> &A) {
	if (A.size() == 0) return 0;
	vector<int> psum;
	psum.push_back(0);
	int sum = 0;
	for (int i = 0; i<A.size(); i++) {
		sum += A[i] * ((i % 2) ? -1 : 1);
		psum.push_back(sum);
	}

	int minSum = abs(psum[1]);
	for (int i = 2; i <= A.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (minSum > abs(psum[i] - psum[j])) minSum = abs(psum[i] - psum[j]);
		}
	}
	return minSum;
}