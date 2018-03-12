#include <iostream>
#include <string>
#include <vector>


using namespace std;

int returnValue(char c){
	  switch (c){
		    case 'I':  return 1;
		    case 'V':  return 5;
		    case 'X':  return 10;
		    case 'L':  return 50;
		    case 'C':  return 100;
		    case 'D':  return 500;
		    case 'M':  return 1000;
	  }
}
 
int solution(string roman){
    int sum = 0, prev = 0;
    for (int i = roman.length()-1 ; i >= 0 ;i--)
    {
        int curr = returnValue(roman[i]);
        cout << curr << endl;
        sum += curr < prev ? -curr : curr;
        prev = curr;
    }
    return sum;
}

int main(){
  return 0;
}
