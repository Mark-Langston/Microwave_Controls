// CSC252 Programming in C++
// Mark Langston   6/15/2024

#include <iostream>

class Microwave {
private:
    int time;
    int powerLevel;

public:
    Microwave() {
        reset();
    }

    // Member function increases time
    void addTime() {
        time += 30;
    }

    // Member function sets power level
    void switchPowerLevel() {
        powerLevel = (powerLevel == 1) ? 2 : 1;
    }

    // Member function resets timer
    void reset() {
        time = 0;
        powerLevel = 1;
    }

    // Member function starts microwave after change made
    void start() const {
        std::cout << "Cooking for: " << time << " seconds at level: " << powerLevel << std::endl;
    }

    // Member function to display the current status
    void displayStatus() const {
        std::cout << "Cooking for: " << time << " seconds, at level: " << powerLevel << std::endl;
    }
};

int main() {
    Microwave microwave;
    char choice;

    std::cout << "Microwave Simulator\n";
    std::cout << "-------------------\n";

    do {
        std::cout << "\nChoose an option:\n";
        std::cout << "a: Add 30 seconds\n";
        std::cout << "p: Toggle power level\n";
        std::cout << "r: Reset\n";
        std::cout << "s: Start\n";
        std::cout << "q: Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 'a':
            microwave.addTime();
            microwave.displayStatus();
            break;
        case 'p':
            microwave.switchPowerLevel();
            microwave.displayStatus();
            break;
        case 'r':
            microwave.reset();
            microwave.displayStatus();
            break;
        case 's':
            microwave.start();
            break;
        case 'q':
            std::cout << "Quitting the program...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'q');

    return 0;
}