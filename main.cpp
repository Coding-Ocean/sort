#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//�\���̌^
struct DATA {
	string name;
	int num;
};
//name�̏��������Ƀ\�[�g����Ƃ��̃t�@���N�^
struct comp_data_name {
	bool operator()(DATA& a, DATA& b) {
		return a.name < b.name;
	}
};
//num�̏��������Ƀ\�[�g����Ƃ��̃t�@���N�^
struct comp_data_num {
	bool operator()(DATA& a, DATA& b) {
		return a.num < b.num;
	}
};
//�\���̃f�[�^���\�[�g����
int main() {
	//�f�[�^�����Ă���p��
	vector<DATA> v{
		{"HKT",48},
		{"Nogizaka",46},
		{"AKB",48},
		{"Sakurazaka",46}, 
	};

	//name�̏��������Ƀ\�[�g
	sort(v.begin(), v.end(), comp_data_name());
	//num�̏��������Ƀ\�[�g
	//sort(v.begin(), v.end(), comp_data_num());

	//�S�v�f�\��
	for (const auto& e : v)cout << e.name << e.num << endl;

	system("pause>0");
}