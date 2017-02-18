#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){

    
    set<int> s;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int i;

    for(i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            s.insert(i);
    }

    cout<<s.size()<<endl;




}
