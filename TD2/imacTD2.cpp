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

// **EXERCICE BONUS**

// enum class Article
// {
//     Alimentation,
//     Vetements,
//     Chaussures,
//     Autre
// };

// std::istream &operator>>(std::istream &is, Article &article)
// {
//     std::string articleAsString;
//     is >> articleAsString;

//     if (articleAsString == "Alimentation")
//     {
//         article = Article::Alimentation;
//     }
//     else if (articleAsString == "Vetements")
//     {
//         article = Article::Vetements;
//     }
//     else if (articleAsString == "Chaussures")
//     {
//         article = Article::Chaussures;
//     }
//     else if (articleAsString == "Autre")
//     {
//         article = Article::Autre;
//     }
//     else
//     {
//         is.setstate(std::ios::failbit);
//     }

//     return is;
// }

// int main()
// {

//     float prix{0};
//     bool carte {0};
//     int age{0};

//     std::cout << "Saisissez un type d'article : \"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\" " << std::endl;

//     Article article;
//     std::cin >> article;

//     // On vérifie si la saisie a échoué.
//     if (std::cin.fail())
//     {
//         std::cout << "Erreur de saisie, il faut saisir un type d'article valide (\"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\")" << std::endl;

//         std::cin.clear();           // On remet std::cin dans un état fonctionnel.
//         std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

//         // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
//         return 1;
//     }

//     if (article == Article::Alimentation)
//     {
//         std::cout << "Vous avez saisi un article de type Alimentation" << std::endl;
//     }
//     else if (article == Article::Vetements)
//     {
//         std::cout << "Vous avez saisi un article de type Vetements" << std::endl;
//     }
//     else if (article == Article::Chaussures)
//     {
//         std::cout << "Vous avez saisi un article de type Chaussures" << std::endl;
//     }
//     else if (article == Article::Autre)
//     {
//         std::cout << "Vous avez saisi un article de type Autre" << std::endl;
//     }

//     std::cout << "Saisissez le prix de l'article : ";
//     std::cin >> prix;

    
//     if (prix < 0) {
//         std::cout << "Erreur de saisie, il faut saisir un prix valide" << std::endl;
//         return 1;
//     }
//     else if (std::cin.fail())
//     {
//         std::cout << "Erreur de saisie, il faut saisir un prix valide" << std::endl;

//         std::cin.clear();           // On remet std::cin dans un état fonctionnel.
//         std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

//         // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
//         return 1;
//     }

//     std::cout << "Avez-vous une carte de fidélité ? : 1 pour \"oui\" et 0 pour \"non\" ";
//     std::cin >> carte;

//     if (std::cin.fail())
//     {
//         std::cout << "Erreur de saisie, il faut saisir \"oui\" ou \"non\"" << std::endl;

//         std::cin.clear();           // On remet std::cin dans un état fonctionnel.
//         std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

//         // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
//         return 1;
//     }

//     std::cout << "Saisissez votre age : ";
//     std::cin >> age;

//     if (std::cin.fail())
//     {
//         std::cout << "Erreur de saisie, il faut saisir un age valide" << std::endl;

//         std::cin.clear();           // On remet std::cin dans un état fonctionnel.
//         std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

//         // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
//         return 1;
//     } else if (age < 0) {
//         std::cout << "Erreur de saisie, il faut saisir un age valide" << std::endl;
//         return 1;
//     }

//     if (article == Article::Alimentation)
//     {
//         prix *= 0.95;
//         if (carte)
//         {
//             prix *= 0.92;
//         }
//     }
//     else if (article == Article::Vetements)
//     {
//         prix *= 0.9;
//         if (carte)
//         {
//             prix *= 0.85;
//         }
//     }
//     else if (article == Article::Chaussures)
//     {
//         prix *= 0.88;
//         if (carte)
//         {
//             prix *= 0.82;
//         }
//     }
//     else if (article == Article::Autre)
//     {
//         prix = prix;
//     }

//     if (age <= 26)
//     {
//         prix *= 0.9;
//     }

//     float bon {0.0f};
//     bon = prix * 0.1;
//     bon > 30 ? bon = 30 : bon = bon;

//     std::cout << "Le prix final est de : " << prix << " EUR" << std::endl;
//     std::cout << "Vous avez un bon d'achat de : " << bon << " EUR" << std::endl;

//     return 0;
// }