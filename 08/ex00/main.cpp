#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(50);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(10);
    int result = easyfind(vec, 40);
    std::cout << "Element found at index: " << result << std::endl;  // Output: 2

    std::vector<int> lst;
    lst.push_back(500);
    lst.push_back(200);
    lst.push_back(300);
    lst.push_back(200);
    lst.push_back(100);
    result = easyfind(lst, 300);
    std::cout << "Element found at index: " << result << std::endl;  // Output: 2

    result = easyfind(vec, 60);
    std::cout << "Element found at index: " << result << std::endl;  // Output: -1

    return 0;
}