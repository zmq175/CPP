//-------------------------------------
// EX0305.cpp
// º”√‹”ÎΩ‚√‹
//-------------------------------------
#include<iostream>
#include<string>
using namespace std;
//-------------------------------------
const char key[]="4962873";
//-------------------------------------
string encode(string& str){
  string result(str);
  for(int i=0; i<str.length(); i++){
    result[i] += key[i%7]-'0';
    if(result[i]>'z')
      result[i] -= 91;  // 'z'-' '+1=122-32+1=91;
  }
  return result;
} //-----------------------------------
string decode(string str){
  string result(str);
  for(int i=0; i<str.length(); i++){
    result[i] -= key[i%7]-'0';
    if(result[i]<' ')
      result[i] += 91;  // 'z'-' '+1=122-32+1=91;
  }
  return result;
} //-----------------------------------
int main(){
  string s;  // s = "the result of 3 and 2 is not 8";
  getline(cin, s);
  string t = encode(s);
  string u = decode(t);
  cout<<(s==u ? s+"\n" : string("decode failed\n"));
} //-----------------------------------
