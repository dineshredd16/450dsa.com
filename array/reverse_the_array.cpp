#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int test=0; test<t; test++) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int j = n -1;
        for (int i=0; i<n/2; i++) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j--;
        }
        for (int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}