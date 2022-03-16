#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>


int countWords(string s){
    int words = 1;

    for(int i = 0, n = strlen(s); i<n-1 ;i++){
        if( s[i] == ' ' && s[i+1]!=' '){
            words++;
        }
    }
    return words;
}

int countLetters(string s){
    int letters = 0;
    char c;

    for(int i = 0, n = strlen(s); i<n ;i++){
        c = tolower(s[i]);

        if( c >= 'a' && c<= 'z' ){
            letters++;
        }
    }
    return letters;
}

int countSentences(string s){
    int sentences = 0;
    
    for(int i = 0, n = strlen(s); i<n ;i++){
        if( s[i] == '.' ){
            sentences++;
        }
    }
    return sentences;
}

int main (void){
    string s = get_string("Write the sentence to calculate: ");

    float avgL = ((float)countLetters(s) / (float)countWords(s)) * 100;
    float avgS = ((float)countSentences(s) / (float)countWords(s)) * 100;

    float index = 0.0588 * avgL - 0.296 * avgS - 15.8;

    printf("Letters: %i \n", countLetters(s) );
    printf("Words: %i \n", countWords(s));
    printf("Sentences: %i \n", countSentences(s));
    

    int grade = round(index);

    if (grade < 1){
        printf("Grade 1- \n");
    }else if(grade > 16){
        printf("Grade 16+ \n");
    }else{
        printf("Grade %i \n", grade);
    }

}