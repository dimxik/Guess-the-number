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

    cout << "Добро пожаловать в игру Сундучок!\n";
    cout << "Я загадал число от 1 до 100. Попробуйте угадать!\n";

    do {
        cout << "Введите вашу догадку: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Меньше!\n";
        }
        else if (guess < secretNumber) {
            cout << "Больше!\n";
        }
        else {
            cout << "Верно! Вы угадали число за " << tries << " попыток.\n";
        }
    } while (guess != secretNumber);

    return 0;
}