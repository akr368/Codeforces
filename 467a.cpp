#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){

    
    int n;
    cin>>n;
    int count=0;
    int a,b;
    while(n--){
        cin>>a>>b;
        if(b-a>=2)
            count++;
    }
    cout<<count<<endl;




}
