#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//�֐�(�Q�̗v�f���r����Ƃ��ɌĂяo�����)
bool comp(int a, int b) { return a > b; }

int main() {
	//�f�[�^����ꂽ����p��
	vector<int> v{ 5,2,4,3,1 };
	//comp�֐��̃A�h���X��sort�ɓn��
	sort(v.begin(), v.end(), comp);
	//�S�v�f�\��
	for (const auto& e : v)cout << e << endl;

	system("pause>0");
}