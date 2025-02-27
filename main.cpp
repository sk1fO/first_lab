#include <iostream>
#include <cmath>

using namespace std;

void calculateAndDisplayRectangleProperties() {
    double length, width, perimeter, area, diagonal;

    cout << "Введите длину прямоугольника: ";
    cin >> length;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    perimeter = 2 * (length + width);
    area = length * width;
    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    cout << "Периметр прямоугольника: " << perimeter << endl;
    cout << "Площадь прямоугольника: " << area << endl;
    cout << "Длина диагонали прямоугольника: " << diagonal << endl;
}

void displayMenu() {
    cout << "Выберите действие:\n";
    cout << "1. Вычислить свойства прямоугольника\n";
    cout << "2. Выход\n";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                calculateAndDisplayRectangleProperties();
                break;

            case 2:
                cout << "Выход из программы.\n";
                break;

            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
                break;
        }

    } while (choice != 2);

    return 0;
}

