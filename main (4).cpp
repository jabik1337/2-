#include "iostream"
#include "forward_list"
#include "string"

using namespace std;

int main() {
    string initialData[] = {"Сонце", "Місяць", "Марс", "Юпітер", "Сатурн"};

    forward_list spaceObjects(begin(initialData), end(initialData));

    string searchElement = "Марс";
    string newElement = "Венера";
    bool found = false;

    for (auto it = spaceObjects.begin(); it != spaceObjects.end(); ++it) {
        if (*it == searchElement) {
            spaceObjects.insert_after(it, newElement);
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Заданий елемент відсутній у списку." << endl;
    } else {
        cout << "Елемент знайдено та вставлено новий елемент." << endl;
        cout << "Оновлений список:" << endl;
        for (auto it = spaceObjects.begin(); it != spaceObjects.end(); ++it) {
            cout << *it << endl;
        }
    }

    return 0;
}