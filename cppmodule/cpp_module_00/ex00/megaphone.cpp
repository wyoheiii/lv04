#include <iostream>
#include <string>
#include <locale>
int main(int    ac, char **av)
{
    if (ac > 1)
    {
        for(int i = 1; i < ac; i++)
        {
            std::string argv(av[i]);
            for(size_t j = 0; j < argv.size(); j++)
                std::cout << (char)std::toupper(argv[j]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
