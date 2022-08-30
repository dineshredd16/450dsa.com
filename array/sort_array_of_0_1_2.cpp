#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int a[] = {0,1,2,0,1,2};
    int a0 = 0, a1 = 0, a2 = 0;
    for (int i=0; i<n; i++) {
        if (a[i] == 0){
            a0++;
        }
        else if (a[i] == 1) {
            a1++;
        }
    }
    a2 = n - (a0+a1);
    for (int i=0; i<n; i++) {
        if (i < a0) {
            a[i] = 0;
        }
        else if (i < a0+ a1) {
            a[i] = 1;
        }
        else {
            a[i]= 2;
        }
    }

    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}