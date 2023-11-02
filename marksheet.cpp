#include <iostream>
#include <iomanip>

using namespace std;
class student {
    public:
    	float maths, science, english, history, geography, sum, per;
    	string name;
	
    void display();
};

inline void student::display() {
            cout<<"\nGRADESHEET";
	cout<<"\nStudent name: "<<name;
	
	cout<<"\nMaths: "<<maths;
	cout<<"\nScience: "<<science;
	cout<<"\nEnglish: "<<english;
	cout<<"\nHistory: "<<history;
	cout<<"\nGeography: "<<geography;
	
    sum = maths + science + english + history + geography;
    cout << "\nTotal marks: " << sum;
    
    per = sum / 5;
    cout << setprecision(3);
    cout << "\nPercentage: " << per;
    
    if (per >= 90) {
        cout << "\ngrade A";
    } else if (per >= 70) {
        cout << "\ngrade B";
    } else if (per >= 60) {
        cout << "\ngrade C";
    } else if (per >= 50) {
        cout << "\ngrade D";
    } else if (per >= 40) {
        cout << "\ngrade E";
    } else {
        cout << "\ngrade F";
    }
}


int main() {
    student gradesheet;
    cout << "\nenter student name:";
    cin >> gradesheet.name;
    cout << "\nenter maths marks:";
    cin >> gradesheet.maths;
    cout << "\nenter science marks:";
    cin >> gradesheet.science;
    cout << "\nenter english marks:";
    cin >> gradesheet.english;
    cout << "\nenter history marks:";
    cin >> gradesheet.history;
    cout << "\nenter geography marks:";
    cin >> gradesheet.geography;
    gradesheet.display();
    return 0;
}
