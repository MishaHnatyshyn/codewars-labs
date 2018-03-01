#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr){
    for (int i = 0; i < arr.size();i++) cout << arr[i]<< ' ';
}

std::vector<int> xbonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    for (int i = 0; i < n;i++){
        if (i < signature.size()){
            result.push_back(signature[i]);
        }else {
            int add = 0;
            for (int j = i - signature.size(); j < i; j++) {
                add = add + result[j];
            }
            result.push_back(add);
        }
    }
    return result;
}

int main() {
    vector<int> signature = {0,0,0,0,1};
    vector<int> res = xbonacci(signature, 10);;
    print(res);
    return 0;
}