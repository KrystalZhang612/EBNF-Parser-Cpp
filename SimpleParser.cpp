#include <iostream>
using namespace std;


//there must not be 'cd'
//there can be only 'c' or 'd' 
//if there is neither c nor d, syntax error at char_pos = 0


class SimpleParser{
	
	
private:
	
	
	string input; 
	
	int char_pos; 
	
public:
	
	void initializer(string input){
		
		char_pos = -1; 
	
		
	}


	void fun_s(string input){
		
		
		char CharC = 'c';
		
		char CharD = 'd'; 
		
	
		char_pos = input.find(CharD);


	
		//if there is c and d
		
		//input is valid 
		
		if (fun_x(input)) {
			
			cout<<"Input is valid"<<endl; 
		}
		
		
		//if there is consecutive cd
		
		else if ((input.find(CharC) != string::npos)&&( input.find(CharD) != string::npos)){
			
		cout<<"Syntax error at character position "<<char_pos<<endl; 
	
		}
		
		//if there is no c nor d at all
		
		else if ((input.find(CharC) == string::npos)&&( input.find(CharD) == string::npos)){
			
		cout<<"Syntax error at character position 0"<<endl; 	
		}
			
	
	}
	
	
	
	
	//check if there is c or d in the input string 
	//but cannot occur both c and d consecutive or adjacent 
	
	bool fun_x(string input){
		
		char CharC = 'c';
		
		char CharD = 'd'; 

		if ((input.find(CharC) != string::npos)&&( input.find(CharD) == string::npos))
			
			return true; 
		
		else if ((input.find(CharC) == string::npos)&&( input.find(CharD) != string::npos))
			
			return true; 
		
		else return false; 
		
			
	}
		
		
	
	
	char get_next_char(string input){
		
		for(char_pos = 0; char_pos <= sizeof(input); char_pos++){
			
			if(fun_x(input)){
				
				char_pos = char_pos+1;
			
			}

		}
		return input[char_pos];
	}

	
}; 



//Driver test 


int main(int argc, char *argv[]) {
	
	
	
	SimpleParser sp; 
	
	string test1 = "bc";

	sp.fun_s(test1); 
	

	string test2 = "acd";
	
	sp.fun_s(test2); 
	
	
	string test3 = "aaad";
	
	sp.fun_s(test3); 
	
	
	string test4 = "c";

	sp.fun_s(test4); 
	
	
	string test5 = "2yz";

	sp.fun_s(test5); 
	
	string test6 = "";
	
	sp.fun_s(test6); 
	
	//List of Extra Test Cases Used for Debugging:

	
	string test7 = "bbcc";
	
	sp.fun_s(test7); 
	
	
	string test8 = "cccddc";
	
	sp.fun_s(test8); 
	
	
	string test9 = "..";
	
	sp.fun_s(test9); 
	
	//outputs for extra tests:
	
	//Input is valid
	//Syntax error at character position 3
	//Syntax error at character position 0

	
}

	