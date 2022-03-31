#include<iostream>
#include<string>
using namespace std;
int ones(string s){
	if (s.size()==0) return 0;
	string tmp=s.substr(0,s.size()-1);
	if (s[s.size()-1]=='1') return 1 +ones(tmp); else return ones(tmp);
}
int  main() {
	string s; cin >> s;
	cout<<ones(s);
	return 0;
}
