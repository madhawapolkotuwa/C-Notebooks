#include <iostream>

// User Input Validation with do-while

int main() {

    int userNumber{0};

    do{
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> userNumber;

        if(userNumber < 1 || userNumber > 10) {
            std::cout << "Invalid input. Please try again." << std::endl;
        }

    }while(userNumber < 1 || userNumber > 10);

    std::cout << "Your number: " << userNumber << std::endl;

    return 0;
}