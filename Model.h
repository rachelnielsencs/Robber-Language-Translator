#ifndef MODEL_H
#define MODEL_H
#include <string>
using namespace std;

class Model{
    public:
        // Default Constructor
        Model();
        //Default Deconstructor
        ~Model();
        // Translates English consonant to Rovarspraket (doubled with 'o' in between)
        string translateSingleConsonant(char consonant);
        // Translates English vowel to Rovarspraket (same)
        string translateSingleVowel(char vowel);
    private:
        // String of Rovarspraket letter combinations
        string m_model; 
};
#endif
