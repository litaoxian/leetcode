#include "LongestPalindrome.h"

#include <string>
#include <map>
#include <iostream>

using namespace std;


int LongestPalindrome::longestPalindrome (string s) 
{
    //����ÿ���ַ����ֵĴ�����
    map<char , int> nums;
    for (auto c : s) {
        auto& temp = nums[c];
        ++temp;
    }
    int sum = 0, c = 0;
    for(auto& num : nums) {
        //��Ϊż������ȫ�������Լ�����Ĵ���
        //��Ϊ��������ÿ�μ������ - 1������ڼ���һ��һ��
        if(num.second % 2 == 0) sum += num.second;
        else {
            sum += num.second - 1;
            c = 1;
        }
    }
    return sum + c;
}
