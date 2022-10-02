#include <iostream>
using namespace std;

int main() {
    int n = 5,m=2;
    int a[] = {1,2,3,4,5}, b[] = {1,2,3};
    int result[n+m];
    int i=0, j=0;
    for (int k=0; k<(n+m); k++) {
        if (a[i] < b[j]) {
            result[k] = a[i];
            i++;
        }
        else if (b[j] < a[i]) {
            result[k] = b[j];
            j++;
        }
        else if (a[i] == b[j]) {
            result[k] = a[i];
            i++;
        }
    }
    for (int k=0; k < (sizeof(result)/sizeof(result[0])); k++){
        cout << result[k] << " ";
    }
    cout << endl;
    return 0;
}