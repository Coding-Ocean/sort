#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//ベクター配列を普通にソートする
int main() {
	//データを入れたｖを用意する
	vector<int> v{ 5,2,4,3,1 };
	//大きい順にソート
	sort(v.begin(), v.end(), greater<>());
	//ちなみに小さい順はこれだけでよい
	//sort(v.begin(), v.end());
	//全要素表示
	for (const auto& e : v)cout << e << endl;

	system("pause>0");
}