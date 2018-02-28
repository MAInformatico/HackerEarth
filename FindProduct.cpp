#include <iostream>
using namespace std;

int main() {
	int n,d=0;
	long long int count=1;
	cin >> n;
	for(int i=0; i<n;i++){
	cin >> d;
	count= (count *d) % 1000000007;
	}
	cout << count << endl;
}
