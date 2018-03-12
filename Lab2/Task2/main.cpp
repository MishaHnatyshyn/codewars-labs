#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isUniq(string str, vector<string> result){
    for(int i = 0;i<result.size();i++) if(str == result[i]) return false;
    return true;
}

vector<string> permutations(string s) {
    vector<string> result;
    vector<char> str;
    
    for(int i = 0; i < s.length();i++) str.push_back(s[i]);
    sort(str.begin(), str.end());
    do {
      string element = "";
      for (int i = 0; i < str.size(); i++){
        element += str[i];
      }
      if ( isUniq(element,result) )result.push_back(element);
    } while ( next_permutation(str.begin(),str.end()) );
    
    return result;
}

int main(){
  return 0;
}
