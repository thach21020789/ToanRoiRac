#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int searchMin(string s, int idx){
	if(idx == 0) return s[idx] - 48;
	return  min(s[idx] - 48,searchMin(s,idx - 1));
}
int  main() {
	string s; cin >> s;
	cout << searchMin(s,s.size() - 1);
	return 0;
}
