#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

class File{
	private:
		std::string name;
		double size;
		
		static int numOfFiles;
	
	public:
		std::string getName(){return name;}
		void setName(std::string name){ this->name = name;}
		void getSize(){ return size;}
		void setSize(double size){ this->size = size;}
		
		void setAll(std::string,double);
		File(std::string, double);
		File();
		static int getNumOfFiles(){return numOfFiles;}
		void toString();
};

int File::numOfFiles = 0;
void  File::setAll(std::string name, double size){
	
	this->name = name;
	this->size = size;
	File::numOfFiles++;
	
}
void  File::File(std::string name, double size){
	
	this->name = name;
	this->size = size;
	File::numOfFiles++;
	
}

File::File(){
	
	this->name = "";
	this->size = 0;
	File::numOfFiles++;
	File::numOfFiles++;
	
	
}

File::~File(){
	std::cout << "File" << this->name << "destroyed\n";
	
}

File::toString(){
	
	std::cout << "File" << this->name << "is" << 
	this->name << "named"
	this-> size << "mb in size\n";
	
}

class fileTypeA: public File{
	private:
		std:string type = "exe";
	public:
		void isType(){
			std::cout << "The file"
			<< this->getName() << "is" << 
			this->type << "\n";
		}
		fileTypeA(std::string, double, std::string);
		fileTypeA:File(){};
		void toString();
		
		
};


fileTypeA::fileTypeA(std::string name, double size, std::string type) :
		File(name,height, weight){
			this->type = type;
		}
			
void fileTypeA::toString(){
		
	std::cout << "File" << getName() << "size is" << 
	geSize() << "mb" <<
	this->type <<"\n"<<;
	
}


int main()
{
	
	File fileApp;
	fileApp.toString();
	fileApp.setSize(33);
	fileApp.setName("appTest1");
	fileApp.toString()
	
	File fileExe("programA",35);
	fileExe.toString();
	File fileTxt("testCode",25,"Yes");
	fileTxt.toString();
	
	std::cout<< "Number of Files" <<
	File::getNumOfFiles() <<"\n";
	
	return 0;
}
