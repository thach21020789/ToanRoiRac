#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void reverse(string &s, int l ,int r) {
	if (l > r) return;
	else {
		swap(s[l], s[r]);
		reverse(s, l + 1, r - 1);
	}
}
int  main() {
	string s; cin >> s;
	reverse(s, 0, s.size() - 1);
	cout << s << endl;
	return 0;
}
