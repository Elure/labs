#include <iostream>
#include <string_view>
#include <cassert>

int countOnes(std::string_view str) 
{
    int count = 0; // Счётчик 
    for (char c : str) // Цикл, проходящий по каждому символу
    {
        if (c == '1')
        {
            count++; // Увеличивается счётчик
        }
    }
    return count; // Возвращает счётчик
}

void runTests() 
{
    // Тест - нет символов '1'
    assert(countOnes("000000") == 0);
    
    // Тест - несколько символов '1'
    assert(countOnes("001100") == 2);
    
    // Тест - все символы '1'
    assert(countOnes("111111") == 6);
    
    std::cout << "All the tests have been passed!" << std::endl;
}

int main() 
{
    runTests();
    return 0;
}
