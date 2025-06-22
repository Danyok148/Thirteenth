#include <iostream>
#include <cstring>
using namespace std;

void removeCharAtIndex(char* str, int index) {
    int len = strlen(str);
    if (index < 0 || index >= len) return;
    for (int i = index; i < len; i++) {
        str[i] = str[i + 1];
    }
}

void removeAllChar(char* str, char ch) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

void insertCharAt(char* str, char ch, int pos) {
    int len = strlen(str);
    if (pos < 0 || pos > len || len >= 99) return;
    for (int i = len; i >= pos; i--) {
        str[i + 1] = str[i];
    }
    str[pos] = ch;
}

//  1
void task1() {
    char str[100] = "hello";
    int index;
    cout << "Enter index to remove ( 1): ";
    cin >> index;
    removeCharAtIndex(str, index);
    cout << "Result: " << str << endl;
}


//   2
void task2() {
    char str[100] = "hello world";
    char ch;
    cout << "Enter char to remove ( 2): ";
    cin >> ch;
    removeAllChar(str, ch);
    cout << "Result: " << str << endl;
}

//   3
void task3() {
    char str[100] = "hello";  
    char ch;  
    int pos; 
    cout << "Enter char to insert ( 3): ";  
    cin >> ch;
    cout << "Enter position: "; 
    cin >> pos;
    insertCharAt(str, ch, pos);   
    cout << "Result: " << str << endl;
}
 
//  4
void task4() {
    char str[100];
    cout << "Enter string ( 4): ";
    cin.ignore();
    cin.getline(str, 100);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
    cout << "Result: " << str << endl;
}

//5
void task5() {
    char str[100];
    char ch;
    cout << "Enter string ( 5): ";
    cin.getline(str, 100);
    cout << "Enter char to search: ";
    cin >> ch;
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ch) count++;
    }
    cout << "Count: " << count << endl;
}

// 6
void task6() {
    char str[100];
    cout << "Enter string ( 6): ";
    cin.ignore();
    cin.getline(str, 100);
    int letters = 0, digits = 0, others = 0;
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {
            letters++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            others++;
        }
    }
    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Others: " << others << endl;
}

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    return 0;
}
