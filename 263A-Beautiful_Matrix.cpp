/*256190905	Apr/12/2024 08:24UTC+5.5	Mr.Mystery1962	263A - Beautiful Matrix	C++20 (GCC 13-64)	In queue	0 ms	0 KB*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,ans;
   
   for(int i=0;i<25;i++){
       cin>>a;
       if(a==1)
       ans=i+1;
   }
   ans++;
   int distance=abs(3-(ans/5))+abs(3-(ans%5));
   
   cout<<distance<<"\n";
}
