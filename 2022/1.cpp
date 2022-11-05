#include <iostream>
#include <locale.h>
#include <cstdlib>

int main() {
    
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    std::cout << "Русский язык в консоли!" << std::endl;
    getchar();
    return 0;
}