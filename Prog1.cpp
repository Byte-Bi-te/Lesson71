#include <iostream>

int main() {
    // Оголошення змінних для товарів
    double priceChocolate = 2.5; // ціна шоколаду за штуку
    int quantityChocolate = 3;   // кількість шоколадних плиток

    double priceCoffee = 5.0;    // ціна кави за упаковку
    int quantityCoffee = 2;      // кількість упаковок кави

    double priceMilk = 1.2;      // ціна молока за пакет
    int quantityMilk = 4;        // кількість пакетів молока

    // Обчислення загальної суми покупки
    double totalCost = (priceChocolate * quantityChocolate) +
        (priceCoffee * quantityCoffee) +
        (priceMilk * quantityMilk);

    // Виведення загальної суми покупки
    std::cout << "Загальна сума покупки: " << totalCost << " грн" << std::endl;

    return 0;
}