#include "iostream"
#include "forward_list"
#include "string"

using namespace std;

int main() {
 
    forward_list spaceObjects = {"сонце"};

    spaceObjects.push_front("меркурій");
    spaceObjects.push_front("венера");

    cout << "список після додавання" << endl;
    for (auto it = spaceObjects.begin(); it != spaceObjects.end(); ++it) {
        cout << *it << endl;
    }

    spaceObjects.pop_front();

    cout << "\nсписок після видалення:" << endl;
    for (auto it = spaceObjects.begin(); it != spaceObjects.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}