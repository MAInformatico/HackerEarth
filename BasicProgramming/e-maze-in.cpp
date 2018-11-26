#include <iostream>
#include <vector>
using namespace std;

int main(){
	int num1=0;
	int num2=0;
	string coord;
	cin >> coord;
	for(int i=0;i<coord.size();i++){
	    if(coord[i]=='L') num1--;
	    if(coord[i]=='R') num1++;
	    if(coord[i]=='U') num2++;
	    if(coord[i]=='D') num2--;
	}
	cout << num1<< " " << num2 << endl;
return 0;	
}
