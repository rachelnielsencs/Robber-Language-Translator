#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include "Model.h"

class Translator{
    public:
        // Default Constructor
        Translator();
        // Default Deconstructor
        ~Translator();
        // Translates an English word to a Rovarspraket word
        string translateEnglishWord(string word);
        // Translates an English sentence to a Rovarspraket sentence
        string translateEnglishSentence(string sentence);
    private:
        // Translated strings
        string m_translation;
        // Translates English letters to Rovarspraket letters (helper function)
        string translateLetters(char letter);
        // Instance of model class declaration
        Model m_model;
};
#endif
