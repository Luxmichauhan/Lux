#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string mobile;
    string address;
    string city;
    string state;
    string gender;
    string nationality;
    string university;
    string schooling;
    string interestedSubjects;
    string company;
    string session;
    string qualification;
    string grade;
    string marks;
    string percentage;
    string batch;
    string email;
    char choice;

    cout << "Registration Form\n";

    // Input fields
    cout << "Name: ";
    getline(cin, name);

    cout << "Mobile: ";
    getline(cin, mobile);

    cout << "Address: ";
    getline(cin, address);

    cout << "City: ";
    getline(cin, city);

    cout << "State: ";
    getline(cin, state);

    cout << "Gender: ";
    getline(cin, gender);

    cout << "Nationality: ";
    getline(cin, nationality);

    cout << "University: ";
    getline(cin, university);

    cout << "Schooling: ";
    getline(cin, schooling);

    cout << "Interested Subjects: ";
    getline(cin, interestedSubjects);

    cout << "Company: ";
    getline(cin, company);

    cout << "Session (morning/evening): ";
    getline(cin, session);

    cout << "Qualification: ";
    getline(cin, qualification);

    cout << "Grade: ";
    getline(cin, grade);

    cout << "Marks: ";
    getline(cin, marks);

    cout << "Percentage: ";
    getline(cin, percentage);

    cout << "Batch (2022/2023/2024): ";
    getline(cin, batch);

    cout << "Email: ";
    getline(cin, email);

    // Submit or cancel
    cout << "Submit or Cancel? (s/c): ";
    cin >> choice;

    if (choice == 's' || choice == 'S') {
        // Process the registration data
        cout << "Registration Successful!" << endl;
        // Add your code to process the data (e.g., save to database)
    } else {
        cout << "Registration Cancelled" << endl;
    }

    return 0;
}

