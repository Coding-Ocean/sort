#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//構造体型
struct DATA {
	string name;
	int num;
};
//nameの小さい順にソートするときのファンクタ
struct comp_data_name {
	bool operator()(DATA& a, DATA& b) {
		return a.name < b.name;
	}
};
//numの小さい順にソートするときのファンクタ
struct comp_data_num {
	bool operator()(DATA& a, DATA& b) {
		return a.num < b.num;
	}
};
//構造体データをソートする
int main() {
	//データを入れてｖを用意
	vector<DATA> v{
		{"HKT",48},
		{"Nogizaka",46},
		{"AKB",48},
		{"Sakurazaka",46}, 
	};

	//nameの小さい順にソート
	sort(v.begin(), v.end(), comp_data_name());
	//numの小さい順にソート
	//sort(v.begin(), v.end(), comp_data_num());

	//全要素表示
	for (const auto& e : v)cout << e.name << e.num << endl;

	system("pause>0");
}