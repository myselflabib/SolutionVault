#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_DOCTORS 5
#define MAX_APPOINTMENTS 100

typedef struct {
    int id;
    char name[50];
    char specialization[50];
} Doctor;

typedef struct {
    int id;
    char name[50];
    int age;
    char gender[10];
    char diagnosis[100];
    char contact[20];
} Patient;

typedef struct {
    int id;
    int patient_id;
    int doctor_id;
    char date[20];
} Appointment;

Doctor doctors[MAX_DOCTORS] = {
    {1, "Dr. Smith", "Cardiology"},
    {2, "Dr. Johnson", "Neurology"},
    {3, "Dr. Williams", "Pediatrics"},
    {4, "Dr. Brown", "Orthopedics"},
    {5, "Dr. Davis", "Dermatology"}
};

Patient patients[MAX_PATIENTS];
Appointment appointments[MAX_APPOINTMENTS];
int patient_count = 0, appointment_count = 0;

void print_receipt(int patient_index, int appointment_index) {
    printf("\n========= Appointment Receipt =========\n");
    printf("Patient ID: %d\n", patients[patient_index].id);
    printf("Name: %s\n", patients[patient_index].name);
    printf("Age: %d\n", patients[patient_index].age);
    printf("Gender: %s\n", patients[patient_index].gender);
    printf("Diagnosis: %s\n", patients[patient_index].diagnosis);
    printf("Contact: %s\n", patients[patient_index].contact);
    printf("Doctor: %s (%s)\n", doctors[appointments[appointment_index].doctor_id - 1].name, 
           doctors[appointments[appointment_index].doctor_id - 1].specialization);
    printf("Appointment Date: %s\n", appointments[appointment_index].date);
    printf("=======================================\n");
}

void add_patient_and_schedule() {
    if (patient_count < MAX_PATIENTS) {
        patients[patient_count].id = patient_count + 1;
        printf("Assigned Patient ID: %d\n", patients[patient_count].id);

        getchar();  // Clear newline character left in input buffer

        printf("Enter name: ");
        fgets(patients[patient_count].name, sizeof(patients[patient_count].name), stdin);
        patients[patient_count].name[strcspn(patients[patient_count].name, "\n")] = '\0';  // Remove newline

        printf("Enter age: ");
        scanf("%d", &patients[patient_count].age);

        printf("Enter gender: ");
        scanf("%s", patients[patient_count].gender);

        getchar();  // Clear buffer before fgets

        printf("Enter diagnosis: ");
        fgets(patients[patient_count].diagnosis, sizeof(patients[patient_count].diagnosis), stdin);
        patients[patient_count].diagnosis[strcspn(patients[patient_count].diagnosis, "\n")] = '\0';

        printf("Enter contact: ");
        scanf("%s", patients[patient_count].contact);

        printf("\nAvailable Doctors:\n");
        for (int i = 0; i < MAX_DOCTORS; i++) {
            printf("ID: %d, Name: %s, Specialization: %s\n", 
                   doctors[i].id, doctors[i].name, doctors[i].specialization);
        }

        if (appointment_count < MAX_APPOINTMENTS) {
            appointments[appointment_count].id = appointment_count + 1;
            appointments[appointment_count].patient_id = patients[patient_count].id;

            int doctor_id;
            do {
                printf("Enter doctor ID for appointment: ");
                scanf("%d", &doctor_id);
                if (doctor_id < 1 || doctor_id > MAX_DOCTORS) {
                    printf("Invalid Doctor ID! Please enter a valid ID (1-5).\n");
                }
            } while (doctor_id < 1 || doctor_id > MAX_DOCTORS);
            
            appointments[appointment_count].doctor_id = doctor_id;

            printf("Enter appointment date (dd/mm/yyyy): ");
            scanf("%s", appointments[appointment_count].date);

            printf("Appointment scheduled successfully!\n");
            print_receipt(patient_count, appointment_count);

            appointment_count++;
        } else {
            printf("Appointment limit reached!\n");
        }

        patient_count++;
    } else {
        printf("Patient limit reached!\n");
    }
}

void list_appointments_by_doctor() {
    int doctor_id;
    printf("Enter Doctor ID to view appointments: ");
    scanf("%d", &doctor_id);

    if (doctor_id < 1 || doctor_id > MAX_DOCTORS) {
        printf("Invalid Doctor ID!\n");
        return;
    }

    int hasAppointment = 0;
    printf("\nDoctor: %s (%s)\n", doctors[doctor_id - 1].name, doctors[doctor_id - 1].specialization);
    printf("--------------------------------------------\n");

    for (int j = 0; j < appointment_count; j++) {
        if (appointments[j].doctor_id == doctor_id) {
            printf("Appointment ID: %d | Patient ID: %d | Date: %s\n", 
                   appointments[j].id, appointments[j].patient_id, appointments[j].date);
            hasAppointment = 1;
        }
    }

    if (!hasAppointment) {
        printf("No appointments scheduled for this doctor.\n");
    }
    printf("==============================================\n");
}

int main() {
    int choice;
    do {
        printf("\nHospital Management System\n");
        printf("1. Add Patient and Schedule Appointment\n");
        printf("2. List Appointments by Doctor\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_patient_and_schedule(); break;
            case 2: list_appointments_by_doctor(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}
