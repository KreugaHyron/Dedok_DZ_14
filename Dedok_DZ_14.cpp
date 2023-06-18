#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    int number;
    int digitCount = 0;
    int digitSum = 0;
    int zeroCount = 0;

    cout << "Введите число: ";
    cin >> number;

    int absNumber = number < 0 ? -number : number;
    while (absNumber != 0) {
        int digit = absNumber % 10;
        digitCount++;
        digitSum += digit;
        if (digit == 0) {
            zeroCount++;
        }
        absNumber /= 10;
    }
    cout << "Количество цифр: " << digitCount << "\n";
    cout << "Сумма цифр: " << digitSum << "\n";
    cout << "Среднее арифметическое: " << static_cast<double>(digitSum) / digitCount << "\n";
    cout << "Количество нулей: " << zeroCount << "\n";
    cout << "\n";
    //Task_2 
    int boardSize;
    int cellSize;

    cout << "Введите размер доски: ";
    cin >> boardSize;

    cout << "Введите размер клетки: ";
    cin >> cellSize;

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            for (int k = 0; k < cellSize; k++) {
                for (int l = 0; l < cellSize; l++) {
                    if ((i + j) % 2 == 0) {
                        cout << "*";
                    }
                    else {
                        cout << "-";
                    }
                }
            }
        }
        cout << "\n";
        cout << "\n";
    }
    //Task_3
    int numPeople;
    double totalBill = 0.0;
    cout << "Введите количество человек: ";
    cin >> numPeople;
    for (int i = 1; i <= numPeople; i++) {
        cout << "Меню для клиента(ов) " << i << ":" << "\n";
        cout << "1. Чай зелёный - 10 грн." << "\n";
        cout << "2. Кофе - 15 грн." << "\n";
        cout << "3. Эклер со сгущённым молоком - 30 грн." << "\n";
        double bill = 0.0;
        int choice;
        
        do {
            cout << "Выберите пункт меню для клиента " << i << " (0 для завершения выбора): ";
            cin >> choice;
            switch (choice) {
            case 1:
                bill += 10.0;
                break;
            case 2:
                bill += 15.0;
                break;
            case 3:
                bill += 30.0;
                break;
            default:
                break;
            }
        } while (choice != 0);

        totalBill += bill;
    }
    cout << "Общая сумма заказа: " << totalBill << " грн." << "\n";
    cout << "\n";
    //Task_4
    int boardSize_1 = 10;
    for (int i = 0; i < boardSize_1; i++) {
        for (int j = 0; j < boardSize_1; j++) {
            cout << " " << j + 1;
        }
        cout << "\n";
        for (int j = 0; j < boardSize_1; j++) {
            cout << "--";
        }
        cout << "-" << "\n";
        cout << i + 1;
        for (int j = 0; j < boardSize_1; j++) {
            cout << "| ";
        }
        cout << "|" << "\n";
    }
    for (int j = 0; j < boardSize_1; j++) {
        cout << "--";
    }
    cout << "-" << "\n";
}
