#include <iostream>
#include <string>
#include <regex>

bool contains_email(const std::string& text) {
    std::regex email_pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    std::smatch match;

    if (std::regex_search(text, match, email_pattern)) {
        std::cout << "Adresse email detectee : " << match.str() << std::endl;
        return true;
    } else {
        std::cout << "Aucune adresse email detectee." << std::endl;
        return false;
    }
}

int main() {
    std::string phrase = "Mon email est user@example.com";
    std::cout << " ' " << phrase << " ' " << std::endl;
    contains_email(phrase);

    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, phrase);
    std::cout << " ' " << phrase << " ' " << std::endl;

    contains_email(phrase);

    return 0;
}
