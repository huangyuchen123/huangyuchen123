#include <iostream>
#include <string> 
using namespace std;
bool huiwen(string s){
 int n = s.size();
 if(s[0]!=s[n-1]){
  return false;
 }
 if(n==1||n==0){
  return true;
 }
 s.erase(0, 1);
 s.erase(n-2, n-1);
 return huiwen(s);
}

int main(){
 string s;
 cin >> s;
 bool res = huiwen(s);
 if(res==1){
  cout <<s<<" is a palindrome"<< endl;
 }
 else{
  cout << s<<" is not a palindrome" << endl;
 }
 return 0;
} 
