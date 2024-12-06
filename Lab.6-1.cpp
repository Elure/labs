#include <iostream>

// int hello(int); - если скомпилировать так, то выдаёт ошибку из-за того что функция не реализована


// Исправленный код c реализацией функции
int hello(int number)
{
   return number * 2;
}

int main()
{
   int result = hello(5);
   std::cout << result << std::endl;


   return 0;
}