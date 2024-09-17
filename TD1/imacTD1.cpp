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
//     return 0;
// }

// **EXERCICE 5**
// int main() {
//     int a {0};
//     std::cout << "Entrez un chiffre entre 1 et 26 : " << std::endl;
//     std::cin >> a;
//     char lettreA {static_cast<char>(a + 64)};
//     std::cout << "La lettre correspondant a " << a << " est " << lettreA << std::endl;
//     return 0;
// }

// **EXERCICE 6**
// #include <iostream>

// int main()
// {
//     float const pi {3.141592};
//     float a {pi*3}; // je veux le résultat de pi (environ 3.141592) fois 3
//     int b {8};

//     b += 20;  // je veux ajouter le nombre 20 à la valeur de b

//     b = b * 15; // je veux modifier la valeur de b en la multipliant par 15

//     std::cout << "a: " << a << std::endl;

//     std::cout << "b: " << b << std::endl;

//     return 0;
// }

// **EXERCICE Bonus**
int main() {
    int SacDePatates {0};
    std::cout << "Combien voulez-vous de sacs de patates ?" << std::endl;
    std::cin >> SacDePatates;
    int PoidsPatates {2};
    float PrixPatates {1.5};
    float PrixTotalPatates {SacDePatates* PoidsPatates * PrixPatates};

    int Carottes {0};
    std::cout << "Combien voulez-vous de carottes ?" << std::endl;
    std::cin >> Carottes;
    float PoidsCarottes {0.15};
    float PrixCarottes {2.5};
    float PrixTotalCarottes {Carottes * PoidsCarottes * PrixCarottes};

    int Salade {0};
    std::cout << "Combien voulez-vous de salades ?" << std::endl;
    std::cin >> Salade;
    float PrixSalade {1.2};
    float PrixTotalSalade {Salade * PrixSalade};

    float PrixTotal {PrixTotalPatates + PrixTotalCarottes + PrixTotalSalade};
    std::cout << "Le prix total est de : " << PrixTotal << "EUR" << std::endl;
    return 0;
}