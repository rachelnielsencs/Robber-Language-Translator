#include "Model.h"
// Initializes m_model string
Model::Model(){
    m_model = "";
}
Model::~Model(){
}
/* translateSingleConsonant Function: takes in a character, consonant, declares and initializes a lower 
cased verison of the consonant, then concatenates m_model (empty string) with the original consonant 
(converts the character into a string), the letter 'o', and lower cased consonant, then converts the 
characters into a string, returns resulting string to the function call*/
string Model::translateSingleConsonant(char consontant){
    char consontant2 = tolower(consontant);
    return m_model + consontant + "o" + consontant2;
}
/* translateSingleVowel Function: takes in a vowel as a character and returns m_model concatenated with
the vowel (converts the character into a string) */
string Model::translateSingleVowel(char vowel){
    return m_model + vowel;
}
