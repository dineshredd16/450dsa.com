#include <iostream>

using namespace std;

int getMaxMin(int a[], int n) {
    int min, max;
    min = a[0];
    max = a[0];
    for (int i=0; i<n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    int result[2] = {min, max};
    return result[2];
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int result = getMaxMin(a, n);
    cout << result;
    return 0;
}