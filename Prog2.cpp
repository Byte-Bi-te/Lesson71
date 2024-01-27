#include <iostream>

int main() {
    // Оголошення змінних типу int
    int first_variable;
    int second_variable;
    int third_variable;

    // Присвоєння числового значення першій змінній
    first_variable = 5; // You can replace 5 with any other numerical value

    // Присвоєння значення другій змінній (first_variable + 3)
    second_variable = first_variable + 3;

    // Присвоєння значення третій змінній (sum of first_variable and second_variable)
    third_variable = first_variable + second_variable;

    // Вивід результатів
    std::cout << "Перша змінна: " << first_variable << std::endl;
    std::cout << "Друга змінна: " << second_variable << std::endl;
    std::cout << "Третя змінна: " << third_variable << std::endl;

    return 0;
}