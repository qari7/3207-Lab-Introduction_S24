//first commit
//The cloned repository has a file named print_random.c. This is a simple program but is incomplete. You are to develop the
//function randchar() as a separate file (random.c) and include it in your repository. The function randchar()
// is a character function that returns a random character from ‘A’ – ‘Z’. The character is used in the main
// program to generate a random 7 letter word.

char randchar(void){
    int random_number = rand() % 26; // have a random number between 0 and 25
    char random_letter = 'a' + random_number; // have a random letter based on the value of random_number
    return random_letter;

}
