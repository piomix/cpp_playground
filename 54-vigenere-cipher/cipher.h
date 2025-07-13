#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <string_view>
#include <cctype>   // Manipulate chars
#include <stdexcept>
#include <gsl/gsl> // Guidelines Support Library


class Cipher {
public:
    Cipher() {
        // array to store 26 chars (A row in the Vigenere square.)
        std::array<char, m_size> alphabet{};
        
        // Populate alphabet
        for (size_t i{0}; i < m_size; ++i){
            alphabet.at(i) = gsl::narrow_cast<char>('A' + i);
        }
        
        // Populate first row in the square
        m_square.at(0) = alphabet;
        
        // Populate the rest of rows while rotating the alphabet
        for(size_t row{1}; row < m_size; ++row ){
            std::ranges::rotate(alphabet, std::begin(alphabet) + 1);
            m_square.at(row) = alphabet;
        }
    }
    
    std::string encrypt(
        std::string_view plaintext, std::string_view secret) {
            checkKey(secret); // ensure only letters A-Z or a-z
            
            std::string cyphertext{};
            size_t keyIndex{0};
            
            for(size_t i{0}; i < plaintext.size(); ++i){
                // Lower case check
                const bool lower{std::islower(plaintext.at(i)) ? true : false};
                
                // Convert the current char to uppercase
                const char currentChar{gsl::narrow_cast<const char>(
                    std::toupper(plaintext.at(i)))};
                    
                // Validate char A-Z
                if('A' <= currentChar && currentChar <= 'Z'){
                    
                   const int row{std::toupper(secret.at(keyIndex)) - 'A'};
                   
                   // Calculate the next keyIndex within range
                   keyIndex = (keyIndex + 1) % secret.size();
                    
                   // Obtain equivalent column in Vigenere square
                   const int column{currentChar - 'A'};
                   
                   // Substitute or encrypt the current char
                   const char substituteChar{m_square.at(row).at(column)};
                   
                   // Add to the cipherText
                   cyphertext += 
                    (lower ? std::tolower(substituteChar) : substituteChar);
                    
                }
                else {
                    cyphertext += currentChar; 
                }
            }
        return cyphertext;
    }
    
    std::string decrypt(
        std::string_view cyphertext, std::string_view secret) {
            
        checkKey(secret); // ensure only letters A-Z or a-z
           
        std::string plaintext{};
        size_t keyIndex{0};
        
        for(size_t i{0}; i < cyphertext.size(); ++i){
            const bool lower{std::islower(cyphertext.at(i)) ? true : false};
            
            const char currentChar{gsl::narrow_cast<const char>(
                    std::toupper(cyphertext.at(i)))};
                    
            // Validate char A-Z
            if('A' <= currentChar && currentChar <= 'Z'){
                
                const int row{std::toupper(secret.at(keyIndex)) - 'A'};
                
                keyIndex = (keyIndex + 1) % secret.size();
                
                //Find the cypher character column
                int column{-1};
                
                for(int i{0} ; m_square.at(row).size() ; ++i){
                    if(m_square.at(row).at(i) == currentChar){
                        column = i;
                        break;
                    }
                }
                
                const char originChar{
                    gsl::narrow_cast<const char>('A' + column)};
                
                plaintext += (lower ? std::tolower(originChar) : originChar);
            }
            else {
                plaintext += currentChar;
            }
        }
        return plaintext;
    }
private: 
    static constexpr size_t m_size{26};
    // Two dimensional array to represent the Vigenere square (26x26)
    std::array<std::array<char, m_size>, m_size> m_square;
    
    static void checkKey(std::string_view secret) {
        for(size_t i{0}; i < secret.size(); ++i) {
            if (std::toupper(secret.at(i)) < 'A' ||
                std::toupper(secret.at(i) > 'Z')){
                throw std::invalid_argument(
                    "Key must contain only letters A-Z or a-z"); 
            }
        }
    }
};
