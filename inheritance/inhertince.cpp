#include <iostream>
using namespace std;
class aastuStudent{
private:
	string Name;
	int Id;
	int Block;
	string Department;
public:
	aastuStudent(string name,int id, int block){
		string Name = name;
		Id = id;
		Block = block;
		
	}
	void getInfo(){
		
		cout << "ID : " << Id << endl;
		cout << "BLOCK : " << Block << endl;
		cout << "DEPARTEMENT : " << Department << endl;
	}
    
};
class software:public aastuStudent{
	public:
		software(string name,int id , int block):aastuStudent(name,id,block){
			
		}
	
};
int main(){
//	aastuStudent student1 ("mikiyas",1087,16,"software") ;
//	student1.getInfo();
	software ss1("nati",1097,17);
	ss1.getInfo();
	
	
	
	return 0;
}
