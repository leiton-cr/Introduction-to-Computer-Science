#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string string_to_uppercase(string key);
bool has_only_alhpa (string key);
bool has_all_letters (string key);

int main(int argc, string argv[]) 
{
    if(argc != 2){
        printf("Usage: ./substitution key");
        return 1;
    }

    if(strlen(argv[1]) != 26){
         printf("Key must contain 26 characters.");
        return 1;
    }

    string key = string_to_uppercase(argv[1]);

    if(! has_only_alhpa(key)){
        printf("Key must contain only letters.");
        return 1;
    }

       if(! has_all_letters(key)){
        printf("Key must contain all the letters of alphabet.");
        return 1;
    }

    string original = get_string("Insert the message to encrypt: ");

    printf("Original : %s \n", original);
    printf("Encrypted: ");

    char c;
    for(int i = 0, len = strlen(original); i < len; i++){

        c = toupper(original[i]);  

        if ( c < 'A' || c > 'Z'){
            printf("%c", original[i]);
            continue;
        }

        if(isupper(original[i])){
            printf("%c", key[original[i] - 65]);
            continue;
        }
       
        printf("%c", (key[original[i] - 97]) + 32);
    }
    printf("\n");
}

string string_to_uppercase(string key){
    for(int i = 0, len = strlen(key); i< len; i++){
        key[i] = toupper(key[i]);
    }
    return key;
}

bool has_only_alhpa (string key) {
     for(int i = 0, len = strlen(key); i< len; i++){
        if(key[i] < 'A' || key[i] > 'Z'){
            return false;
        }
        return true;
    }
}

bool has_all_letters (string key) {
  bool contained;
    for(int i = 0; i < 26; i++){
        contained = false;
        for(int j = 0; j < 26 && !contained; j++){
            if (key[j] == i + 65){
                contained = true;
              	break;
            }
        }
        if(!contained){
            return false;
        } 
    }
    return true;   
}