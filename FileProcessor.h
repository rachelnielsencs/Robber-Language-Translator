#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include "Translator.h"

class FileProcessor{
    public:
        // Default Constructor
        FileProcessor();
        // Default Deconstructor
        ~FileProcessor();
        // Reads and file in English and creates an HTML file with Rovarspraket translation
        void processFile(const string inputFileName, const string outputFileName);
    private: 
        // Instance of translator class declaration
        Translator translator;
        // HTML formatting tags and lines helper functions
        string header();
        string boldLine(string englishLine);
        string italicLine(string robberLine);
        string footer();
        // Lines read and translated from files
        string m_line;
};
#endif
