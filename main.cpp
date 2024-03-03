#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> v{ 5,2,4,3,1 };
	sort(v.begin(), v.end(), greater<>());
	for (const auto& e : v)cout << e << endl;
	system("pause>0");
}