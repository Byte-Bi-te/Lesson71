#include <iostream>

int main() {
    // ���������� ������ ���� int
    int first_variable;
    int second_variable;
    int third_variable;

    // ��������� ��������� �������� ������ �����
    first_variable = 5; // You can replace 5 with any other numerical value

    // ��������� �������� ����� ����� (first_variable + 3)
    second_variable = first_variable + 3;

    // ��������� �������� ����� ����� (sum of first_variable and second_variable)
    third_variable = first_variable + second_variable;

    // ���� ����������
    std::cout << "����� �����: " << first_variable << std::endl;
    std::cout << "����� �����: " << second_variable << std::endl;
    std::cout << "����� �����: " << third_variable << std::endl;

    return 0;
}