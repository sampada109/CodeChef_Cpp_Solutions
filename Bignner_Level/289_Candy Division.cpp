#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    if(n%3==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
