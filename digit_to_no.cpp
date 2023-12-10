#include <iostream>
#include <string>
using namespace std;

//  convert a number to words
    string numberToWords(long long num) {
    static const char *units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    static const char *teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    static const char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    static const char *hundreds[] = {"", "", "hundred"};
    static const char *thousands[] = {"", "", "thousand"};
    static const char *ten_thousands[] = {"", "", "thousands"};
    // static const char *lacs[] = {"", "", "lac"};
    if (num < 0) {
        return "Negative " + numberToWords(-num);
    }
    if (num < 10) {
        return units[num];
    }
    if (num < 20) {
        return teens[num - 10];
    }
    if (num < 100) {
        return tens[num / 10] + (num % 10 ? " " + numberToWords(num % 10) : "");
    }
    if (num < 1000) {
        return numberToWords(num / 100) + " hundred" + (num % 100 ? " " + numberToWords(num % 100) : "");
    }
    if (num < 10000) {
        return numberToWords(num / 1000) + " thousand" + (num % 1000 ? " " + numberToWords(num % 1000) : "");
    }
    if (num < 100000) {
        return numberToWords(num / 1000) + " thousands" + (num % 1000 ? " " + numberToWords(num % 1000) : "");
    }
    //  if (num < 1000000) {
    //     return numberToWords(num / 1000) + " lac" + (num % 1000 ? " " + numberToWords(num % 1000) : "");
    // }

    return "Number out of range";
}

int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;
    string result = numberToWords(number);
    cout << "In words: " << result << endl;
    return 0;
}