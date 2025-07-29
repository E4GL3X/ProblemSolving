#include <bits/stdc++.h>
using namespace std; 

struct Student
{
    int rollnumber;
    char name[50];
    float GPA;
    Student* next;
};

Student* create(int rollnumber, const char* name, float GPA)
{
    Student* newStudent = new Student;
    if (newStudent == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
        exit(EXIT_FAILURE);
    }
    newStudent->rollnumber = rollnumber;
    strncpy(newStudent->name, name, sizeof(newStudent->name) - 1);
    newStudent->GPA = GPA;
    newStudent->next = nullptr;
    return newStudent;
}

void display(Student* head)
{
        cout << "\nStudent Details:\n";
        cout << "Roll Name GPA\n";
    while (head != nullptr)
    {
            cout << head->rollnumber << " ";
            cout << head->name;
        for (int i = 0; i < (29 - (strlen(head->name) - 4) + 3); i++)
        {
            cout << " ";
        }
            cout << head->GPA << "\n";
        head = head->next;
    }
}

void update(Student* head, int rollnumber, float newGPA)
{
    while (head != nullptr)
    {
        if (head->rollnumber == rollnumber)
        {
            head->GPA = newGPA;
            cout << "GPA updated successfully!\n";
            return;
        }
        head = head->next;
    }
    cout << "Student with roll number " << rollnumber << " not found!\n";
}

void search(Student* head, int rollnumber)
{
    while (head != nullptr)
    {
        if (head->rollnumber == rollnumber)
        {
            cout << "Student found!\n";
            cout << "Name: " << head->name << "\nGPA: " << head->GPA << endl;
            return;
        }
        head = head->next;
    }
    cout << "Student with roll number " << rollnumber << " not found!\n";
}

int main()
{
    Student* head = nullptr;
    int choice;
    do
    {
        cout << "1. Add a new student\n";
            cout << "2. Display all students\n";
            cout << "3. Update student GPA\n";
            cout << "4. Search student\n";
            cout << "5. Quit\n";
            cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int roll;
                char name[50];
                float gpa;
                    cout << "Enter roll number: ";
                    cin >> roll;
                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter GPA: ";
                    cin >> gpa;
                Student* newStudent = create(roll, name, gpa);
                if (head == nullptr)
                    head = newStudent;
                else
                {
                    Student* temp = head;
                    while (temp->next)
                    {
                        temp = temp->next;
                    }
                    temp->next = newStudent;
                }
                    cout << "Student added successfully!\n";
                break;
            }
            case 2:
                display(head);
                break;
            case 3:
            {
                int roll;
                float newGPA;
                    cout << "Enter roll number to update GPA: ";
                    cin >> roll;
                    cout << "Enter new GPA: ";
                    cin >> newGPA;
                update(head, roll, newGPA);
                break;
            }
            case 4:
            {
                int roll;
                    cout << "Enter the roll you want to search: ";
                    cin >> roll;
                search(head, roll);
                break;
            }
            case 5:
                    cout << "Exiting program.\n";
                break;
            default:
                    cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    Student* current = head;
    while (current != nullptr)
    {
        Student* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}