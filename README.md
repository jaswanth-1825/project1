🎬 MOVIE SCHEDULING SYSTEM

(Greedy Algorithm – Activity Selection Method)

📄 ABSTRACT

The Movie Scheduling System is a C-based console application designed to generate an optimal schedule of non-overlapping movies in a single screen or theatre.
The program takes the start and end times of multiple movies as input, sorts them based on their ending times, and then selects the maximum number of movies using the Greedy Algorithm (Activity Selection Problem).

This project demonstrates essential C programming concepts such as structures, sorting techniques, control flow, and greedy strategy. It is ideal for academic coursework, lab submissions, and concept demonstrations.

✨ FEATURES
Core Functionalities

🎬 Accepts start & end timings for multiple movies
⚙️ Sorts all movies by end time automatically
🎯 Applies Greedy Algorithm to choose compatible movies
📋 Displays the optimal schedule
🧮 Shows total number of movies that can be scheduled
🖥️ Simple terminal-based interface
👨‍💻 Beginner-friendly logic

🛠️ TECHNICAL REQUIREMENTS
System Requirements

Windows / Linux / macOS

Terminal / Command Prompt

Minimum RAM: 4 MB

Software Requirements

C Compiler: GCC / Clang / MinGW / MSVC

Code Editor (VS Code / Code::Blocks / Dev-C++ / Notepad++)

Programming Requirements

Language: C

Concepts Used:

Structures

Sorting (qsort comparator)

Greedy Algorithm

Conditional checks

Loops and arrays

📌 FUNCTIONAL REQUIREMENTS
User Interface

Console-based

Interactive prompts for entering movie details

Clear formatted schedule display

🎬 MOVIE SCHEDULING OPERATIONS
➕ Input Movie Timings

User inputs:

Start time of each movie

End time of each movie

🗂️ Sorting Process

Movies are sorted in increasing order of ending time to ensure optimal selection.

🎯 Greedy Selection Logic

Select the movie that finishes first

Only select the next movie if its start time is greater than or equal to the previously selected movie’s end time

📤 Output

The program displays:

A list of selected movies

Their start & end times

Total number of movies scheduled without overlapping

🔧 DATA MANAGEMENT

Data is stored in memory (arrays of structures)

Sorting + Greedy strategy ensures efficient scheduling

No external files used

🔄 PROGRAM FLOW

User enters the number of movies

User provides start & end times for each

Program sorts all movies by end time

Greedy algorithm selects non-overlapping movies

Final optimal schedule displayed

Total number of movies shown

Program terminates

▶️ HOW TO RUN THE PROGRAM
1️⃣ Compile

Use any C compiler (e.g., GCC):

gcc movie.c -o movie

2️⃣ Run
Linux / macOS:
./movie

Windows:
movie.exe

📸 OPTIONAL SCREENSHOTS

(You can insert your images here)

Input screen
<img width="284" height="22" alt="Screenshot 2025-11-27 125757" src="https://github.com/user-attachments/assets/5ce6f90b-e709-4041-adbe-0cb7e55329c3" />



Movie time scheduling
<img width="546" height="444" alt="Screenshot 2025-11-27 125833" src="https://github.com/user-attachments/assets/178006a2-d665-4ee6-9959-40293b1dfba4" />


Total movies displayed
<img width="508" height="161" alt="Screenshot 2025-11-27 125840" src="https://github.com/user-attachments/assets/a3d3e5bf-9dfc-426c-83ed-961a80d5dfb1" />




📝 AUTHOR

M.Jaswanth
