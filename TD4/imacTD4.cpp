#include <iostream>
#include <vector>
#include <cstdlib>
#include <array>

// int main()
// {
//   size_t const dwarf_count{20};

//   std::vector<int> calories{};

//   // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
//   std::srand(42);

//   for (int i = 0; i < dwarf_count; ++i)
//   {
//     calories.push_back(rand() % 24000 + 100);
//   }

//   // affichage optionnel des calories transportées par chaque nain
//   for (int const c : calories)
//   {
//     std::cout << c << ", ";
//   }
//   std::cout << std::endl;

//   // TODO: afficher la quantité de provisions la plus grande transportée par un nain

//   int max{0};

//   for (int const c : calories)
//   {
//     if (c > max)
//     {
//       max = c;
//     }
//   };

//   std::cout << "La quantité de provisions la plus grande transportée par un nain est de " << max << std::endl;

//   return 0;
// }

// **EXERCICE 2**

// int main()
// {
//   std::string user_word{""};
//   std::string user_word_reversed{""};

//   std::cout << "Entrez un mot : ";
//   std::cin >> user_word;

//   std::string word{user_word};

//   int word_length = user_word.size();

//   for (char const letter : user_word)
//   {
//     user_word_reversed = user_word.back() + user_word_reversed;
//     user_word.pop_back();
//   }

//   bool palindrome{word == user_word_reversed};

//   if (palindrome)
//   {
//     std::cout << "Le mot " << word << " est un palindrome." << std::endl;
//   }
//   else
//   {
//     std::cout << "Le mot " << word << " n'est pas un palindrome." << std::endl;
//   }

//   return 0;
// }

// **EXERCICE 3**

// int main()
// {
//   std::vector<int> tableau{};
//   int long long number{0};

//   std::cout << "entrer un nombre bad long : ";
//   std::cin >> number;

//   for (int i = 0; i < number; i++)
//   {
//     tableau.push_back(number % 10);
//     number = number / 10;
//   };

//   std::array<int, 10> occurences{};

//   for (int const i : tableau)
//   {
//     switch (i)
//     {
//     case 0:
//       occurences[0]++;
//       break;
//     case 1:
//       occurences[1]++;
//       break;
//     case 2:
//       occurences[2]++;
//       break;
//     case 3:
//       occurences[3]++;
//       break;
//     case 4:
//       occurences[4]++;
//       break;
//     case 5:
//       occurences[5]++;
//       break;
//     case 6:
//       occurences[6]++;
//       break;
//     case 7:
//       occurences[7]++;
//       break;
//     case 8:
//       occurences[8]++;
//       break;
//     case 9:
//       occurences[9]++;
//       break;
//     default:
//       break;
//     }
//   }

//   int occurence_max{0};

//   for (size_t i = 0; i < occurences.size(); ++i)
//   {
//     if (occurences[i] > occurence_max)
//     {
//       occurence_max = occurences[i];
//     }
//   }

//   std::cout << "Le chiffre le plus frequent est le " << occurence_max << std::endl;

//   return 0;
// }

// **EXERCICE 4**

// int main()
// {
//   int level{0};
//   int enemies{0};
//   std::cout << "Entrez le niveau de difficulté : ";
//   std::cin >> level;
//   std::cout << "Entrez le nombre d'ennemis : ";
//   std::cin >> enemies;
//   std::vector<int> AllEnemyLevel{};

//   for (int i = 0; i < enemies; i++)
//   {
//     int EnemyLevel{0};
//     std::cout << "Entrez le niveau de l'ennemi n°" << i + 1 << " : ";
//     std::cin >> EnemyLevel;
//     AllEnemyLevel.push_back(EnemyLevel);
//   }

//   std::vector<int> ScoreTable{};

//   for (int const OneEnemyLevel : AllEnemyLevel)
//   {
//     for (int j = 0; j < level; j += OneEnemyLevel)
//     {
//       ScoreTable.push_back(j);
//       std::cout << "Le score de l'ennemi est " << j << std::endl;
//     };
//   }

//   std::vector<int> FinalScoreTable{};

//   for (int const OneScore : ScoreTable)
//   {
//     bool isPresent{false};
//     for (int const OneFinalScore : FinalScoreTable)
//     {
//       if (OneScore == OneFinalScore)
//       {
//         isPresent = true;
//       }
//     }
//     if (isPresent == false)
//     {
//       FinalScoreTable.push_back(OneScore);
//     }
//   }

//   int FinalScore{0};

//   for (int const FinalOneScore : FinalScoreTable)
//   {
//     FinalScore += FinalOneScore;
//   }

//   std::cout << "Le score final est de " << FinalScore << std::endl;

//   return 0;
// }

// **EXERCICE 5**

// int main()
// {
//   std::array<int, 10> tableau{};

//   for (int i = 0; i < tableau.size(); i++)
//   {
//     int ValeurTableau{0};
//     std::cout << "Un ptit nombre " << i + 1 << " fois : ";
//     std::cin >> ValeurTableau;
//     if (ValeurTableau < 0)
//     {
//       std::cout << "Un nombre positif svp" << std::endl;
//       std::cout << "Un autre ptit nombre " << i + 1 << " fois : ";
//       std::cin >> ValeurTableau;
//     }
//     else if (ValeurTableau > 5)
//     {
//       std::cout << "Au dessus de 5 je prends pas" << std::endl;
//       std::cout << "Un autre ptit nombre " << i + 1 << " fois : ";
//       std::cin >> ValeurTableau;
//     }
//     tableau[i] = ValeurTableau;
//   }

// int index = 0;

// for (int i = 0; i < tableau.size(); ++i) {
//   if (tableau[i] != 3) {
//     tableau[index++] = tableau[i];
//   }
// }

// while (index < tableau.size()) {
//   tableau[index++] = 3;
// }

//   for (int i = 0; i < tableau.size(); i++ )
//   {
//     if (tableau[i] == 3)
//     {
//       tableau[i] = 0;
//     }
//   }

//   for (int const OneValeur : tableau)
//   {
//     std::cout << OneValeur << ", ";
//   }

//   return 0;
// }

// **EXERCICE 6**

int main()
{

std::array<int, 16> CardTable{};


  for (int i = 0; i < CardTable.size(); i++)
  {
    int CardNumber{0};
    std::cout << "Entrez les 16 chiffres de la carte : " << 16 - i << " restants : ";
    std::cin >> CardNumber;
    CardTable[i] = CardNumber;
  }


  for (int i = CardTable.size() - 1; i > 0; i-=2) {
      CardTable[i] = CardTable[i] * 2;
      if (CardTable[i] > 9) {
        int temp = CardTable[i] % 10 + CardTable[i] / 10;
        CardTable[i] = temp;
      }
  }

  int somme{0};

  for (int const OneCard : CardTable)
  {
    somme += OneCard;
  }

  if (somme % 10 == 0)
  {
    std::cout << "La carte est valide" << std::endl;
  }
  else
  {
    std::cout << "La carte n'est pas valide" << std::endl;
  }

  return 0;
}