#include <stdio.h>          // Standard Input / Output library
#include <stdlib.h>         // Standard library for qsort()


// ---------------------------------------------------------------
//                       STRUCTURE DECLARATION
// ---------------------------------------------------------------

// Structure to hold movie start time and end time.
// Each movie has two pieces of information:
// 1. start time
// 2. end time
typedef struct
{
    int start;             // Movie start time
    int end;               // Movie end time

} Movie;


// ---------------------------------------------------------------
//                  COMPARATOR FUNCTION FOR QSORT
// ---------------------------------------------------------------

// This function is used by qsort() to sort the Movie array.
//
// qsort() needs a comparator function that determines how two
// items in the array should be ordered.
//
// Our goal: Sort movies by END TIME in ascending order.
// This is important for the greedy algorithm.
//
// If m1->end < m2->end, return negative → m1 comes first.
// If m1->end > m2->end, return positive → m1 comes later.
// If equal, return 0.
int compare(const void *a, const void *b)
{
    Movie *m1 = (Movie *) a;
    Movie *m2 = (Movie *) b;

    return m1->end - m2->end;
}


// ---------------------------------------------------------------
//                       MAIN FUNCTION START
// ---------------------------------------------------------------

int main()
{
    // -----------------------------------------------------------
    //              DECLARING IMPORTANT VARIABLES
    // -----------------------------------------------------------

    int n;                 // Number of movies to be entered by user

    // Asking user for the number of movies
    printf("Enter number of movies: ");
    scanf("%d", &n);


    // -----------------------------------------------------------
    //               DECLARING MOVIE ARRAY OF SIZE n
    // -----------------------------------------------------------

    Movie movies[n];      // Array to hold all movie data


    // -----------------------------------------------------------
    //                TAKING INPUT FOR EACH MOVIE
    // -----------------------------------------------------------

    printf("\nEnter start and end times for each movie:\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Movie %d start time: ", i + 1);
        scanf("%d", &movies[i].start);

        printf("Movie %d end time:   ", i + 1);
        scanf("%d", &movies[i].end);

        printf("\n");     // Adding a blank line for readability
    }


    // -----------------------------------------------------------
    //              SORTING MOVIES BY END TIME USING QSORT
    // -----------------------------------------------------------

    printf("Sorting movies by their ending time...\n");

    qsort(
        movies,            // Array to be sorted
        n,                 // Number of elements
        sizeof(Movie),     // Size of each element
        compare            // Comparator function
    );


    // -----------------------------------------------------------
    //             DISPLAYING MOVIES AFTER SORTING
    // -----------------------------------------------------------

    printf("\nMovies after sorting by end time:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Movie %d → Start: %d , End: %d\n",
               i + 1,
               movies[i].start,
               movies[i].end
        );
    }


    // -----------------------------------------------------------
    //       APPLYING GREEDY ALGORITHM FOR MOVIE SELECTION
    // -----------------------------------------------------------

    printf("\n\nApplying greedy algorithm to find optimal schedule...\n");

    int last_end = -1;     // End time of the last selected movie
    int count = 0;         // Total number of movies selected


    // -----------------------------------------------------------
    //                  SELECTING NON-OVERLAPPING MOVIES
    // -----------------------------------------------------------

    printf("\nOptimal Movie Schedule:\n\n");

    for (int i = 0; i < n; i++)
    {
        // Condition:
        // If the start time of current movie is greater than or
        // equal to the end time of last selected movie,
        // then we can watch this movie.
        if (movies[i].start >= last_end)
        {
            printf("Selected Movie %d : Start = %d , End = %d\n",
                   count + 1,
                   movies[i].start,
                   movies[i].end
            );

            // Update last selected movie end time
            last_end = movies[i].end;

            // Increase count of selected movies
            count++;
        }
    }


    // -----------------------------------------------------------
    //              DISPLAYING FINAL TOTAL NUMBER OF MOVIES
    // -----------------------------------------------------------

    printf("\nTotal movies that can be watched: %d\n", count);


    // -----------------------------------------------------------
    //                        END OF PROGRAM
    // -----------------------------------------------------------

    return 0;
}
