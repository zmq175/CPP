//==========================================
#include <iostream>
#include <string>
using namespace std;
//==========================================
string reverseStr(string s){
	string temp=s;
	for(int a=0;a<s.length();a++)
		temp[a]=s[s.length()-a-1];
	return temp;
}
bool isPassword(string s){
	bool ispassword=0;
	if(s==reverseStr(s))
		ispassword=1;
	return ispassword;
}
string testWord(string s){
	string result="ab";
	for(int i=0;isPassword(result)==false&&i<s.length();i++){
		for(int a=i;a>=0;a--){
			result=s.substr(a,s.length()-i);
			if(isPassword(result))
				break;
		}
	}
	return result;
}
int main(){
	string str;
	for(;cin>>str;)
		cout<<testWord(str).length()<<endl;
}