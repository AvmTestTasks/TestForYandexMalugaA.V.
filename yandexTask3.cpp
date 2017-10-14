/*
 TASK3
 
 Given  a  string  which  contains  only lowercase letters,
 remove  duplicate letters  so that  every letter  appear  once
 and  only  once. You  must  make  sure  your result is the  smallest
 in lexicographical  order  among  all  posible results.
 
 Example:
 Given " bcabc" return "abc"
 Given " cbacdcbc" return "abcd"
 
 Use following  signature:  string task3(string  s);
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


string task3(string s);

int main()
{
	
	string temp = "cbacdcbc";
	string temp2 = "cbacdcbc";
	string temp4 = "bcabc";

	cout << task3(temp) << endl;
	cout << task3(temp2) << endl;
	cout << task3(temp4) << endl;
	
	system("pause");
	return 0;
}
string task3(string s)
{
	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());
	return s;
}

