#include <iostream>
#include <fstream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::stringstream converter;
	std::string currentLine;

	std::string sNum1;
	std::string sNum2;
	std::string text;

	int num1;
	int num2;
	int sum;

	inFile.open("data.csv");
	while(getline(inFile, currentLine)){
		converter.clear();
		converter.str(currentLine);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, text);
		
		converter.clear();
		converter.str("");
		converter << sNum1 << " " << sNum2;
		converter >> num1 >> num2;

		sum = num1 + num2;

		for (int i = 0; i < sum; i++) {
        std::cout << text << " ";
        }
        std::cout << std::endl;
    }

    inFile.close();
    return 0;
}
