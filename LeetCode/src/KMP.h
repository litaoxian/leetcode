#ifndef __KMP_H__
#define __KMP_H__

#include<vector>
#include <string>

class KMP {
public:
	int KMPSelect(std::string str, std::string z);
private:
	std::vector<int> getNext(std::string str);
};


#endif