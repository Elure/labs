struct Leg 
{
    int length;
};

struct Arm
{
    int power;
};

struct Person
{
    std::array<Leg, 2> legs; // Массив с типом Leg содержащий 2 экземпляра
    Arm arms[2];
};

int main()
{
    Person person; // Это объект типа Person. Он содержит в себе массив из двух экземпляров типа Leg и двух экземпляров типа Arm
}

// Представленные Типы: int, Leg, Arm, Person, std::array<Leg, 2>, Arm[2]
// Представленный Объект: person (из int main())