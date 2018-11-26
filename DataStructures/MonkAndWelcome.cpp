#include <iostream>
#include <vector>
using namespace std;


int main(){
    int N,v=0;
    cin >> N;
    vector<int> A;
    vector<int> B;
    vector<int> C;
    for(int i=0;i<N;i++){
        cin>>v;
        A.push_back(v);
    }
    for(int i=0;i<N;i++){
        cin>>v;
        B.push_back(v);
    }
    for(int i=0;i<N;i++){
        int d=A[i]+B[i];
        C.push_back(d);
        cout << C[i] << " ";
    }
    return 0;
}
