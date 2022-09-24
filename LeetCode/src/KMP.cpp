#include "KMP.h"
#include <vector>

std::vector<int> KMP::getNext(std::string str) {
	int i = 1;
	std::vector<int> next(str.size(), 0);
	while (i < str.size()) {
		if (str[next[i - 1]] == str[i]) {
			next[i] = next[i - 1] + 1;
		}
		else {
			next[i] = 0;
		}
		++i;
	}
	return next;
}

int KMP::KMPSelect(std::string str, std::string z) {
	std::vector<int> v = getNext(str);

	int i = 0;//����ָ��
	int j = 0;//�Ӵ�ָ��
	while (i < str.size()) {
		if (str[i] == z[j]) {
			++i;
			++j;
		}
		else if (j > 0) {
			j = v[j - 1];
		}
		else { //��һ�αȽϾͲ�ƥ��
			++i;
		}
		if (j == z.size()) {
			return i - j;
		}

	}
	return -1;
}

void test(){

}