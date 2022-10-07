#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cin >> input;
    int count = input.size() - 2;
    std::cout << input[0] << count << input[count + 1] << std::endl;
    return 0;
}
