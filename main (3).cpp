#include "iostream"
#include "forward_list"
#include "string"

using namespace std;

int main() {
    forward_list spaceObjects = {
        string("Сонце"),
        string("Місяць"),
        string("Марс"),
        string("Юпітер"),
        string("Сатурн")
    };
    int totalLength = 0;
    for (auto it = spaceObjects.begin(); it != spaceObjects.end(); ++it) {
        totalLength += (*it).length();
    }
    cout << "Загальна кількість символів: " << totalLength << endl;

    return 0;
}