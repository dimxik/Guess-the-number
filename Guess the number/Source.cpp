#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(0, "");
    srand(static_cast<unsigned int>(time(nullptr)));

    int secretNumber = rand() % 100 + 1;  
    int guess;
    int tries = 0;

    cout << "����� ���������� � ���� ��������!\n";
    cout << "� ������� ����� �� 1 �� 100. ���������� �������!\n";

    do {
        cout << "������� ���� �������: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "������!\n";
        }
        else if (guess < secretNumber) {
            cout << "������!\n";
        }
        else {
            cout << "�����! �� ������� ����� �� " << tries << " �������.\n";
        }
    } while (guess != secretNumber);

    return 0;
}