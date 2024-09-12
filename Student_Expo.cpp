#include <iostream>
#include <string>
#include <map>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks[5];

public:
    Student(string name, int rollNumber, int marks[]){};

    int calcMarks() {
        int totalMarks = 0;
        for (int i=0;i<=3;i++) {
            totalMarks += marks[i];
        }
        return totalMarks;
    }

    char calculateGrade() const {
        int marks = calcMarks();
        if (marks >= 90) return 'A';
        else if (marks>= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    const map<string, int>& getMarks() const {
        return totalmarks;
    }

    void updateMarks(const string& subject, int newMarks) {
        marks[subject] = newMarks;
    }
};

class School {
private:
    map<int, Student> students;

public:
    void addStudent(const Student& student) {
        students[student.getRollNumber()] = student;
    }

    const Student* findStudentByRollNumber(int rollNumber) const {
        auto it = students.find(rollNumber);
        if (it != students.end()) {
            return &(it->second);
        }
        return nullptr;
    }

    void updateStudentMarks(int rollNumber, const string& subject, int newMarks) {
        auto& student = students[rollNumber];
        student.updateMarks(subject, newMarks);
    }

    void printClassStatistics() const {
        if (students.empty()) {
            cout << "No students in the class." << endl;
            return;
        }

        double totalMarks = 0;
        int highestMarks = INT_MIN;
        int lowestMarks = INT_MAX;

        for (const auto& pair : students) {
            totalMarks += pair.second.calculateAggregateMarks();
            highestMarks = max(highestMarks, pair.second.calculateAggregateMarks());
            lowestMarks = min(lowestMarks, pair.second.calculateAggregateMarks());
        }

        double averageMarks = totalMarks / students.size();

        cout << "Class Statistics:" << endl;
        cout << "Average Marks: " << averageMarks << endl;
        cout << "Highest Marks: " << highestMarks << endl;
        cout << "Lowest Marks: " << lowestMarks << endl;
        cout << "Number of Students: " << students.size() << endl;
    }
};

int main() {
    // Example usage
    School school;

    Student student1("John", 101, {{"Math", 90}, {"Physics", 85}});
    Student student2("Alice", 102, {{"Math", 75}, {"Physics", 80}});
    Student student3("Bob", 103, {{"Math", 85}, {"Physics", 95}});

    school.addStudent(student1);
    school.addStudent(student2);
    school.addStudent(student3);

    school.printClassStatistics();

    return 0;
}
