#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter no of elements:";
    cin >> n;

    int arr[n];
    cout<<"Enter array:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << maximum;

    return 0;
}