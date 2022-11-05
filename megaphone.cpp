#include <iostream>

int main (int argc, char **argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    for (int i = 1; i < argc; i++) {
        char *str = argv[i];
        for(int j = 0; str[j] != 0; j++) {
                if( str[j] <= 'z' && str[j] >= 'a') {
                    str[j] += 'A' - 'a';
                }
            }
            std::cout << str;
    }
    std::cout << std::endl;
    return 0;
}