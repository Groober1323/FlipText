#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    cout << "=== Reverse Text Bottom-Up Program ===" << endl;
    cout << "Enter text, number or symbol: ";

    string input;
    getline(cin, input);

    if (input.empty()) {
        cout << "No input provided!" << endl;
        return 0;
    }

    // Разбиваем строку на символы и переворачиваем порядок символов снизу вверх
    // (как если бы перевернули строку вертикально)
    cout << "\nReversed bottom-up:" << endl;
    cout << "===================" << endl;
    for (int i = input.length() - 1; i >= 0; --i) {
        cout << input[i]<< endl;
    }
    cout << "===================" << endl;

    cout << "Program finished. Press any key to exit..." << endl;
    cin.get();

    return 0;
}