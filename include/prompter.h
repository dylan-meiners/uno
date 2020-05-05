#ifndef PROMPTER_H
#define PROMPTER_H

int prompt(std::string * choices, std::string * inputOptions, int numOfChoices) {

    int choice = -1;
    std::cout << YELLOW << "Choose an action:" << std::endl;
    for (int i = 0; i < numOfChoices; i++) {

        std::cout << GREEN << i + 1 << ": " << RESET << choices[i] << std::endl;
    }
    std::cout << std::endl;
    std::string answer = "";

    bool valid = false;
    while (!valid) {

        std::cout << ">> " << GREEN;
        std::getline(std::cin, answer);
        std::cout << RESET;

        //See if the answer is a valid choice ("1", "2", "3", "4", etc...)
        for (int i = 0; i < numOfChoices; i++) {

            if (answer == inputOptions[i]) {

                valid = true;
                choice = i;
            }
        }
        if (!valid) {
            
            std::cout << RED << "Invalid choice: " << RESET << "\"" << answer << "\"" << RESET << std::endl;
        }
    }
    return choice;
}

bool PromptTF() {

    std::string choices[] = {"Yes", "No"};
    std::string inputOptions[] = {"1", "2"};
    int result = prompt(choices, inputOptions, 2);
    if (result == 0) return true;
    else return false;
}

void PromptOK() {

    std::string choices[] = {"OK"};
    std::string inputOptions[] = {"1"};
    prompt(choices, inputOptions, 1);
}

#endif