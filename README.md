1. ABSTRACT

This Training Progress Tracker is a console-based C application designed to manage employee or student training activities.
The program allows users to:

Add training programs

Register trainees

Mark completed trainings for each trainee

View progress in a structured and simple interface

The system stores data in memory using arrays and performs operations using a menu-driven approach. It is lightweight, easy to run, and suitable for small-scale training management tasks.

2. FEATURES OF THE PROGRAM
✅ Add Training

Users can input:

Training Name

Instructor

Duration (hours)

✅ Register Trainee

Each trainee receives a unique ID.

✅ Mark Training Completed

Allows associating training IDs with trainee IDs.

✅ View Training Progress

Displays completed trainings for each trainee.

✅ List All Trainings / Trainees

Shows all existing records.

✅ Simple Menu-Driven Interface

Beginners can easily navigate through options.

3. TECHNICAL REQUIREMENTS
Software Requirements

C Compiler (any one):

GCC (Recommended)

Turbo C

Clang

Code::Blocks IDE

Dev-C++

Operating System:

Windows / Linux / macOS

Hardware Requirements

Minimum 2 GB RAM

Any basic CPU that supports C compiling

10 MB free storage

4. FUNCTIONAL REQUIREMENTS
FR1 – Add Training

System must accept:

Training Name

Instructor Name

Duration

FR2 – Add Trainee

System must store trainee details with unique IDs.

FR3 – Mark Completion

System must:

Accept trainee ID

Accept training ID

Append to trainee’s completed list

FR4 – Display Progress

System must show:

Trainee name

Trainings completed

FR5 – Data Listing

System must list:

All trainings

All trainees

FR6 – Menu Navigation

User must be able to:

Choose options

Exit program safely

5. HOW TO RUN THE C PROGRAM
🔧 Method 1: Using GCC (Windows/Linux/macOS)

Save the file as:

training.c


Open terminal/command prompt.

Compile:

gcc training.c -o training


Run:

./training

<img width="598" height="295" alt="Screenshot 2025-12-02 105521" src="https://github.com/user-attachments/assets/8176b76e-e222-4a72-bd7d-1483d30edf03" />
<img width="598" height="295" alt="Screenshot 2025-12-02 105521" src="https://github.com/user-attachments/assets/a11abf2a-d542-4bbb-b3f8-c5716fcdc02e" />
<img width="367" height="152" alt="Screenshot 2025-12-02 105534" src="https://github.com/user-attachments/assets/bdeb7775-1d11-4e06-9609-49b47b670c11" />
<img width="501" height="301" alt="Screenshot 2025-12-02 105544" src="https://github.com/user-attachments/assets/c5378581-f0bf-4f40-b8ea-47ef6f2f71ca" />
<img width="497" height="368" alt="Screenshot 2025-12-02 105558" src="https://github.com/user-attachments/assets/fde84021-8853-41a0-bd08-33cc60c4eefc" />
<img width="605" height="357" alt="Screenshot 2025-12-02 105618" src="https://github.com/user-attachments/assets/2408630f-7b3d-4202-a228-5dab0d8de6ff" />
<img width="650" height="528" alt="Screenshot 2025-12-02 105633" src="https://github.com/user-attachments/assets/020c3bf7-37ef-4b9b-8b69-463401feb6a7" />
<img width="522" height="584" alt="Screenshot 2025-12-02 105649" src="https://github.com/user-attachments/assets/fdd5a664-2f06-43f7-a2b2-b0c40ebfea8a" />
