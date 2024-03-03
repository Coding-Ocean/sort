#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//関数オブジェクト
class comp {
public:
	bool operator()(int a, int b) { return a > b; }
};

int main() {
	vector<int> v{ 5,2,4,3,1 };
	sort(v.begin(), v.end(), comp());
	for (const auto& e : v)cout << e << endl;
	system("pause>0");
}