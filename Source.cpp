
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <windows.h>

void sortstring(char**, int);

int main() {
    setlocale(LC_ALL, ".1251");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[512];
    std::cout << "¬вед≥ть р€док:\n";
    std::cin.get(str, 512);
    char* words[32];
    int words_count = 0;
    char* pch = strtok(str, " ");
    while (pch != NULL) 
    {
        
        std::cout << "«найдено слово (" << strlen(pch) << "): " << pch << "\n";
       
        words[words_count++] = pch;

        
        pch = strtok(NULL, " ");
    }
    sortstring(words, words_count);
    for (int i = 0; i < words_count; i++) {
        std::cout << words[i] <<" ";
    }

    
}

