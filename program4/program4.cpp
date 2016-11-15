#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    int NUMBER_STUDENTS = 8;
    int NUMBER_QUESTIONS = 21;
    string answers[NUMBER_QUESTIONS];
    string classScores[NUMBER_STUDENTS][23]; // [0][0] and [0][1] are the first and last name
    double studentPts[NUMBER_STUDENTS];
    double studentPercent[NUMBER_STUDENTS];
    double allStudentPts = 0;
    double classAverage = 0;
    char classAverageGrade = 'n';
    int wrongAnswer[NUMBER_STUDENTS];
    char percent = '%';
    string studentGrade[NUMBER_STUDENTS];
    istringstream inSS;
    ofstream outFS;
    ifstream inFS;
    
	inFS.open ("answerkey.txt"); // Opens answerkey.txt
	for (int i = 0; i < NUMBER_QUESTIONS; ++i) {
	    inFS >> answers[i];
	    //cout << answers[i] << " "; // Debugging to make sure the array picked up the answers.
	}
	inFS.close (); // Closes answerkey.txt
	
	
	
	inFS.open ("studentanswers.txt");
	outFS.open ("studentanswers.out");
	for (int j = 0; j < NUMBER_STUDENTS; ++j) {
	    inFS >> classScores[j][0];
	    for (int i = 1; i < 23; ++i) {
	        inFS >> classScores[j][i];
	    }
	}
	inFS.close ();
	cout << endl;
	
	
	/*
	for (int j = 0; j < NUMBER_STUDENTS; ++j) { // Debugging to see if everything went where it was needing to go.
	    for (int i = 0; i < 23; ++i) {
	        cout << classScores[j][i] << " ";
	    }
	    cout << endl;
	}
	*/
	
	
	for (int j = 0; j < NUMBER_STUDENTS; ++j) { // Finds out the points a student is recieving.
	    for (int i = 2; i < 23; ++i) {
	        //cout << classScores[j][i] << endl;
	        if (classScores[j][i] == answers[i - 2]) {
	            ++studentPts[j];
	        }
	        else if (classScores[j][i] == "rand" || classScores[j][i] == "rand()") {
	        	++studentPts[j];
	        }
	        else if (classScores[j][i] == "var") {
	        	++studentPts[j];
	        }
	        else if (classScores[j][i] == "?") {
	            studentPts[j] = studentPts[j] + 0;
	            ++wrongAnswer[j];
	        }
	        else if (classScores[j][i] != answers[i - 2]){
	            studentPts[j] = studentPts[j] - 0.25;
	            ++wrongAnswer[j];
	        }
	        else {
	            cout << "Invalid score";
	        }
	    }
	}
	cout << endl;
	
	/*
	for (int i = 0; i < NUMBER_STUDENTS; ++i) { // Used for debugging to make sure the studentPts were adding up correctly.
	    cout << studentPts[i] << endl;
	}
	*/
	for (int i = 0; i < NUMBER_STUDENTS; ++i) { // Calculates each students percentage on the test.
		studentPercent[i] = studentPts[i] / NUMBER_QUESTIONS;
		//cout << setprecision(2) << studentPercent[i] << endl;
	}
	//cout << endl;
	
	
	
	
	for (int j = 0; j < NUMBER_STUDENTS; ++j) { // Calculates a students grade.
		if (studentPercent[j] >= .90) {
			studentGrade[j] = 'A';
		}
		else if (studentPercent[j] >= .80) {
			studentGrade[j] = 'B';
		}
		else if (studentPercent[j] >= .70) {
			studentGrade[j] = 'C';
		}
		else if (studentPercent[j] >= .60) {
			studentGrade[j] = 'D';
		}
		else if (studentPercent[j] < .60) {
			studentGrade[j] = 'F';
		}
	}
	
	
	
	for (int j = 0; j < NUMBER_STUDENTS; ++j) { // Prints the students mistakes and grade on test.
	    cout << classScores[j][0] << " " << classScores[j][1] << " " << "(Grade: " << studentGrade[j] << " Percent: " << fixed << setprecision(1) << studentPercent[j] * 100 << percent << ") ";
	    for (int i = 2; i < 23; ++i) {
	        if (classScores[j][i] == "rand" || classScores[j][i] == "rand()" || classScores[j][i] == "var") {
				// do nothing
			}
			else if (classScores[j][i] != answers[i - 2]) {
	        	cout << classScores[j][i] << " ";
	    	}
	    }
	    cout << endl;
	}
	
	
	for (int i = 0; i < NUMBER_STUDENTS; ++i) { // Finds the class average
		classAverage = studentPercent[i] + classAverage;
	}
	classAverage = classAverage / NUMBER_STUDENTS;
	if (classAverage >= .90) {
			classAverageGrade = 'A';
		}
		else if (classAverage >= .80) {
			classAverageGrade = 'B';
		}
		else if (classAverage >= .70) {
			classAverageGrade = 'C';
		}
		else if (classAverage >= .60) {
			classAverageGrade = 'D';
		}
		else if (classAverage < .60) {
			classAverageGrade = 'F';
		}
	cout << endl << "Class Average: " << setprecision(1) << classAverage * 100 << percent << " " << classAverageGrade << endl;
	
	
	for (int j = 0; j < NUMBER_STUDENTS; ++j) { // Prints the students mistakes and grade on test to a new file.
	    outFS << classScores[j][0] << " " << classScores[j][1] << " " << "(Grade: " << studentGrade[j] << " Percent: " << fixed << setprecision(1) << studentPercent[j] * 100 << percent << ") ";
	    for (int i = 2; i < 23; ++i) {
	        if (classScores[j][i] == "rand" || classScores[j][i] == "rand()" || classScores[j][i] == "var") {
				// do nothing
			}
			else if (classScores[j][i] != answers[i - 2]) {
	        	outFS << classScores[j][i] << " ";
	    	}
	    }
	    outFS << endl;
	}
	outFS << endl << "Class Average: " << setprecision(1) << classAverage * 100 << percent << " " << classAverageGrade;
	
	
	
	
	
	
	/*
	for (int j = 0; j < NUMBER_STUDENTS; ++j) {
		allStudentPts = allStudentPts + studentPts[j];
	}
	cout << endl << allStudentPts;
	classAverage = ((NUMBER_QUESTIONS * NUMBER_STUDENTS) - (allStudentPts)) / (NUMBER_QUESTIONS * NUMBER_STUDENTS);
	cout << endl << classAverage;
	*/
}
	
// Left off with finding the class average. Line 120