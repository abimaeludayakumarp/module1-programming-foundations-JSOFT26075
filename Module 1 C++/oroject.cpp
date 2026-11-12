#include <iostream>
using namespace std;
// Function declarations
void readMarks(int marks[], int n);
int findTotal(int marks[], int n);
double findAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);
int countPassed(int marks[], int n);
void printReport(int marks[], int n);
int main()
{
    int marks[100];
    int n;
    char choice;

    do
    {
        cout << "\nSTUDENT MARKS ANALYZER\n";

        // Get number of students
        cout << "Enter number of students (1-100): ";
        cin >> n;

        // Check student count
        while (n < 1 || n > 100)
        {
            cout << "Invalid number! Enter again: ";
            cin >> n;
        }

        // Call functions
        readMarks(marks, n);
        printReport(marks, n);

        cout << "\nDo you want to repeat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you!\n";

    return 0;
}

// 1. Read marks
void readMarks(int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter mark for student "
             << i + 1 << ": ";
        cin >> marks[i];
    }
}

// 2. Find total
int findTotal(int marks[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    return total;
}

// 3. Find average
double findAverage(int marks[], int n)
{
    int total = findTotal(marks, n);

    return (double)total / n;
}

// 4. Find highest mark
int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 0; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

// 5. Find lowest mark
int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 0; i < n; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

// 6. Count passed students
int countPassed(int marks[], int n)
{
    int passed = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 40)
        {
            passed++;
        }
    }

    return passed;
}

// 7. Print report
void printReport(int marks[], int n)
{
    int total = findTotal(marks, n);
    double average = findAverage(marks, n);
    int highest = findHighest(marks, n);
    int lowest = findLowest(marks, n);
    int passed = countPassed(marks, n);
    int failed = n - passed;

    cout << "\n===== MARKS REPORT =====\n";

    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Highest Mark: " << highest << endl;
    cout << "Lowest Mark: " << lowest << endl;
    cout << "Passed Students: " << passed << endl;
    cout << "Failed Students: " << failed << endl;
}