#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int count = 0;

    while (n != 0) {
        cin >> n;

        if (n != 0)
            count += 1;
    }

    cout << count;

    return 0;
}
