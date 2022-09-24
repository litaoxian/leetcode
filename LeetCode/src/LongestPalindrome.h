#ifndef __LONGESTPALINDROME__
#define __LONGESTPALINDROME__
#include <string>
/*
 * 给定一个包含大写字母和小写字母的字符串 s ，返回 通过这些字母构造成的 最长的回文串 。
 * 在构造过程中，请注意 区分大小写 。比如 "Aa" 不能当做一个回文字符串。
 * 例如：AasaA --> 回文长度 5、AaaA 回文长度 4 AaaccaccaaA 回文长度 11
*/

class LongestPalindrome
{
public:
    int longestPalindrome (std::string s);
};
#endif // !__LONGESTPALINDROME__



