#include <iostream>
#include <string>

using namespace std;

int main(){

   string s,r;
   cin>>s>>r;
   int i;
   bool flag=true;
   
   int n2=r.size();
   for(i=0;i<s.length();i++){
    
      if(s[i]!=r[n2-i-1]){

        flag=false;
        break;
      }
   }
  
   if(flag)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

}
