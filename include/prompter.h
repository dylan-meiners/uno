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
    //apparently there is a newline character
    //messing up the getline below :( so get rid of it
    std::cin.get();
    while (!valid) {

        std::cout << ">> " << GREEN;
        std::getline(std::cin, answer);
        std::cout << RESET;

        //See if the answer is a valid choice ("1", "2", "3", "4", etc...)
        for (int i = 0; i <= numOfChoices; i++) {

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

#endif