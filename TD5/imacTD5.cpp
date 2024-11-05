#include <iostream>
#include <string>
#include <vector>
#include <array>

// **EXERCICE 1**
// int somme(int& a, int& b) {
//     return a + b;
// }

// int main() {
//     int a {0};
//     int b {0};
//     std::cout << "Entrez un nombre : ";
//     std::cin >> a;
//     std::cout << "Entrez un autre nombre : ";
//     std::cin >> b;
//     std::cout << "La somme de " << a << " et " << b << " est " << somme(a, b) << std::endl;
//     return 0;
// }

// **EXERCICE 2**
// int fact(int &n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else if (n < 0)
//     {
//         return 0;
//     }
//     else if (n > 12)
//     {
//         return 0;
//     }
//     else if (n <= 1)
//     {
//         return 1;
//     }
//     int temp = n - 1;
//     return fact(temp) * n;
// }

// int main()
// {
//     int n{0};
//     std::cout << "Entrez un nombre : ";
//     std::cin >> n;
//     std::cout << n << "! = " << fact(n) << std::endl;
//     return 0;
// }

// int fact_noRecurssive(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else if (n < 0)
//     {
//         return 0;
//     }
//     else if (n > 12)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int i = n - 1; i > 0; i--)
//         {
//             n *= i;
//         }
//     }
//     return n;
// }

// int main()
// {
//     int n{0};
//     std::cout << "Entrez un nombre : ";
//     std::cin >> n;
//     if (fact_noRecurssive(n) == 0)
//     {
//         std::cout << "veuillez essayer un autre nombre" << std::endl;
//     }
//     else
//     {
//         std::cout << n << "! = " << fact_noRecurssive(n) << std::endl;
//     }
//     return 0;
// }

// **EXERCICE 3**

// int fibonacci(int n)
// {
//     // if (n == 0)
//     // {
//     //     return 0;
//     // }
//     // else if (n == 1)
//     // {
//     //     return 1;
//     // }
//     // else
//     // {
//     //     int temp1 = n - 1;
//     //     int temp2 = n - 2;

//     //     return fibonacci(temp1) + fibonacci(temp2);
//     // }

//     std::vector<int> fibonacciTable;
//     fibonacciTable.push_back(0);
//     if (n == 0)
//     {
//         return fibonacciTable.back();
//     }
//     else if (n == 1)
//     {
//         fibonacciTable.push_back(1);
//         return fibonacciTable.back();
//     }
//     else
//     {
//         fibonacciTable.push_back(1);
//         for (int i = 2; i < n; i++)
//         {
//             fibonacciTable.push_back(fibonacciTable[i-1] + fibonacciTable[i - 2]);

//         }
//         return fibonacciTable.back();
//     }
// }

// int main()
// {
//     int n{0};
//     std::cout << "Entrez un nombre : ";
//     std::cin >> n;
//     std::cout << "Fibonacci de " << n << " = " << fibonacci(n) << std::endl;
//     return 0;
// }

// **EXERCICE 4**
// void Moyenne(int const a)
// {

//     std::vector<int> tableau{1, 2, 3, 4, 5};

//     int somme{0};

//     for (int element : tableau)
//     {
//         somme += element;
//     }

//     int moyenne{somme / static_cast<int>(tableau.size())};
//     std::cout << moyenne << std::endl;
// }

// void Moyenne(float const a)
// {
//     std::vector<float> tableau{1.0, 2.5, 3.0, 4.0, 5.0};

//     float somme{0};

//     for (float element : tableau)
//     {
//         somme += element;
//     }

//     float moyenne{somme / static_cast<float>(tableau.size())};
//     std::cout << moyenne << std::endl;
// }

// int main()
// {

//     Moyenne(5);
//     Moyenne(5.0f);

//     return 0;
// }

// **EXERCICE 5**

