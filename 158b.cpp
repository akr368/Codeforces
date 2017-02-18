#include <iostream>
#include <string>

using namespace std;

int main(){

  int n;
  cin>>n;
  int a[100000];
  int i;
  int nOne=0;
  int nTwo=0;
  int nThree=0;
  int nFour=0;

  for(i=0;i<n;i++)
    cin>>a[i];

  for(i=0;i<n;i++) {
      if(a[i]==1)
        nOne++;
      else if(a[i]==2)
        nTwo++;
      else if(a[i]==3)
        nThree++;
      else
        nFour++;
   }

   int ans=0;
   ans+=nFour;
   ans+=nTwo/2;
   








   cout<<"NO";

}