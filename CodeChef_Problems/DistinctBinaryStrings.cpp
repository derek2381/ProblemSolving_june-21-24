// problem link
// https://www.codechef.com/problems/BINSTRING


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;

	    string str;
	    cin >> str;
	    int count = 0;

	    for(int i = 0;i < n-1;i++){
	        if(str[i] != str[i+1]){
	            count++;
	        }
	    }

	    cout << count+1 << endl;
	}
	return 0;
}
