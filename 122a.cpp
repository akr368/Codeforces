#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 
    
    int a[]={4,7,47,44,77,74,444,447,474,477,777,747,774,744};
    int n;
    cin>>n;
    int i;
    for(i=0;i<14;i++){
    	if(n%a[i]==0){
    		cout<<"YES"<<endl;
    		return 0;
    	}
    }
    cout<<"NO";


  

}