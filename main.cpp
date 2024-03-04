#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//関数オブジェクト(ファンクタ)
class comp {
public:
	bool operator()(int a, int b) { return a > b; }
};

int main() {
	//データを入れてｖを用意
	vector<int> v{ 5,2,4,3,1 };
	//ファンクタをsortに渡して並び変え
	sort(v.begin(), v.end(), comp());
	//全要素表示
	for (const auto& e : v)cout << e << endl;

	system("pause>0");
}