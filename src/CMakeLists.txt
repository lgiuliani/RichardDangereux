# CMakeList.txt : projet CMake pour Eric Danger, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib/x64/)

# Ajoutez une source à l'exécutable de ce projet.
add_executable (RichardDangereux "Richard Dangereux.c" "Richard Dangereux.h")

target_link_libraries (RichardDangereux tilengine.lib)

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
