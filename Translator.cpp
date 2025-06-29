#include "Translator.h"
// Initializes m_translation string
Translator::Translator(){
    m_translation = "";
}
Translator::~Translator(){
}
/* translateEnglishWord Function: takes in a string, word, accesses each character in the string,
applies the translateLetters helper function, concatenates and returns the returned character to 
m_translation to convert the character to a string */
string Translator::translateEnglishWord(string word){
    for(int i = 0; i < word.length(); i++){
       m_translation += translateLetters(word[i]);
    }
    return m_translation;
}
/* translateEnglishSentence Function: takes in a string, sentence, accesses each character in the 
string, applies a switch statement with cases for punctuation, concatentating m_translation (to
convert a character to a string) with punctuation as is and applying translateLetters function by 
default */
string Translator::translateEnglishSentence(string sentence){
    m_translation = "";
    for (int i = 0; i < sentence.length(); i++){
        switch(sentence[i]){
            case ' ':
            case ',':
            case '\'':
            case '.':
            case '?':
            case '!':
            case '/':
            case '&':
            case '(':
            case ')':
            case ':':
            case '\n':
            case '-':
                m_translation += sentence[i];
                break;
            default:
                m_translation += translateLetters(sentence[i]);
                break;     
        }
    }
    return m_translation;
}
/* translateLetters Function: takes in a character, letter, applies switch statement, to apply 
the translateSingleVowel or translateSingleConsonant functions from the Model Class accordingly */
string Translator::translateLetters(char letter){
    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return m_model.translateSingleVowel(letter);
            break;
        default:
            return m_model.translateSingleConsonant(letter);
    }
}
