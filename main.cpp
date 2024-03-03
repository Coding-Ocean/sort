#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct DATA {
	string name;
	int num;
};
struct comp_data_name {
	bool operator()(DATA& a, DATA& b) {
		return a.name < b.name;
	}
};
struct comp_data_num {
	bool operator()(DATA& a, DATA& b) {
		return a.num < b.num;
	}
};
int main() {
	vector<DATA> v{
		{"HKT",48},
		{"Nogizaka",46},
		{"AKB",48},
		{"Sakurazaka",46}, 
	};
	sort(v.begin(), v.end(), comp_data_num() );
	for (const auto& e : v)cout << e.name << e.num << endl;
	system("pause>0");
}