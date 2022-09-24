#include "LongestPalindrome.h"

#include <string>
#include <map>
#include <iostream>

using namespace std;


int LongestPalindrome::longestPalindrome (string s) 
{
    //保存每个字符出现的次数。
    map<char , int> nums;
    for (auto c : s) {
        auto& temp = nums[c];
        ++temp;
    }
    int sum = 0, c = 0;
    for(auto& num : nums) {
        //若为偶数，则全部都可以加入回文串。
        //若为奇数，则每次加入该数 - 1。最后在加入一个一。
        if(num.second % 2 == 0) sum += num.second;
        else {
            sum += num.second - 1;
            c = 1;
        }
    }
    return sum + c;
}
