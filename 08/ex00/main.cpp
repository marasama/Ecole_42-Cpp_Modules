#include "easyfind.hpp"

int main()
{
    std::vector<int> vec(5);
    vec.push_back(50);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(10);
    int result = easyfind(vec, 30);
    std::cout << "Element found at index: " << result << std::endl;  // Output: 2

    std::list<int> lst = {100, 200, 300, 400};
    result = easyfind(lst, 300);
    std::cout << "Element found at index: " << result << std::endl;  // Output: 2

    result = easyfind(vec, 60);
    std::cout << "Element found at index: " << result << std::endl;  // Output: -1

    return 0;
}