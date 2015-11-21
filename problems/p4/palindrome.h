#include <string>
static bool isPalindrome(std::string s)
{
	std::string temp = s;
	std::string old = s;
	bool check = false;
    int j = s.length() - 1;
    for(unsigned i = 0; i < s.length(); i++){
        s.at(i) = temp.at(j);
        j--;
    }
    if (s == old){
    	check == true;
    }
    return check;
}