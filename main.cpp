#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
class file 
{
	ifstream fIn ;
	ofstream fOut;
	public:
  
		vector <int> numbers;
	
	file();
	~file();
	
	void showTable();
	void wee();
	void min();
	void max();
	void sum();
	void avg();
};

file::file()
{
	fOut.open("polska.txt");
	fIn.open("numbers.txt");
	int temp;
	while(!fIn.eof())
  {
		fIn>>temp;
		numbers.push_back(temp);
	}
}
file::~file()
{
	fIn.close();
	fOut.close();
}



void file::showTable()
{
	for(int i = 0; i < numbers.size(); i++)
  {
		fOut<<numbers[i]<< " ";
	}
	fOut<<endl;
}

void file::wee(){
	sort(numbers.begin(), numbers.end());
	
}

void file::min()
{
	fOut<<"min: "<<numbers[0]<<endl;
}

void file::max()
{
	fOut<<"min: "<<numbers[numbers.size() -1]<<endl;
}

void file::sum()
{
	int sum = 0;
	for(int i = 0; i<numbers.size(); i++)
  {
		sum += numbers[i];
	}
	fOut<<"Suma: "<<sum<<endl;
}

void file::avg(){
	double count = numbers.size();
	int sum = 0;
	for(int i = 0; i<numbers.size(); i++)
  {
		sum += numbers[i];
	}
	
	fOut<<"Srednia: "<<sum/count<<endl;
}

int main(int argc, char** argv)

{
	
	file f;
	f.wee();
	f.showTable();
	f.min();
	f.max();
	f.sum();
	f.avg();
	return 0;
}
