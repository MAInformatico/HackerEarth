#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, q;
    cin>>n>>q;
    vector<long int> v(n+1), sum(n+1, 0);
    v[0]=0;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        sum[i] = sum[i-1]+ v[i];
    }
    int l, r;
    for( int i =0; i<q; i++){
        cin>>l>>r;
        cout<<( sum[r] - sum[l-1] )/(r-l+1)<<endl;
    }
return 0;
}
