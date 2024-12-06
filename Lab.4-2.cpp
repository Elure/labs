#include <iostream>

// #5
struct FruitCounts
{
   int apples;
   int pears;
   int oranges;
};
int main()
{
    int apples;
    int pears;
    int oranges;

    FruitCounts fruitCounts;

    std::cout << "Apples:";
    std::cin >> fruitCounts.apples;

    std::cout << "Pears:";
    std::cin >> fruitCounts.pears;

    std::cout << "Oranges:";
    std::cin >> fruitCounts.oranges;

    // #1
    if(apples > 5 && pears < 8 && oranges * 2 == apples)
    {
	std::cout << "Hello" << std::endl;
    }

    // #2
    bool result = apples > 5 && pears < 8 && oranges * 2 == apples;
    if(result)
    {
	std::cout << "Hello" << std::endl;
    }

    // #3
    bool checkApples = apples > 5;
    bool checkPears = pears < 8;
    bool checkOranges = oranges * 2 == apples;
    bool checkResult = checkApples && checkPears && checkOranges;
    if(checkResult)
    {
	std::cout << "Hello" << std::endl;
    }

    // #4
    bool checkConditions(int apples, int pears, int oranges) {
    bool checkApples = apples > 5;
    bool checkPears = pears < 8;
    bool checkOranges = oranges * 2 == apples;

    return checkApples && checkPears && checkOranges;
    }

    bool checkConditions(int apples, int pears, int oranges) {
    bool checkApples = fruitCounts.apples > 5;
    bool checkPears = fruitCounts.pears < 8;
    bool checkOranges = fruitCounts.oranges * 2 == apples;

    return checkApples && checkPears && checkOranges;
    }

   return 0;
}