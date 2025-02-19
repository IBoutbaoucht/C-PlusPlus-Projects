#include <iostream>
#include <string>

std::string encode_rle(const std::string& text) {
    if (text.empty()) return "";
    
    std::string encoded;
    char current = text[0];
    int count = 1;
    int len = text.size() ;
    
    for (int i = 1; i < len; ++i) {
        if (text[i] == current) {
            count++;
        } else {
            encoded += current;
            if (count > 1) encoded += std::to_string(count);
            current = text[i];
            count = 1;
        }
    }
    
    encoded += current;
    if (count > 1) encoded += std::to_string(count);
    
    return encoded;
}

int main() {
    std::string input;
    std::cout << "Texte : ";
    std::cin >> input;
    
    std::string encoded = encode_rle(input);
    std::cout << "Encode : " << encoded << std::endl;
    
    return 0;
}
