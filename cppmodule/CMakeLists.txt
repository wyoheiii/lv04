cmake_minimum_required(VERSION 3.21)
project(cppmodule)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cpp_module_00)
include_directories(cpp_module_00/ex00)
include_directories(cpp_module_00/ex01)
include_directories(cpp_module_00/ex02)
include_directories(cpp_module_01)
include_directories(cpp_module_01/ex00)
include_directories(cpp_module_01/ex01)
include_directories(cpp_module_01/ex02)
include_directories(cpp_module_01/ex03)

add_executable(cppmodule
        cpp_module_00/ex00/megaphone.cpp
        cpp_module_00/ex01/Contact.cpp
        cpp_module_00/ex01/Contact.hpp
        cpp_module_00/ex01/main.cpp
        cpp_module_00/ex01/Phone_book.cpp
        cpp_module_00/ex01/Phone_book.hpp
        cpp_module_00/ex02/Account.cpp
        cpp_module_00/ex02/Account.hpp
        cpp_module_00/ex02/main.cpp
        cpp_module_00/ex02/tests.cpp
        cpp_module_01/ex00/main.cpp
        cpp_module_01/ex00/newZombie.cpp
        cpp_module_01/ex00/randomChump.cpp
        cpp_module_01/ex00/Zombie.cpp
        cpp_module_01/ex00/Zombie.hpp
        cpp_module_01/ex01/main.cpp
        cpp_module_01/ex01/Zombie.cpp
        cpp_module_01/ex01/Zombie.hpp
        cpp_module_01/ex01/ZombieHorde.cpp
        cpp_module_01/ex02/main.cpp
        cpp_module_01/ex03/HumanA.cpp
        cpp_module_01/ex03/HumanA.hpp
        cpp_module_01/ex03/HumanB.cpp
        cpp_module_01/ex03/HumanB.hpp
        cpp_module_01/ex03/main.cpp
        cpp_module_01/ex03/Weapon.cpp
        cpp_module_01/ex03/Weapon.hpp)
