#include <iostream>
#include <span>
#include <cassert>

// #1. Проверка на равенство размеров массивов и реализация с бесконечным циклом и break
void productBreak(std::span<int> inputOutput, std::span<int> coefficients)
{
    // Проверка на равенство размеров массивов 
    assert(inputOutput.size() == coefficients.size());
    size_t i = 0;
    while (true)
    {
        if (i >= inputOutput.size()) 
        {
            break;
        }
        inputOutput[i] *= coefficients[i];
        i++;
    }
}
// #2. While
void productWhile(std::span<int> inputOutput, std::span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size());
    size_t i = 0;
    while (i < inputOutput.size())
    {
        inputOutput[i] *= coefficients[i];
        i++;
    }
}
// #3. For
void productFor(std::span<int> inputOutput, std::span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size());
    for (size_t i = 0; i < inputOutput.size(); i++)
    {
        inputOutput[i] *= coefficients[i];
    }
}

int main()
{
    int inputOutputArray[] = {1, 2, 3, 4, 5};
    int coefficientsArray[] = {10, 10, 10, 10, 10};

    std::span<int> inputOutput = inputOutputArray;
    std::span<int> coefficients = coefficientsArray;

    // #1. Вызов функции с бесконечным циклом и break
    productBreak(inputOutput, coefficients);

    std::cout << "Result using break: ";
    for (int val : inputOutput)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Перезапись массива 
    int inputOutputArray2[] = {1, 2, 3, 4, 5};
    inputOutput = inputOutputArray2;

    // #2. While
    productWhile(inputOutput, coefficients);

    std::cout << "Result using while: ";
    for (int val : inputOutput)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Перезапись массива 
    int inputOutputArray3[] = {1, 2, 3, 4, 5};
    inputOutput = inputOutputArray3;

    // #3. For
    productFor(inputOutput, coefficients);

    std::cout << "Result using for: ";
    for (int val : inputOutput)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}