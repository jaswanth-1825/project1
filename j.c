#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Movie;

// Comparator to sort movies by ending time
int compare(const void *a, const void *b) {
    Movie *m1 = (Movie *)a;
    Movie *m2 = (Movie *)b;
    return m1->end - m2->end;
}

int main() {
    int n;

    printf("Enter number of movies: ");
    scanf("%d", &n);

    Movie movies[n];

    // Input movie timings
    for (int i = 0; i < n; i++) {
        printf("Movie %d start time: ", i + 1);
        scanf("%d", &movies[i].start);
        printf("Movie %d end time: ", i + 1);
        scanf("%d", &movies[i].end);
    }

    // Sort movies by end time
    qsort(movies, n, sizeof(Movie), compare);

    printf("\nOptimal Movie Schedule:\n");

    int count = 0;
    int last_end = -1;

    for (int i = 0; i < n; i++) {
        if (movies[i].start >= last_end) {
            printf("Movie %d: Start = %d, End = %d\n",
                   ++count, movies[i].start, movies[i].end);
            last_end = movies[i].end;
        }
    }

    printf("\nTotal movies scheduled: %d\n", count);

    return 0;
}
