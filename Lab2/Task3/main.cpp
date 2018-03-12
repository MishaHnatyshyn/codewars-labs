#include <iostream>
#include <vector>
#include <string>

using namespace std;

char getPaar(char el){
    switch (el){
        case (char) '}': return (char) '{';
        case (char) ']': return (char) '[';
        case (char) ')': return (char) '(';
    }
}

bool valid_braces(string braces) {
    vector<char> stack;
    for (int i = 0; i < braces.length(); i++){
        if (braces[i] == '(' || braces[i] == '[' || braces[i] == '{') stack.push_back(braces[i]);
        else if (stack[stack.size() - 1] == getPaar(braces[i])) stack.pop_back();
        else return false;
    }
    return stack.size() == 0;
}

int main() {
  return 0;
}
