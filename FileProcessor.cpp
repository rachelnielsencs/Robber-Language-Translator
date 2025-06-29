#include "FileProcessor.h"
#include <iostream>
#include <fstream>
// Default Constructor
FileProcessor::FileProcessor(){
    m_line = "";
}
// Deconstructor
FileProcessor::~FileProcessor(){
}
/* processFile Function: takes in two strings, inputFileName (the name of the file to read from) and 
outputFileName (the name of the file to write to) and initializes two input file streams with
inputFileName, inFile1 and inFile2, initializes an output stream to an HTML file, outFile, if outFile
is open, header function is applied,if inFile1 is open the lines from the file are read and outputted
to outFile, after boldLine function is applied to each, repeated with inFile2, applying the italicLine
and translateEnglishSentence functions, the footer function is then applied, followed by closing the 
files */
void FileProcessor::processFile(string inputFileName, string outputFileName){

    ifstream inFile1(inputFileName);
    ifstream inFile2(inputFileName);
    // Create new file
    ofstream outFile(outputFileName);

    if(outFile.is_open()){
        outFile << header() << endl;
    } else {
        cout << "Error Opening File." << endl;
    }

    // If file is open, read, bold, and output file lines to outFile
    if (inFile1.is_open()){
        while(getline(inFile1, m_line)){
            outFile << boldLine(m_line) << endl;
        }
        // Whitespace with HTML tags
        outFile << boldLine("")<< endl;
    } else { 
        cout << "Error Reading File." << endl;
    }
    // If file is open, read, italicize, and output file lines to outFile
    if (inFile2.is_open()){
        while(getline(inFile2, m_line)){
            outFile << italicLine(translator.translateEnglishSentence(m_line)) << endl;
        }
    } else { 
        cout << "Error Reading File." << endl;
    }

    // Whitespace with HTML tags
    outFile << italicLine("")<< endl;
    outFile << footer() << endl;

    // Close files
    inFile1.close();
    inFile2.close();
    outFile.close();
}
// header Function: returns string of HTML header tags and lines
string FileProcessor::header(){
    return "<!DOCTYPE html>\n<html>\n<head>\n<title>English to RobberTranslation</title>\n</head>\n<body>";
}
// boldLine Function: takes in a line and returns string of HTML paragraph, bold, and break tags
string FileProcessor::boldLine(string englishLine){
    return "<p><b>" + englishLine + "</b><br></p>";
}
// italicLine Function: takes in a line and returns string of HTML paragraph, italic, and break tags
string FileProcessor::italicLine(string robberLine){
    return "<p><i>" + robberLine + "</i><br></p>";
}
// footer Function: returns string of HTML footers tags and lines
string FileProcessor::footer(){
    return "</body>\n</html>";
}
