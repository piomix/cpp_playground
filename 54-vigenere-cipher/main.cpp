#include "cipher.h"
#include <iostream>
#include <string>


int main() {
    std::string plainText;
    std::cout << "Enter the thext to encrypt:\n";
    std::getline(std::cin, plainText);
    
    std::string secretKey;
    std::cout << "\nEnter the secret key:\n";
    std::getline(std::cin, secretKey);
    
    Cipher cipher;
    
    std::string cipherText{cipher.encrypt(plainText, secretKey)};
    std::cout << "\nEncrypted:\n  " << cipherText  << std::endl;
    
    std::string decriptedText{cipher.decrypt(cipherText, secretKey)};
    std::cout << "\nDecrypted:\n  " << decriptedText  << std::endl;

}