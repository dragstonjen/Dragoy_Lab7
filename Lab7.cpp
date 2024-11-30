#include <iostream>
#include <windows.h>
#include <vector>
#include <climits>

using namespace std;

int maxSubArraySum(const vector<int>& arr) {
    int max_sum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        int current_sum = 0;

        for (int j = i; j < arr.size(); j++) {
            current_sum += arr[j];
            max_sum = max(max_sum, current_sum); 
        }
    }

    return max_sum;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = maxSubArraySum(arr);
    cout << "Максимальна сума підмасиву: " << result << endl;

    return 0;
}
