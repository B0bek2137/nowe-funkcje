#include <iostream>

using namespace std;

bool przestepny_rok (unsigned int rok)
{
    if (rok % 400 == 0)
        return true;
    else if (rok % 100 == 0)
        return false;
    else if (rok % 4 == 0)
        return true;
    else
        return false;
}

int main()
{
    std::cout << przestepny_rok (2026) << std::endl;
    std::cout << przestepny_rok (2027) << std::endl;
    std::cout << przestepny_rok (2028) << std::endl;
    std::cout << przestepny_rok (2029) << std::endl;
    std::cout << przestepny_rok (2030) << std::endl;
    std::cout << przestepny_rok (2000) << std::endl;
    std::cout << przestepny_rok (1900) << std::endl;
    std::cout << "Nacisnij Enter, aby wyjsc...";
std::cin.ignore(); // lub std::cin.get();
std::cin.get();

    return 0;
}
