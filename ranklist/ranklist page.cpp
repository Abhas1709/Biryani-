#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
     float x;
     cin>> x;
     if(x<=25){
     cout << 1 << endl;
     }
     else
     cout<< ceil(x/25) << endl;
	}
	return 0;
}
