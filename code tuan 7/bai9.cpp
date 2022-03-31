#include<bits/stdc++.h>
using namespace std;
int n;
vector<string>res;
vector<char>cur;
int num=0;
	

void backtrack(int i)
{
	if(num<0) return ;
	if(cur.size()==n)
	{
	       if(num==0)
	    {
	        string s;
	        for(auto&x:cur) s+=x;
	        res.push_back(s);
	    }
	    return ;
	}
		cur.push_back('(');
		num++;
		backtrack(i+1);
		cur.pop_back();
		num--;
		cur.push_back(')');
	    num--;
	    backtrack(i+1);
	    cur.pop_back();
	    num++;
	}
	

main()
{
	    cin>>n;
	    backtrack(1);
	    for(auto&x:res) cout<<x<<endl;
}
