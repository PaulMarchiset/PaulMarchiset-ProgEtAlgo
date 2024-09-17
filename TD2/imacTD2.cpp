#include <iostream>

// **EXERCICE 1**
// int main() {
//     int a {0};
//     std::cout << "Entrez un nombre entier : ";
//     std::cin >> a;
//     std::string verif {(a >= 0) ? "positif" : "negatif" };
//     std::cout << "Le nombre " << a << " est " << verif << std::endl;
// }

// **EXERCICE 2**
int main()
{

    int number;
    int somme{0};
    float compteur{0};

    do
    {
        std::cout << "Entre un nombre: ";

        std::cin >> number;
        if (number < 0) {
            break;
        };

        somme += number;

        compteur+=1;

    } while (number > 0);

    std::cout << "La somme vaut : " << somme << std::endl;
    std::cout << "La moyenne vaut : " << somme / compteur << std::endl;

    return 0;
}
