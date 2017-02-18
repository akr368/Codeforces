#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 
 int n;
 cin>>n;
 int a[n];
 int i;
 int sum=0;
 int current_sum=0;
 int c=0;
 
 for(i=0;i<n;i++){
 	cin>>a[i];
 	sum+=a[i];
 }

 sort(a,a+n,greater<int>()); 

 for(i=0;i<n;i++){
    
    if(current_sum<=sum)
    	c++;
    current_sum+=a[i];
    sum-=a[i];
 }

 cout<<c<<endl;





  

}