#include <iostream>

using namespace std;

int main() {
    int seconds,hours,min,remainingSeconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    hours = seconds / 3600;
    min = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;

    cout << seconds << " seconds is equivalent to " << hours << " hours "
         << min << " minutes " << remainingSeconds << " seconds.";

    return 0;
}

