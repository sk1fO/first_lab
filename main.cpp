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

void calculateAndDisplayTriangleProperties() {
    double a, b, c, perimeter, s, area;

    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    perimeter = a + b + c;
    s = perimeter / 2; // Полупериметр
    area = sqrt(s * (s - a) * (s - b) * (s - c)); // Формула Герона

    cout << "Периметр треугольника: " << perimeter << endl;
    cout << "Площадь треугольника: " << area << endl;

    // Проверка на равнобедренность
    if (a == b || b == c || a == c) {
        cout << "Треугольник является равнобедренным.\n";
    } else {
        cout << "Треугольник не является равнобедренным.\n";
    }
}

void displayMenu() {
    cout << "Выберите действие:\n";
    cout << "1. Вычислить свойства прямоугольника\n";
    cout << "2. Вычислить свойства треугольника\n";
    cout << "3. Выход\n";
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
                calculateAndDisplayTriangleProperties();
                break;

            case 3:
                cout << "Выход из программы.\n";
                break;

            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
                break;
        }

    } while (choice != 3);

    return 0;
}

