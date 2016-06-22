#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool mySortASC(pair<int, pair<int, int>> i, pair<int, pair<int, int>> j) {
	return i.second.second < j.second.second;
}

int main(int argc, char *argv)
{
	vector<pair<int, pair<int, int>>> meet;
	vector<int> ret;
	int num, startHour, endHour, N;
	int minTime = 2147483647;

	cin >> N;
	for (int i = 0; i<N; i++) {
		cin >> num;
		cin >> startHour;
		cin >> endHour;
		meet.push_back(pair <int, pair<int, int>>(num, pair<int, int>(startHour, endHour)));
	}

	sort(meet.begin(), meet.end(), mySortASC);
	ret.push_back(meet[0].first);
	endHour = meet[0].second.second;
	for (int i = 1; i < N; i++) {
		if (endHour <= meet[i].second.first) {
			endHour = meet[i].second.second;
			ret.push_back(meet[i].first);
		}
	}
	
	cout << ret.size() << endl;
	for (int i = 0; i < ret.size(); i++) {
		cout << ret[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}