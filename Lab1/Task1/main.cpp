#include <iostream>
#include <vector>

using namespace std;

int getLengthOfMissingArray(vector<vector<int>> arrayOfArrays)
{
    int size = arrayOfArrays.size();
    if (size == 0) return 0;
    bool flag = false;
    int minSize = arrayOfArrays[0].size();
    int maxSize = arrayOfArrays[0].size();

    for (int k = 1;k < arrayOfArrays.size();k++){
        if (arrayOfArrays[k].size() < minSize) minSize = arrayOfArrays[k].size();
        if (arrayOfArrays[k].size() > maxSize) maxSize = arrayOfArrays[k].size();
    }

    for (int i = minSize;i <= maxSize;i++){
        for (int j = 0;j < size;j++){
            if ( arrayOfArrays[j].size() == i) flag = true;
            if ( arrayOfArrays[j].size() == 0) return 0;
        }
        if ( flag == false) return i;
        else flag = false;
    }
    return 0;
}

int main() {
    vector<vector<int>> testInput = { { 1, 2 }, { 4, 5, 1, 1 }, { 5, 6, 7, 8, 9 } };
    cout << getLengthOfMissingArray(testInput);
}

