#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> v{ 5,2,4,3,1 };
	//�����_��
	auto comp = [](int a, int b) {return a < b; };
	sort(v.begin(), v.end(), comp );
	for (const auto& e : v)cout << e << endl;
	system("pause>0");
}