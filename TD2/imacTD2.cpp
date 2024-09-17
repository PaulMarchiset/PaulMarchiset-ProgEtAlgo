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
// int main()
// {

//     int number;
//     int somme{0};
//     float compteur{0};

//     while (true) 
//     {
//         std::cout << "Entre un nombre: ";

//         std::cin >> number;
//         if (number < 0) {
//             break;
//         };

//         somme += number;

//         compteur+=1;

//     };

//     std::cout << "La somme vaut : " << somme << std::endl;
//     std::cout << "La moyenne vaut : " << somme / compteur << std::endl;

//     return 0;
// }

// **EXERCICE 3**
// int main() {
//     int number {0};
//     std::cout << "Entrez un nombre entier : ";
//     std::cin >> number;

//     int verif {number % 2};

//     std::string pair {(verif == 0) ? "pair" : "impair" };

//     std::cout << number << " est " << pair << std::endl;

//     int pairOuImpair {number};

//     while (true) {
//         pairOuImpair = pairOuImpair - 2;
//         if (pairOuImpair < 0) {
//             break;
//         }
//         std::cout << pairOuImpair << std::endl;
//     }

//     return 0;
// }

// **EXERCICE 4**
int main() {
    int age {0};
    std::cout << "Entrez votre age : ";
    std::cin >> age;

    std::cin.fail();

    if (std::cin.fail()) {
        std::cout << "Ce serait plus simple de donner son age avec des nombres" << std::endl;
        return 1;
    }

    if (age >= 18) {
        std::cout << "Vous etes vieux" << std::endl;
    } else if (age < 0) {
        std::cout << "Ce n'est pas possible, vous n'etes pas encore ne :)" << std::endl;
    } else {
        std::cout << "Vous etes mineur" << std::endl;
    }

    return 0;
}