#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generatePassword(int length, bool includeNumbers = true, bool includeSymbols = true) {
    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()-_=+[{]}|;:'\",<.>/?`~";

    string characters = letters;
    if (includeNumbers) {
        characters += numbers;
    }
    if (includeSymbols) {
        characters += symbols;
    }

    string password = "";
    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.size()];
    }

    return password;
}

string checkPasswordStrength(const string& password) {
    bool lengthCriteria = password.size() >= 8;
    bool digitCriteria = false;
    bool symbolCriteria = false;
    bool uppercaseCriteria = false;
    bool lowercaseCriteria = false;

    for (char ch : password) {
        if (isdigit(ch)) {
            digitCriteria = true;
        }
        if (ispunct(ch)) {
            symbolCriteria = true;
        }
        if (isupper(ch)) {
            uppercaseCriteria = true;
        }
        if (islower(ch)) {
            lowercaseCriteria = true;
        }
    }

    if (lengthCriteria && digitCriteria && symbolCriteria && uppercaseCriteria && lowercaseCriteria) {
        return "Strong";
    } else if (lengthCriteria && (digitCriteria || symbolCriteria)) {
        return "Medium";
    } else {
        return "Weak";
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    cout << "Password Generator" << endl;

    int length;
    cout << "Enter password length: ";
    cin >> length;

    char includeNumbersChoice, includeSymbolsChoice;
    cout << "Include numbers? (y/n): ";
    cin >> includeNumbersChoice;
    bool includeNumbers = includeNumbersChoice == 'y' || includeNumbersChoice == 'Y';

    cout << "Include symbols? (y/n): ";
    cin >> includeSymbolsChoice;
    bool includeSymbols = includeSymbolsChoice == 'y' || includeSymbolsChoice == 'Y';

    string password = generatePassword(length, includeNumbers, includeSymbols);
    string strength = checkPasswordStrength(password);

    cout << "Generated Password: " << password << endl;
    cout << "Password Strength: " << strength << endl;

    return 0;
}
