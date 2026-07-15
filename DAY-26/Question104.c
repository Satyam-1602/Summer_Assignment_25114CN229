//Write a program to Create quiz application.
#include <stdio.h>
#include <string.h>

int main() {
    char questions[5][100] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the largest planet in our solar system?",
        "Who wrote 'Romeo and Juliet'?",
        "What is the chemical symbol for gold?"
    };
    char options[5][4][100] = {
        {"A) London", "B) Paris", "C) Berlin", "D) Madrid"},
        {"A) 3", "B) 4", "C) 5", "D) 6"},
        {"A) Jupiter", "B) Saturn", "C) Mars", "D) Venus"},
        {"A) Shakespeare", "B) Dickens", "C) Tolstoy", "D) Hemingway"},
        {"A) Ag", "B) Au", "C) Al", "D) As"}
    };
    char answers[5] = {'B', 'B', 'A', 'A', 'B'};
    int score = 0;
    char userAnswer;

    printf("Welcome to the Quiz Application!\n");

    for (int i = 0; i < 5; i++) {
        printf("\nQuestion %d: %s\n", i + 1, questions[i]);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }
        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &userAnswer);

        if (userAnswer == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect. The correct answer is %c.\n", answers[i]);
        }
    }

    printf("\nQuiz completed! Your score is %d out of 5.\n", score);

    return 0;
}