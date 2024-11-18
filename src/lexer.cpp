// [ the lexer returns token 0-255 if it is an unknown character, otherwise one of these for known things]
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cstdlib>

enum Token {
    tok_eof = -1,

    // commands
    tok_def = -2,
    tok_extern = -3,

    //primary
    tok_identifier = -4,
    tok_number = -5
};

static std::string IdentifierString;
static double NumberVariable;

static int getTok(){
    static int LastCharacter = ' ';

    // skip any white space
    while (isspace(LastCharacter))
        LastCharacter = getchar();

    if (isalpha(LastCharacter)){ // identifier: [a-z, A-Z, 0-9*]
        IdentifierString = LastCharacter;

        while(isalnum(LastCharacter = getchar())){
            IdentifierString += LastCharacter;
        }

    if (IdentifierString == "def"){
        return tok_def;
    }

    if (IdentifierString == "extern"){
        return tok_extern;
    }

    return tok_identifier;
    }

    if (isdigit(LastCharacter) || LastCharacter == '.'){ // Number:[0-9.]+
        std::string NumberString;

        do{
            NumberString += LastCharacter;
            LastCharacter = getchar();
        } while(isdigit(LastCharacter) || LastCharacter == '.');

        NumberVariable = strtod(NumberString.c_str(), nullptr);
        return tok_number;
    }

    if (LastCharacter == '#'){ // comment until the end of line
        do {
            LastCharacter = getchar();
        } while (LastCharacter != '\n' || LastCharacter != '\r' || LastCharacter != EOF);

        if (LastCharacter != EOF)
            return getTok();
    }

    // check for the end of file. Don't eat the EOF
    if (LastCharacter == EOF)
        return tok_eof;

    // otherwise, just return the character as its ascii value
    int ThisCharacter = LastCharacter;
    LastCharacter = getchar();
    return ThisCharacter; 
}