#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//�x�N�^�[�z��𕁒ʂɃ\�[�g����
int main() {
	//�f�[�^����ꂽ����p�ӂ���
	vector<int> v{ 5,2,4,3,1 };
	//�傫�����Ƀ\�[�g
	sort(v.begin(), v.end(), greater<>());
	//���Ȃ݂ɏ��������͂��ꂾ���ł悢
	//sort(v.begin(), v.end());
	//�S�v�f�\��
	for (const auto& e : v)cout << e << endl;

	system("pause>0");
}