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
// int main() {
//     int age {0};
//     std::cout << "Entrez votre age : ";
//     std::cin >> age;

//     if (std::cin.fail()) {
//         std::cout << "Ce serait plus simple de donner son age avec des nombres" << std::endl;
//         return 1;
//     }

//     if (age >= 18) {
//         std::cout << "Vous etes vieux" << std::endl;
//     } else if (age < 0) {
//         std::cout << "Ce n'est pas possible, vous n'etes pas encore ne :)" << std::endl;
//     } else {
//         std::cout << "Vous etes mineur" << std::endl;
//     }

//     return 0;
// }

// **EXERCICE 5**
// #include <cstdlib>
// int main() {
//     int random {std::rand() % 100 + 1};
//     int number {0};

//     std::cout << "Essayez de deviner le nombre entre 1 et 100" << std::endl;

//     std::cin >> number;

//     while (number != random) {
//         if (number < random) {
//             std::cout << "C'est plus" << std::endl;
//         } else {
//             std::cout << "C'est moins" << std::endl;
//         }
//         std::cin >> number;
//     }

//     std::cout << "Bravo, vous avez trouve le nombre " << random << std::endl;
//    return 0;
// }

// **EXERCICE 6**
// int main()
// {
//     int number{0};
//     char star{static_cast<char>(42)};
//     std::cout << "Entrez un nombre entier positif : ";
//     std::cin >> number;

//     for (int count {0}; count < number; count += 1)
//     {
//         for (int count2 {-1}; count2 < count; count2 += 1)
//         {
//             std::cout << star;
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// int main() {
//     int number{0};
//     char star{static_cast<char>(42)};

//     std::cout << "Entrez un nombre entier positif : ";
//     std::cin >> number;

//     for (int count {0}; count < number; count += 1)
//     {
//         for (int count2 {0}; count2 < number - count - 1; count2 += 1)
//         {
//            std::cout << " "; 
//         }
//         for (int count2 {0}; count2 < count * 2 + 1; count2 += 1)
//         {
//             std::cout << star;
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// int main() {
//     int number{0};
//     char star{static_cast<char>(42)};

//     std::cout << "Entrez un nombre entier positif : ";
//     std::cin >> number;

//     for (int count {0}; count < number; count += 1)
//     {
//         for (int count2 {0}; count2 < number; count2 += 1)
//         {
//             if (count == 0 || count == number - 1) {
//                 std::cout << star;
//             } else {
//                 if (count2 == 0 || count2 == number - 1) {
//                     std::cout << star;
//                 } else {
//                     std::cout << " ";
//                 }
//             }

//         }
        
//         std::cout << std::endl;
//     }

//     return 0;
// }


// **EXERCICE 7**

// int main() {
//     int number{0};
//     std::cout << "Entrez un nombre entier positif : ";
//     std::cin >> number;

//     do
//     {
//         std::cout << number << " ";
//         if (number % 2 == 0) {
//             number = number / 2;
//         } else {
//             number = number * 3 + 1;
//         }
//     } while (number != 1);

//     std::cout << number << std::endl;

//     return 0;
// }



