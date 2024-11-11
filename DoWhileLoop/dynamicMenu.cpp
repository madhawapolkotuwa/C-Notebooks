#include <iostream>

int main() {
    int choice{0};
    do {
        std::cout << "\n==== Menu ====\n";
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Adding numbers...\n";
                break;
            case 2:
                std::cout << "Subtracting numbers...\n";
                break;
            case 3:
                std::cout << "Multiplying numbers...\n";
                break;
            case 4:
                std::cout << "Dividing numbers...\n";
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 5);

    std::cout << "Program ended." << std::endl;
    return 0;
}
