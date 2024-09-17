# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.20)

# La version du C++ que l'on souhaite utiliser (dans notre cas C++17)
set(CMAKE_CXX_STANDARD 17)

# Le nom du projet
project(IMAC_project)

# On indique que l'on veut créer un exécutable "imacTD1" compilé à partir du fichier imacTD1.cpp
add_executable(imacTD1 imacTD1.cpp)