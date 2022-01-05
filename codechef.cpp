#include <bits/stdc++.h>
using namespace std;

map<char,char> who_beats = {{'R','P'},{'S','R'},{'P','S'}};

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n>>s;

	    map<char,int> index_1 = {{'R',-1},{'P',-1},{'S',-1}};
	    string ans(n,'?');
	    for(int i=n-1;i>=0;i--){
	        int index_2 = index_1[who_beats[s[i]]];
	        if(index_2 == -1)
	            ans[i] = s[i];
	        else
	            ans[i] = ans[index_2];
	            index_1[i] = i;

	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
