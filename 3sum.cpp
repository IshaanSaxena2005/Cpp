#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i = 0; i < n - 2; i++) {
        if(i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        while(left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if(sum == 0) {
                cout << "[" << arr[i] << ", "
                << arr[left] << ", "
                << arr[right] << "]" << endl;
                left++;
                right--;

                while(left < right && arr[left] == arr[left - 1]) {
                    left++;
                }

                while(left < right && arr[right] == arr[right + 1]) {
                    right--;
                }
            }
            else if(sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return 0;
}