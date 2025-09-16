#pragma once
#include <string>
 
class Soldier {
private:
	int ID;
	std::wstring Name;
	int Age;
	std::wstring Rank;
public:
	Soldier() {
		ID = 0;
		Name = L"";
		Age = 0;
		Rank = L"";
	}
	Soldier(int s_ID, std::wstring s_Name, int s_Age, std::wstring s_Rank) {
		ID = s_ID;
		Name = s_Name;
		Age = s_Age;
		Rank = s_Rank;
	}

	void readFromConsole();
	void writeToConsole() const;
	bool readFromFile(std::wifstream& in);
	void writeToFile(std::wofstream& out) const;
};