// bool pangrammeChecker(std::string const &pangramme)
// {
//     bool isPangramme{false};
//     std::vector<char> alphabet{
//         'a',
//         'b',
//         'c',
//         'd',
//         'e',
//         'f',
//         'g',
//         'h',
//         'i',
//         'j',
//         'k',
//         'l',
//         'm',
//         'n',
//         'o',
//         'p',
//         'q',
//         'r',
//         's',
//         't',
//         'u',
//         'v',
//         'w',
//         'x',
//         'y',
//         'z',
//     };

//     for (char letter : alphabet)
//     {
//         for (char OneLetter : pangramme)
//         {
//             if (letter == OneLetter)
//             {
//                 isPangramme = true;
//                 break;
//             }
//             else
//             {
//                 isPangramme = false;
//             }
//         }
//     }
//     return isPangramme;
// }

// int main()
// {
//     std::string pangramme{""};
//     std::cout << "Entrez un pangramme : ";
//     std::getline(std::cin >> std::ws, pangramme);
//     std::cout << pangramme << std::endl;
//     for (char letter : pangramme)
//     {
//         if (letter >= 'A' && letter <= 'Z')
//         {
//             letter = letter + 32;
//         }
//     }
//     std::cout << pangrammeChecker(pangramme) << std::endl;
// }

// **EXERCICE 6**

// std::string wordsReplace(std::string &words)
// {

//     for (int i{0}; i < words.size(); i++)
//     {
//         if (words[i] >= 'A' && words[i] <= 'Z')
//         {
//             std::string str2{words[i] += 32};
//             words.replace(i, 1, str2);
//         }
//         else if (words[i] >= 'a' && words[i] <= 'z')
//         {
//             std::string str2{words[i] -= 32};
//             words.replace(i, 1, str2);
//         }
//     }

//     return words;
// };

// int voyelles(std::string &words)
// {

//     int voyelles{0};

//     for (int i{0}; i < words.size(); i++)
//     {
//         if (words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] == 'u' || words[i] == 'y')
//         {
//             voyelles += 1;
//         }
//         else if (words[i] == 'A' || words[i] == 'E' || words[i] == 'I' || words[i] == 'O' || words[i] == 'U' || words[i] == 'Y')
//         {
//             voyelles += 1;
//         }
//         else
//         {
//             voyelles;
//         }
//     }
//     return voyelles;
// };

// int mots(std::string &words)
// {
//     int mots = 0;
//     bool inWord = false;

//     for (char letter : words)
//     {
//         if (letter != ' ' && !inWord)
//         {
//             inWord = true;
//             mots++;
//         }
//         else if (letter == ' ')
//         {
//             inWord = false;
//         }
//     }
//     return mots;
// };

// std::string backward(std::string &words)
// {
//     std::string backward{""};
//     for (int i = words.size()-1; i >= 0; i--)
//     {
//         backward.push_back(words[i]);
//     }
//     return backward;
// }

// bool entier(std::string &words) {
//     bool entier{false};
//     for (char letter : words)
//     {
//         if (letter >= '0' && letter <= '9')
//         {
//             entier = true;
//         }
//         else
//         {
//             entier = false;
//         }
//     }
//     return entier;
// }

// int main()
// {
//     std::string words{""};
//     std::cout << "Entrez des mots : ";
//     std::getline(std::cin >> std::ws, words);

//     std::cout << "avant : " << words << std::endl;

//     std::cout << "apres : " << wordsReplace(words) << std::endl;

//     std::cout << "il y a " << voyelles(words) << " voyelles" << std::endl;

//     std::cout << "il y a " << mots(words) << " mots" << std::endl;

//     std::cout << "a l'envers : " << backward(words) << std::endl;

//     std::cout << "est-ce un nombre entier ? " << entier(words) << std::endl;

//     return 0;
// }

// ** EXERCICE BONUS **

int main()
{

    std::vector<int> U = {1};
    std::vector<int> V = {2};

    for (int i = 1; i < 10; i++)
    {
        U.push_back(3 * U[i - 1] + 2 * V[i - 1]);
        V.push_back(2 * V[i - 1] + U[i - 1] + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << "U" << i << " = " << U[i] << " et " << "V" << i << " = " << V[i] << std::endl;
    }

    return 0;
}