#include "FileProcessor.h"
#include <iostream>

int main(int argc, char** argv){
    // Testing Model Class
    // Model consontant;
    // Model vowel;
    // string a = vowel.translateSingleVowel('a');
    // string h = consontant.translateSingleConsonant('H');
    // cout << a << endl;
    // cout << h << endl;

    // Testing Translation Class
    // Translator word;
    // Translator sentence;
    // string w = word.translateEnglishWord("Hello");
    // string s = sentence.translateEnglishSentence("Hello World!");
    // cout << w << endl;
    // cout << s << endl;

    // Testing File Prcessor Class
    string inputFile = argv[1];
    string outputFile = argv[2];
    FileProcessor processor;
    processor.processFile(inputFile, outputFile);

    return 0;
}
