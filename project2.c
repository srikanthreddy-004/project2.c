#include <stdio.h>
#include <string.h>

#define MAX_TRAININGS 50
#define MAX_TRAINEES 50
#define MAX_NAME 50

typedef struct {
    int id;
    char name[MAX_NAME];
    char instructor[MAX_NAME];
    int duration;
} Training;

typedef struct {
    int id;
    char name[MAX_NAME];
    int completedTrainings[MAX_TRAININGS];
    int completedCount;
} Trainee;

Training trainings[MAX_TRAININGS];
Trainee trainees[MAX_TRAINEES];
int trainingCount = 0, traineeCount = 0;

/* ---- Function Declarations ---- */
void addTraining();
void addTrainee();
void markCompleted();
void viewProgress();
void listTrainings();
void listTrainees();

/* ---- Add Training ---- */
void addTraining() {
    if (trainingCount >= MAX_TRAININGS) {
        printf("Training limit reached.\n");
        return;
    }
    Training t;
    t.id = trainingCount + 1;

    printf("Enter training name: ");
    scanf(" %[^\n]", t.name);
    printf("Enter instructor: ");
    scanf(" %[^\n]", t.instructor);
    printf("Enter duration (hours): ");
    scanf("%d", &t.duration);

    trainings[trainingCount++] = t;
    printf("Training added (ID: %d)\n", t.id);
}

/* ---- Add Trainee ---- */
void addTrainee() {
    if (traineeCount >= MAX_TRAINEES) {
        printf("Trainee limit reached.\n");
        return;
    }
    Trainee tr;
    tr.id = traineeCount + 1;
    tr.completedCount = 0;

    printf("Enter trainee name: ");
    scanf(" %[^\n]", tr.name);

    trainees[traineeCount++] = tr;
    printf("Trainee added (ID: %d)\n", tr.id);
}

/* ---- Mark Training Completed ---- */
void markCompleted() {
    int tid, trid;
    listTrainees();
    printf("Enter trainee ID: ");
    scanf("%d", &trid);
    listTrainings();
    printf("Enter training ID to mark completed: ");
    scanf("%d", &tid);

    if (trid < 1 || trid > traineeCount || tid < 1 || tid > trainingCount) {
        printf("Invalid ID.\n");
        return;
    }

    Trainee *tr = &trainees[trid - 1];
    tr->completedTrainings[tr->completedCount++] = tid;

    printf("Training %d marked as completed for trainee %s.\n", tid, tr->name);
}

/* ---- View Trainee Progress ---- */
void viewProgress() {
    int trid;
    listTrainees();
    printf("Enter trainee ID: ");
    scanf("%d", &trid);

    if (trid < 1 || trid > traineeCount) {
        printf("Invalid ID.\n");
        return;
    }

    Trainee tr = trainees[trid - 1];
    printf("\nProgress for %s:\n", tr.name);

    if (tr.completedCount == 0) {
        printf("No completed trainings.\n");
        return;
    }

    for (int i = 0; i < tr.completedCount; i++) {
        int tid = tr.completedTrainings[i] - 1;
        printf("- %s (Instructor: %s)\n",
               trainings[tid].name,
               trainings[tid].instructor);
    }
}

/* ---- List Trainings ---- */
void listTrainings() {
    printf("\n--- Trainings ---\n");
    for (int i = 0; i < trainingCount; i++) {
        printf("%d. %s | Instructor: %s | Duration: %d hrs\n",
               trainings[i].id,
               trainings[i].name,
               trainings[i].instructor,
               trainings[i].duration);
    }
}

/* ---- List Trainees ---- */
void listTrainees() {
    printf("\n--- Trainees ---\n");
    for (int i = 0; i < traineeCount; i++) {
        printf("%d. %s\n", trainees[i].id, trainees[i].name);
    }
}

/* ---- Main Menu ---- */
int main() {
    int choice;

    while (1) {
        printf("\n===== TRAINING PROGRESS MANAGEMENT =====\n");
        printf("1. Add Training\n");
        printf("2. Register Trainee\n");
        printf("3. Mark Training Completed\n");
        printf("4. View Trainee Progress\n");
        printf("5. List Trainings\n");
        printf("6. List Trainees\n");
        printf("0. Exit\n");
        printf("Choose option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addTraining(); break;
            case 2: addTrainee(); break;
            case 3: markCompleted(); break;
            case 4: viewProgress(); break;
            case 5: listTrainings(); break;
            case 6: listTrainees(); break;
            case 0: return 0;
            default: printf("Invalid option.\n");
        }
    }
}
