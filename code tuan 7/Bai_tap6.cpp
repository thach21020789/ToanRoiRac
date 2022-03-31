#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int Binary(string s){
	if(s.size() == 0) return 0;
	else{
		string tmp = s.substr(0,s.size() - 1);
		if(s[s.size() - 1] == '1') return Binary(tmp) + 1;
		else return  Binary(tmp) - 1;
	}
}
int  main() {
	string s; cin >> s;
	if(Binary(s) < 0) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}
