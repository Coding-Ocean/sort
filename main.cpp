#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//データを入れてｖを用意
	vector<int> v{ 5,2,4,3,1 };
	//ラムダ式
	auto comp = [](int a, int b) {return a < b; };
	//ラムダ式をsortに渡して並び変え
	sort(v.begin(), v.end(), comp );
	//全要素表示
	for (const auto& e : v)cout << e << endl;

	system("pause>0");
}