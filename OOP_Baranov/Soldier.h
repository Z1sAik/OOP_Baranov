#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Soldier {
private:
	static int NextID;
	int ID;
	std::wstring Name;
	std::wstring Surname;
	int Age;
	int RankID;

public:

    Soldier() {
        ID = ++NextID;
        Name = L"";
        Surname = L"";
        Age = 0;
        RankID = 0;
    }

    Soldier(std::wstring s_Name, std::wstring s_Surname, int s_Age, int s_RankID) {
        ID = ++NextID;
        Name = s_Name;
        Surname = s_Surname;
        Age = s_Age;
        RankID = s_RankID;
    }

    friend std::wostream& operator<<(std::wostream& out, const Soldier& s);
    friend std::wistream& operator>>(std::wistream& in, Soldier& s);
    friend std::wofstream& operator<<(std::wofstream& fout, const Soldier& s);
    friend std::wifstream& operator>>(std::wifstream& fin, Soldier& s);
    static std::wstring rankToString(int id);
};