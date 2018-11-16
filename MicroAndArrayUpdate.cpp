#include <iostream>
#include <vector>

using namespace std;

int getMin(vector<int> v){
    int min=v[0];
    for(int i=1;i<v.size();i++){
    if(min>v[i])
    min=v[i];
    }
    return min;
}

int main(){
    int t,n,m,min;
    cin>>t;	
    vector<int>v[t];
    vector<int>k;
    for(int i =0;i<t;i++){
        cin>>n>>m;
        for(int k=0;k<n;k++){
            cin>>aux;
            v[i].push_back(aux);
        }
        k.push_back(m); 
    }
    for(int i=0;i<t;i++){
        min = getMin(v[i]);
        if(min<k[i])
            cout<<(k[i]-min)<<endl;
        else
            cout<<0<<endl;
    }
}
