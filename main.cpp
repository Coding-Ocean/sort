#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//関数(２つの要素を比較するときに呼び出される)
bool comp(int a, int b) { return a > b; }

int main() {
	//データを入れたｖを用意
	vector<int> v{ 5,2,4,3,1 };
	//comp関数のアドレスをsortに渡す
	sort(v.begin(), v.end(), comp);
	//全要素表示
	for (const auto& e : v)cout << e << endl;

	system("pause>0");
}