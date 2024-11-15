#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <climits>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів у масиві: ";
    cin >> n;

    vector<int> array(n);
    cout << "Введіть елементи масиву:\n";
    for (int x = 0; x < n; x++) {
        cin >> array[x];
    }

    int maxSum = INT_MIN;
    int currentSum = 0;
    int start = 0, end = 0, tempStart = 0;

    for (int x = 0; x < n; x++) {
        currentSum += array[x]; 

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = x;
        }

        if (currentSum < 0) {
            currentSum = 0;
            tempStart = x + 1;
        }
    }

    cout << "Максимальна сума: " << maxSum << "\n";
    cout << "Підмасив із максимальною сумою: ";
    for (int x = start; x <= end; x++) {
        cout << array[x] << " ";
    }
    cout << endl;

    return 0;
}
