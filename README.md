The Movie Scheduling System is a simple console-based application developed using the C programming language. The purpose of this project is to manage movie schedules by enabling users to add movies, display the list of available movie schedules, and update show timings.

This program uses structures and arrays to store essential movie details such as Movie ID, Name, Show Time, and Ticket Price. It supports up to 10 movie schedules and uses a menu-driven interface to make the application easy to navigate.

This project demonstrates core programming concepts such as structures, arrays, loops, conditional statements, and modular programming using functions. It is ideal for beginners who want to develop practical and real-time applications using the C language.

FUNCTIONAL REQUIREMENTS
✔ 1. Add Movie Schedule

The user can add a new movie to the system.

Inputs required:

Movie ID

Movie Name

Show Time

Ticket Price

The movie is stored in the schedule list.

✔ 2. Display All Movie Schedules

Shows a complete list of all scheduled movies including:

Movie ID

Name

Show Time

Ticket Price

✔ 3. Update Movie Show Time

The user enters a valid Movie ID.

The system searches for the movie.

If found:

Prompts for a new show time.

Updates the record.

If not found:

Displays: “Movie not found.”

✔ 4. Exit Program

Closes the application safely.

PROJECT FEATURES
Feature	Description
Structured Data Storage	Uses struct movie to store movie information.
Fixed Schedule Size	Stores up to 10 movie records using #define max_length 10.
Menu-Based System	User selects operations using a number-based menu.
Input Validation	Displays helpful messages for full list, invalid Movie IDs, or empty records.
Modular Approach	Code divided into functions: addMovie(), displayMovies(), updateShowTime().
SCREENSHOTS OF OUTPUT (TEXT SIMULATION)
Screenshot 1: Main Menu
-------------------------------------
1. Add Movie Schedule
2. Display Movie List
3. Update Show Time
4. Exit
Enter your choice:

Screenshot 2: Adding a Movie
Enter Movie ID: 201
Enter Name: Avatar 2
Enter Show Time: 7:30 PM
Enter Ticket Price: 150
Movie Added Successfully!

Screenshot 3: Display Schedules
---------------------------------------
ID     Movie Name      Show Time     Price
201    Avatar 2        7:30 PM       150

Screenshot 4: Updating Show Time
Enter Movie ID to Update: 201
Enter New Show Time: 9:00 PM
Show Time Updated Successfully!

Screenshot 5: Invalid Movie
Enter Movie ID to Update: 500
Movie Not Found.

Screenshot 6: Exit Message
Thank you for using Movie Scheduling System.

ABOUT

A console-based project built using C to simulate a basic scheduling and record-management application for movies.

PROJECT LANGUAGE

C Programming (100%)
