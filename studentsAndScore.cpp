// Students name with their score
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Student
{
    string name;
    int score;
};

bool compare(Student s1, Student s2)
{
    return s1.score > s2.score;
}

int main()
{
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    vector<Student> students(num_students);
    for (int i = 0; i < num_students; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter the score of student " << i + 1 << ": ";
        cin >> students[i].score;
    }

    sort(students.begin(), students.end(), compare);

    cout << "Student with highest score: " << students[0].name << ", " << students[0].score << endl;
    cout << "Student with second highest score: " << students[1].name << ", " << students[1].score << endl;

    return 0;
}