#include <iostream>
#include <string>

int sum_two_number(int x, int y)
{
    x = 10;
    y = 100;
    return x + y;
}

void hello_to_thai()
{
    std::cout << "Hello Thai" << std::endl;
}

struct car
{
    std::string brand;
    std::string model;
    int year;
};


int main()
{
    std::string food = "Pizza";
    std::string* ptr = &food;

    std::cout << &food << std::endl;
    std::cout << *ptr << std::endl;

    return 0;
}

