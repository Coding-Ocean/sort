#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//�֐��I�u�W�F�N�g(�t�@���N�^)
class comp {
public:
	bool operator()(int a, int b) { return a > b; }
};

int main() {
	//�f�[�^�����Ă���p��
	vector<int> v{ 5,2,4,3,1 };
	//�t�@���N�^��sort�ɓn���ĕ��ѕς�
	sort(v.begin(), v.end(), comp());
	//�S�v�f�\��
	for (const auto& e : v)cout << e << endl;

	system("pause>0");
}