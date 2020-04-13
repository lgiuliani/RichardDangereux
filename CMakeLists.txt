# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

project ("RichardDangereux")

  
# tilengine cmake project-config input for ./configure scripts
set(TILENGINE_LIBDIR "<libpath>")
set(TILENGINE_INCLUDE_DIRS "<incpath>")
set(TILENGINE_LIBRARIES "<libpath>/<library> ")
string(STRIP "${TILENGINE_LIBRARIES}" TILENGINE_LIBRARIES)


# Incluez les sous-projets.
add_subdirectory ("src")


