#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Journal {
public:

	Journal(string name, string surname, string address, int phoneNumber, int birthday) {

		this->name = name;
		row.push_back(name);

		this->surname = surname;
		row.push_back(surname);

		this->address = address;
		row.push_back(address);

		this->phoneNumber = phoneNumber;
		row.push_back(to_string(phoneNumber));

		this->birthday = birthday;
		row.push_back(to_string(birthday));

		dataBase.push_back(row);

		row.clear();

	}

	string getName() {
		return this->name;
	}

	string getSurname() {
		return this->surname;
	}

	string getAddress() {
		return this->address;
	}

	int getPhoneNumber() {
		return this->phoneNumber;
	}

	int getBirthday() {
		return this->birthday;
	}

	void setName(string name) {
		name = this->name;
	}

	void setSurname(string surName) {
		name = this->surname;
	}

	void setAddress(string address) {
		address = this->address;
	}

	void setPhoneNumber(int phoneNumber) {
		phoneNumber = this->phoneNumber;
	}

	void setBirthday(int birthday) {
		birthday = this->birthday;
	}

	vector<string> getRow() {
		return row;
	}

	vector<vector<string>> getDataBase() {
		return this->dataBase;
	}

	void showDataBase() {
		for (int i = 0; i < dataBase.size(); i++) {
			for (int j = 0; j < row.size(); j++) {
				cout << dataBase[i][j];
			}
			cout << endl;
		}
	}

private:

	vector<vector<string>> dataBase;
	vector<string> row;
	string name;
	string surname;
	string address;
	int phoneNumber;
	int birthday;

};

class Programmers : public Journal {
public:

	Programmers(string name, string surname, string address, int phoneNumber, int birthday, string group, int mark)
		: Journal(name, surname, address, phoneNumber, birthday), group(group), mark(mark) {
		getRow().push_back(group);
		getRow().push_back(to_string(mark));
		getDataBase().push_back(getRow());
		getRow().clear();
	}
	
	string getGroup() {
		return this->group;
	}

	int getMark() {
		return this->mark;
	}

	void setGroup(string group) {
		this->group = group;
	}

	void setMark(int mark) {
		this->mark = mark;
	}

private:

	string group;
	int mark;

};

int main() {

	Journal member1("Andriy", "Chepel", "Lvivska 9", 3809999999, 04122005);
	member1.showDataBase();

	return 0;

}