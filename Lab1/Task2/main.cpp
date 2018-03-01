#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> arr){
    for (int i = 0; i < arr.size();i++) cout << arr[i]<< ' ';
}

vector<int> tribonacci(vector<int> signature, int n)
{
    vector<int> result;
    for (int i = 0; i < n;i++){
        if (i <= 2){
            result.push_back(signature[i]);
        }else {
            int add = 0;
            for (int j = i - 3; j < i; j++) {
                add = add + result[j];
            }
            result.push_back(add);
        }
    }
    return result;
}

int main() {
    vector<int> signature = { 1, 1, 1 };
    vector<int> res = tribonacci(signature, 10);;
    print(res);
    return 0;
}