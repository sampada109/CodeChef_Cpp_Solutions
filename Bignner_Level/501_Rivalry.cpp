#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d; cin>>a>>b>>c>>d;
	int s1 = a + c;
	int s2 = b + d;
	if(a + c > b + d){
	    cout<<"Dominater"<<endl;
	}
	else{
	    cout<<"Everule"<<endl;
	}
	return 0;

}
