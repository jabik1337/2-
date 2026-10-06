#Практична робота №2: 
**Виконав:** студент групи 4-сом Нефедова Ксенія (Варіант № 10)

##  Завдання 1-5
<img width="1318" height="100" alt="image" src="https://github.com/user-attachments/assets/594c46b5-582a-4a17-bd44-6b34e4e6a5dd" />
### 💻 Код програми 1:
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

### 👁️ Візуалізація пам'яті:

<img width="1042" height="768" alt="Знімок екрана 2026-10-06 о 12 42 16" src="https://github.com/user-attachments/assets/6bd5dfed-359d-4237-a203-cbdeb18ed581" />
<img width="1512" height="623" alt="Знімок екрана 2026-10-06 о 12 43 47" src="https://github.com/user-attachments/assets/30c7b200-87b4-476d-affc-c96ac0a1b75d" />

### 💻 Код програми 2:

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
### 👁️ Візуалізація пам'яті:
<img width="1028" height="562" alt="Знімок екрана 2026-10-06 о 12 45 10" src="https://github.com/user-attachments/assets/8a1ee010-e07e-4dd8-a5fa-92e746232841" />
<img width="1302" height="646" alt="Знімок екрана 2026-10-06 о 12 56 07" src="https://github.com/user-attachments/assets/ec929ff0-f6d2-4b33-a677-afc84e72f88a" />
<img width="953" height="564" alt="Знімок екрана 2026-10-06 о 12 45 55" src="https://github.com/user-attachments/assets/8edd5ddf-88c1-4349-8da6-9cf85f6e99c8" />

### 💻 Код програми 3:
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
### 👁️ Візуалізація пам'яті:
<img width="931" height="562" alt="Знімок екрана 2026-10-06 о 12 47 21" src="https://github.com/user-attachments/assets/bb5eb135-2116-41c8-8803-690de34fb5f1" />
<img width="573" height="352" alt="Знімок екрана 2026-10-06 о 12 57 13" src="https://github.com/user-attachments/assets/8ba69790-217d-480f-abaa-03eb36409d0e" />
<img width="962" height="570" alt="Знімок екрана 2026-10-06 о 12 47 39" src="https://github.com/user-attachments/assets/b162b489-6513-490d-bfb7-1417aa0610e3" />

### 💻 Код програми 4:
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
### 👁️ Візуалізація пам'яті:
<img width="1250" height="571" alt="Знімок екрана 2026-10-06 о 12 48 48" src="https://github.com/user-attachments/assets/eb578c54-0e01-40bd-91bd-7e095d429324" />
<img width="1456" height="570" alt="Знімок екрана 2026-10-06 о 12 49 20" src="https://github.com/user-attachments/assets/7e867c8a-acb4-4c80-8c3e-17d50b567b47" />
<img width="975" height="456" alt="Знімок екрана 2026-10-06 о 12 57 44" src="https://github.com/user-attachments/assets/fe49b53b-b903-4090-8f24-d492698cb12d" />

### 💻 Код програми 5:
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
### 👁️ Візуалізація пам'яті:
<img width="712" height="185" alt="Знімок екрана 2026-10-06 о 12 58 23" src="https://github.com/user-attachments/assets/691e2f54-71e2-4a8e-ad4f-40773b0fb765" />

