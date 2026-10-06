#include "iostream"
#include "forward_list"
#include "string"

using namespace std;

int main() {
    forward_list spaceObjects = {"Сонце", "Місяць", "Марс", "Юпітер", "Сатурн"};
    string searchElement = "Марс";
    bool found = false;

    for (auto it = spaceObjects.begin(); it != spaceObjects.end(); ++it) {
        if (*it == searchElement) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Елемент знайдено" << endl;
    } else {
        cout << "Елемент не знайдено" << endl;
    }
    return 0;
}