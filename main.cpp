#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int number;

   
    std::cout << "������ ������������ �����: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "�������: ������� ����� �� � �������������." << std::endl;
    }
    else {
        
        int digit1 = number / 1000;
        int digit2 = (number / 100) % 10;
        int digit3 = (number / 10) % 10;
        int digit4 = number % 10;

        
        int newNumber = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;

        std::cout << "����� ���� ���� ����: " << newNumber << std::endl;
    }

    return 0;
}
