#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int rollnumber;
	char name[50];
	float GPA;
	struct Student * next;
};

struct Student* createStudent(int rollnumber, const char *name, float
	GPA)
{
	struct Student *newStudent = (struct Student *) malloc(sizeof(struct Student));
	if (newStudent == NULL)
	{
		printf("Memory allocation failed!\n");
		exit(EXIT_FAILURE);
	}

	newStudent->rollnumber = rollnumber;
	strncpy(newStudent->name, name, sizeof(newStudent->name) - 1);
	newStudent->GPA = GPA;
	newStudent->next = NULL;
	return newStudent;
}

void displayStudents(struct Student *head)
{
	printf("\nStudent Details:\n");
	printf("Roll Name GPA\n");
	while (head != NULL)
	{
		printf("%d ", head->rollnumber);
		printf("%s", head->name);
		for (int i = 0; i < (29 - (strlen(head->name) - 4) + 3); i++)
		{
			printf(" ");
		}

		printf("%.2f", head->GPA);

		printf("\n");
		head = head->next;
	}
}

void updateGPA(struct Student *head, int rollnumber, float newGPA)
{
	while (head != NULL)
	{
		if (head->rollnumber == rollnumber)
		{
			head->GPA = newGPA;
			printf("GPA updated successfully!\n");
			return;
		}

		head = head->next;
	}

	printf("Student with roll number %d not found!\n", rollnumber);
}

void search(struct Student *head, int rollnumber)
{
	while (head != NULL)
	{
		if (head->rollnumber == rollnumber)
		{
			printf("Student found!\n");
			printf("Name: %s\nGPA: %.2f", head->name, head->GPA);
			return;
		}

		head = head->next;
	}

	printf("Student with roll number %d not found!\n", rollnumber);
}

int main()
{
	struct Student *head = NULL;
	int choice;
	do {
		printf("1. Add a new student\n");
		printf("2. Display all students\n");

		printf("3. Update student GPA\n");
		printf("4. Search student\n");
		printf("5. Quit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				{
					int roll;
					char name[50];
					float gpa;
					printf("Enter roll number: ");
					scanf("%d", &roll);
					printf("Enter name: ");
					scanf("%s", name);
					printf("Enter GPA: ");
					scanf("%f", &gpa);
					struct Student *newStudent = createStudent(roll, name, gpa);
					if (head == NULL)
						head = newStudent;
					else
					{
						struct Student *temp = head;
						while (temp->next)
						{
							temp = temp->next;
						}

						temp->next = newStudent;
					}

					printf("Student added successfully!\n");
					break;
				}

			case 2:
				displayStudents(head);
				break;
			case 3:
				{
					int roll;
					float newGPA;
					printf("Enter roll number to update GPA: ");

					scanf("%d", &roll);
					printf("Enter new GPA: ");
					scanf("%f", &newGPA);
					updateGPA(head, roll, newGPA);
					break;
				}

			case 4:
				{
					int roll;
					printf("Enter the roll you want to search: ");
					scanf("%d", &roll);
					search(head, roll);
					break;
				}

			case 5:
				printf("Exiting program.\n");
				break;
			default:
				printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 5);
	struct Student *current = head;
	while (current != NULL)
	{
		struct Student *next = current->next;
		free(current);
		current = next;
	}

	return 0;
}