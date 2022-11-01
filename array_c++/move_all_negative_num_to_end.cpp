#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int neg=0, pos=0;
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 };
    for (int i=0; i<n; i++){
       if (arr[i] < 0){
            neg++;
        }
        else if (arr[i] > 0) {
            pos++;
        }
    }
    int negative[neg];
    int positive[pos];
    int j=0, k=0;
    for (int i=0; i<n; i++) {
        if (arr[i] < 0){
            negative[j] = arr[i];
            j++;
        }
        else if (arr[i] > 0) {
            positive[k] = arr[i];
            k++;
        }
    }
    for (int i=0; i<n; i++) {
        if (i < pos){
            arr[i] = positive[i];
        }
        else {
            arr[i] = negative[i-pos];
        }
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}