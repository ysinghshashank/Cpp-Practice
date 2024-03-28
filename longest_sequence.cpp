#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int length = s.size();
   int longest_sequence = 0;
   for(int i=0;i<length;){
       int j = i+1;
       while(j<length && s[j]==s[i]){
           j++;
       }
       int count = j-i;
       longest_sequence = max(longest_sequence,count);
       i=j;
   }
   cout<<longest_sequence<<endl;
    return 0;
}
