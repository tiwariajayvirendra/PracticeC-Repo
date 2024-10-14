//  #include <iostream>
// #include <vector>
// using namespace std;

// int print(int n){
//  if(n<=1){
//      return n;
//  }
//  int last=print(n-1);
//  int scndlast= print(n-2);
//  return last+scndlast;
// }
// int main()
// {
   
// cout<<print(4);
//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////
//fibonacci series



#include <iostream>
// #include <vector>
using namespace std;

bool print(int l,int r,string s){
  if(l>=r){
      return true;
  }
  if(s[l]!= s[r]){
      return false;
  }
  bool final=print(l+1,r-1,s);
 return final;
}
int main()
{
   
string s="madam";
cout<<print(0,s.size()-1,s);
    return 0;
}
