#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void print(vector<string> arr){
    for (int i = 0; i < arr.size();i++) cout << arr[i]<< ' ';
}

vector<string> inArray(vector<string> &array1, vector<string> &array2){
    vector<string> result;
    for (int i = 0;i < array1.size();i++){
        for(int j = 0;j < array2.size();j++){
            if (array2[j].find(array1[i]) < array2[j].length() ){
                result.push_back(array1[i]);
                break;
            }
        }
    }
    sort(result.begin(),result.end());
    return result;
}

int main() {
    std::vector<std::string> arr1 = { "arp", "live", "strong" };
    std::vector<std::string> arr2 = { "lively", "alive", "harp", "sharp", "armstrong" };
    vector<string> result = inArray(arr1,arr2);
    print(result);
    return 0;
}