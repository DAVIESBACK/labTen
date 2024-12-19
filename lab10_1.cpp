#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int total = 0;
	
	std::cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		std::cout << "Student [" <<total + 1<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			//Do something
			count[0]++;
			total++;
		}
		else if(grade == 'B'){
			// if grade is B
			//Do something
			count[1]++;
			total++;
		}
		//and so on ... for grade = C, D, F	
		else if(grade == 'C'){
			count[2]++;
			total++;
		}else if(grade == 'D'){
			count[3]++;
			total++;
		}else if(grade == 'F'){
			count[4]++;
            total++;
		
		// grade is wrong input
		//Do something
		}else if(grade != '0'){
			std::cout << "Wrong input. Please input again." << endl; 		
		} 
	}while(grade != '0');

	cout << "In total" <<total <<" students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F
	cout << "C = "<<count[2]<<", ";	
	cout << "D = "<<count[3]<<", ";
	cout << "F = "<<count[4]<<endl;

	return 0;
}

