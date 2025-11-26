🎬 MOVIE SCHEDULING SYSTEM (C Programming)
📄 ABSTRACT

The Movie Scheduling System is a terminal-based application developed in C that helps manage movie show schedules efficiently for cinemas or multiplexes.
It allows users to add, view, search, update, and delete movie schedule records using a simple menu-driven interface.

All schedule data is stored in a binary file (movie.txt) to ensure persistence across multiple program runs.

This project highlights essential C programming concepts like structures, file handling, loops, conditional statements, and modular programming—making it ideal for beginners, academic submissions, and practical learning.

✨ FEATURES
Core Functionalities

🎬 Add New Movie Schedule
(Movie ID, Movie Name, Show Time, Date, Screen No, Ticket Price)

📋 Display All Movie Schedules
Formatted table view for easy readability

🔍 Search Schedule by Movie ID

✏️ Update Schedule Information

❌ Delete Movie Schedule Record

💾 Persistent Data Storage in binary file (movie.txt)

🖥️ Fully Terminal-Based & Menu-Driven

👨‍💻 Beginner-friendly modular code

⚙️ Automatically creates movie.txt if missing

⚠️ Includes basic input validation & error handling

🛠️ TECHNICAL REQUIREMENTS
System Requirements

Operating System: Windows / Linux / macOS

Terminal or Command Prompt

Minimum 4 MB RAM

Small disk space for movie.txt

Software Requirements

C Compiler: GCC / Clang / MSVC / MinGW

Code Editor: VS Code / Code::Blocks / Dev-C++ / Turbo C / etc.

(Optional) Make utility

Programming Requirements

Language: C

Standard: C89 / C99 / C11

Header Files Used:

stdio.h

stdlib.h

string.h

File Handling

Binary file storage: movie.txt

Auto-creates file if not present

Read/Write permissions required

📌 FUNCTIONAL REQUIREMENTS
User Interface

Terminal-based CLI

Clear, simple menu

Input validation included

🎬 MOVIE SCHEDULING OPERATIONS
➕ Add Movie Schedule

Input:

Movie ID

Movie Name

Show Time

Date

Screen Number

Ticket Price

Stored in movie.txt (binary format)

📋 Display All Schedules

Prints all saved movie schedule records in a professionally formatted table.

🔍 Search Schedule

Search by Movie ID (unique identifier)

✏️ Update Schedule

Modify existing schedule details such as movie name, time, date, or ticket price.

❌ Delete Schedule

Removes a schedule permanently using temporary file handling for safety.

🔧 DATA MANAGEMENT

Fast & efficient binary file storage

Safe update/delete operations

Handles empty/missing data files gracefully

🔄 PROGRAM FLOW

Menu runs in a loop

Each option displays success or error messages

Includes Exit option

▶️ Running the Program
1️⃣ Compile
gcc movie.c -o movie

2️⃣ Run
Linux / macOS:
./movie

Windows:
movie.exe

3️⃣ Data File

Automatically creates movie.txt

Stores all schedule records in binary format

📸 Screenshots (Optional)

(Replace with your actual screenshots)

Add Schedule

Display Schedules

Search Schedule

Update Schedule

Delete Schedule

Exit Program

📝 Author

M.Jaswanth
