#include <iostream>

int main() {
    // ���������� ������ ��� ������
    double priceChocolate = 2.5; // ���� �������� �� �����
    int quantityChocolate = 3;   // ������� ���������� ������

    double priceCoffee = 5.0;    // ���� ���� �� ��������
    int quantityCoffee = 2;      // ������� �������� ����

    double priceMilk = 1.2;      // ���� ������ �� �����
    int quantityMilk = 4;        // ������� ������ ������

    // ���������� �������� ���� �������
    double totalCost = (priceChocolate * quantityChocolate) +
        (priceCoffee * quantityCoffee) +
        (priceMilk * quantityMilk);

    // ��������� �������� ���� �������
    std::cout << "�������� ���� �������: " << totalCost << " ���" << std::endl;

    return 0;
}