#include <iostream>
void sortstring(char** words, int count) {

    for (int i = 1; i < count; i++) {
        for (int j = 0; j < count - i; j++) {

            if (strlen(words[j]) > strlen(words[j + 1])) {

                char* k = words[j];
                words[j] = words[j + 1];
                words[j + 1] = k;


            }
        }
    }

}