#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
  size_t const dwarf_count{20};

  std::vector<int> calories{};

  // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
  std::srand(42);

  for (int i = 0; i < dwarf_count; ++i)
  {
    calories.push_back(rand() % 24000 + 100);
  }

  // affichage optionnel des calories transportées par chaque nain
  for (int const c : calories)
  {
    std::cout << c << ", ";
  }
  std::cout << std::endl;

  // TODO: afficher la quantité de provisions la plus grande transportée par un nain

  int max{0};

  for (int const c : calories)
  {
    if (c > max)
    {
      max = c;
    }
  };

  std::cout << "La quantité de provisions la plus grande transportée par un nain est de " << max << std::endl;
  
  return 0;
}