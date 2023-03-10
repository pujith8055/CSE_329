#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string a, string b){
   int len1= a.length();
   int len2= b.length();
   if(len1!= len2) {
   cout<< "The String is not a Anagram\n";
   }
   unordered_map <char,int> mp;
   for(int i=0;i<a.size();i++) {
      mp[a[i]]++;
      mp[b[i]]--;
   }
   for(auto it:mp){
      if(it.second) return false;
   }
   return true;
}
int main(){
   string a= "abcd";
   string b= "cdba";
   cout<< checkAnagram(a,b)<<endl;
   string c= "efgh";
   string d= "ijkl";
   cout<< checkAnagram(c,d)<<endl;
   string e= "e1fgh";
   string f= "fhe1";
   cout<< checkAnagram(e,f)<<endl;
   return 0;
}