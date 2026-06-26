#include <stdio.h>
#include <strings.h>
typedef struct Movies {
    char title[50];
    char genre[50];
    char director[50];
    int releaseYear;
    int rating;
} movies;
#define MAX_Movies 100
void AddNewMovies (movies M[], int* n);
void SearchMovies (movies M[], int n);
void DisplayMovies (movies M[], int n);

int main () {
    int choice;
    int n=0;
    movies M[MAX_Movies]; 
    do {
        printf("To add movies enter 1\nTo search all the movies by a certain genre enter 2\nTo display all the movies enter 3\nTo exit enter 4\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                AddNewMovies (M, &n);
                break;
            case 2:
                SearchMovies (M, n);
                break;
            case 3:
                DisplayMovies (M, n);
                break;
            case 4:
                printf("Exiting..........\n");
                break;
            default:
                printf("Enter a valid number\n");
        }
    } while (choice != 4);  
}

void AddNewMovies (movies M[], int* n) {
    char Title[50];
    char Genre[50];
    char Director[50];
    int ReleaseYear;
    int Rating;
    char choice[4];
    movies m;
    do {
        printf("Enter the title of movie: ");
        scanf(" %[^\n]", Title);
        strcpy(m.title, Title);
        printf("Enter the genre of movie: ");
        scanf(" %[^\n]", Genre);
        strcpy(m.genre, Genre);
        printf("Enter the Director of movie: ");
        scanf(" %[^\n]", Director);
        strcpy(m.director, Director);
        printf("Enter release year: ");
        scanf("%d", &ReleaseYear);
        m.releaseYear=ReleaseYear;
        printf("Enter the movies rating: ");
        scanf("%d", &Rating);
        m.rating=Rating;
        M[(*n)++] = m;
        printf("Record added.........\n");
        printf("Do you wish to enter a new record: ");
        scanf("%s", choice);
    } while (strcasecmp(choice, "Yes")==0);
    return;
}
void SearchMovies (movies M[], int n) {
    char Genre[50];
    printf("Enter the genre: ");
    scanf(" %[^\n]", Genre);
    printf("Searching..........\n");
    int count = 0;
    for (int i=0; i<n; i++) {
        if (strcasecmp(Genre, M[i].genre)==0) {
            printf("Title: %s\n", M[i].title);
            printf("Director: %s\n", M[i].director);
            printf("Release year: %d\n", M[i].releaseYear);
            printf("Rating: %d\n", M[i].rating);
            printf("\n");
            count++;
        }
    }
    if (count==0) printf("No movie found with this genre :(\n");
    return;
}

void DisplayMovies (movies M[], int n) {
    if (n==0) printf("No movies found :(\n");
    for (int i=0; i<n; i++) {
        printf("Title: %s\n", M[i].title);
        printf("Genre: %s\n", M[i].genre);
        printf("Director: %s\n", M[i].director);
        printf("Release year: %d\n", M[i].releaseYear);
        printf("Rating: %d\n", M[i].rating);
        printf("\n");
    }
}