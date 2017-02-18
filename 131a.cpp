#include <iostream>
#include <string>

using namespace std;

int main(){
   
    string s;
    cin>>s;
    int i;
    string ans;
    bool allupper=true;
    for(i=1;i<s.size();i++){
        if(islower(s[i]))
         { 
          allupper=false;
          break;
         }

    }

    
    
    cout<<ans<<endl;
  

  

   return 0;

}