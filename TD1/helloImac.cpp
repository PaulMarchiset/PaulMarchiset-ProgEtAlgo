#include <iostream>

// **EXERCICE 1**
// int main()
// {
//     int number { 1 };
//     number++;
//     number*=3;
//     number/=2;
//     int result {number};
//     std::cout << result << std::endl;
//     return 0;
// }


// **EXERCICE 2**
// int main()
// {
//     std::cout << "Entre 3 nombres : " << std::endl;
//     float a {0};
//     std::cin >> a;
//     float b {0};
//     std::cin >> b;
//     float c {0};
//     std::cin >> c;
//     float somme {a + b + c};
//     float moyenne {somme / 3};
//     std::cout << "La somme est : " << somme << std::endl;
//     std::cout << "La moyenne est : " << moyenne << std::endl;
//     return 0;
// }

// **EXERCICE 3**
// int main() {
//     int number {11};
//     std::cout << "la valeur est : " << number << std::endl;
//     float result {static_cast<float>(number)};
//     result /=2;
//     std::cout << "la valeur est : " << result << std::endl;
//     return 0;
// }

// **EXERCICE 4**
// int main() {
//     int joursUser {0};
//     std::cout << "Entrez un nombre de jours : " << std::endl;
//     std::cin >> joursUser;
//     int annees {joursUser / 365};
//     int resteAnnees {joursUser % 365};
//     int mois {resteAnnees / 30};
//     int resteMois {resteAnnees % 30};
//     int semaines {resteMois / 7};
//     int jours {resteMois % 7};
//     std::cout << "Il y a " << annees << " annees, " << mois << " mois, " << semaines << " semaines et " << jours << " jours." << std::endl;
// }

// **EXERCICE 5**
int main() {
    int a {0};
    std::cout << "Entrez un chiffre entre 1 et 26 : " << std::endl;
    std::cin >> a;
    char lettreA {static_cast<char>(a + 64)};
    std::cout << "La lettre correspondant a " << a << " est " << lettreA << std::endl;
}