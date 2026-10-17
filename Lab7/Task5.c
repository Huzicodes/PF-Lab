#include<stdio.h>
void input_sentences(char (*sentences)[100]);
int vowels(char sentences [100]);

int main(void) {
    char sentences[3][100];

    input_sentences(sentences);
    printf("%d vowels in sentence1\n%d vowels in sentence2\n%d vowels in sentence3",
    vowels(sentences[0]),vowels(sentences[1]),vowels(sentences[2]));

    return 0;
}

void input_sentences(char (*sentences)[100]) {
    printf("Enter a sentence-set with semi-colon seperation (three sentences): ");
    scanf("%[^;]%*c", sentences[0]);
    scanf("%[^;]%*c", sentences[1]);
    scanf("%[^\n]", sentences[2]);
}

int vowels(char sentences [100]) {
    int count = 0;
    for(int i = 0; sentences[i] != '\0'; i++) {
        sentences[i] = tolower(sentences[i]);
        if(sentences[i] == 'a' || sentences[i] == 'e' || sentences[i] == 'o' ||
            sentences[i] == 'u' || sentences[i] == 'i') count++;
    }

    return count;
}