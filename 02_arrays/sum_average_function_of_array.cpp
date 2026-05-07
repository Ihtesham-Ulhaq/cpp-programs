#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout<<"sum is: "<<sum;
    int average=sum / size;
    cout<<"/naverage is: ";
    return sum,average;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout <<calculateAverage(arr, size) << endl;
    return 0;
}



