#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> spaceObjects = {
        "Сонце", 
        "Місяць", 
        "Марс", 
        "Юпітер", 
        "Сатурн"
    };

    cout << "Список космічних об'єктів:" << endl;
    
    for (auto it = spaceObjects.begin(); it != spaceObjects.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
