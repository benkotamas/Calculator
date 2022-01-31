#include <iostream>
#include <math.h>

void PrintAddition(int number_1, int number_2);
void PrintSubtraction(int number_1, int number_2);
void PrintMultiplication(int number_1, int number_2);
void PrintDivision(int number_1, int number_2);
void PrintExponentiation(int number_1, int number_2);
int AddTwoNumbers(int number_1, int number_2);
int SubtractTwoNumbers(int number_1, int number_2);
int MultiplyTwoNumbers(int number_1, int number_2);
double DivideTwoNumbers(int number_1, int number_2);
double ExponentiateTwoNumbers(int number_1, int number_2);
void ListOperands();
void CalculateResult(char option, int number_1, int number_2);

int main() {

    char option;

    do {
        ListOperands();

        std::cin >> option;

        if (option == 'x' || option == 'X') {
            std::cout << "Viszl�t!" << std::endl;
            continue;
        }
        else if (option != 'a' && option != 'b' && option != 'c' && option != 'd' && option != 'e') {
            std::cerr << "Rossz karaktert adt�l meg, ez�rt a program le�ll." << std::endl;
            return 1;
        }

        int number_1;
        int number_2;

        std::cout << "Add meg az els� sz�mot: ";
        std::cin >> number_1;

        std::cout << "Add meg a m�sodik sz�mot: ";
        std::cin >> number_2;

        CalculateResult(option, number_1, number_2);
    } while (option != 'x' && option != 'X');

}

// �sszead�s kinyomtat�sa
void PrintAddition(int number_1, int number_2) {
    std::cout << number_1 << " + " << number_2 << " = " << AddTwoNumbers(number_1, number_2) << std::endl;
}

// kivon�s kinyomtat�sa
void PrintSubtraction(int number_1, int number_2) {
    std::cout << number_1 << " - " << number_2 << " = " << SubtractTwoNumbers(number_1, number_2) << std::endl;
}

// szorz�s kinyomtat�sa
void PrintMultiplication(int number_1, int number_2) {
    std::cout << number_1 << " * " << number_2 << " = " << MultiplyTwoNumbers(number_1, number_2) << std::endl;
}

// oszt�s kinyomtat�sa
void PrintDivision(int number_1, int number_2) {
    std::cout << number_1 << " / " << number_2 << " = " << DivideTwoNumbers(number_1, number_2) << std::endl;
}

// hatv�nyoz�s kinyomtat�sa
void PrintExponentiation(int number_1, int number_2) {
    std::cout << number_1 << " ^ " << number_2 << " = " << ExponentiateTwoNumbers(number_1, number_2) << std::endl;
}

// �sszead�s
int AddTwoNumbers(int number_1, int number_2) {
    return number_1 + number_2;
}

// kivon�s
int SubtractTwoNumbers(int number_1, int number_2) {
    return number_1 - number_2;
}

// szorz�s
int MultiplyTwoNumbers(int number_1, int number_2) {
    return number_1 * number_2;
}

// oszt�s
double DivideTwoNumbers(int number_1, int number_2) {
    return number_1 / (double)number_2;
}

// hatv�nyoz�s
double ExponentiateTwoNumbers(int number_1, int number_2) {
    return pow(number_1, number_2);
}

// haszn�lhat� utas�t�sok kinyomtat�sa
void ListOperands() {
    std::cout << "V�laszthat� m�veletek:" << std::endl;
    std::cout << "\t a) - �sszead�s" << std::endl;
    std::cout << "\t b) - Kivon�s" << std::endl;
    std::cout << "\t c) - Szorz�s" << std::endl;
    std::cout << "\t d) - Oszt�s" << std::endl;
    std::cout << "\t e) - Hatv�nyoz�s" << std::endl;
    std::cout << "\t x) - Kil�p�s" << std::endl;
    std::cout << "M�velet kiv�laszt�s�hoz �sd be a megfelel� bet�t! ";
}

// a sz�m�t�sok
void CalculateResult(char option, int number_1, int number_2) {
    if (option == 'a') {
        PrintAddition(number_1, number_2);
    }
    else if (option == 'b') {
        PrintSubtraction(number_1, number_2);
    }
    else if (option == 'c') {
        PrintMultiplication(number_1, number_2);
    }
    else if (option == 'd') {
        PrintDivision(number_1, number_2);
    }
    else if (option == 'e') {
        PrintExponentiation(number_1, number_2);
    }
}