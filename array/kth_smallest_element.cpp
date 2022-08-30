#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int count = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    // sort(arr, arr + 6);  instead of writing sort algorithm use sort
    for (int i=0; i<count-1; i++){
        int temp = arr[i], replace = arr[i], replace_index = i;
        for (int j=i+1; j<count; j++){
            if (arr[j] < replace){
                replace = arr[j];
                replace_index = j;
            }
        }
        arr[i] = replace;
        arr[replace_index] = temp;
    }
    for (int i=0; i<count; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr[ k -1];
    return 0;
}