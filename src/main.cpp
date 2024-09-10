#include <iostream>
#include "TestManager.h"

int main() {
    TestManager testManager;

    std::string command;
    std::cout << "Welcome to the DNA Extraction Machine Tester" << std::endl;

    while (true) {
        std::cout << "Enter command (run <test_name>, run suite <suite_name>, run all, exit): ";
        std::getline(std::cin, command);

        if (command == "exit") {
            break;
        }

        testManager.processCommand(command);
    }

    return 0;
}