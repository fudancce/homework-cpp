#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <time.h>

using namespace std;

class newDate {
public:
	newDate(int year, int month, int day) {
		newYear = year;
		newMonth = month;
		newDay = day;
	}
	int operator- (const newDate &c2) const;
private:
	int newYear;
	int newMonth;
	int newDay;
};

int newDate::operator- (const newDate &c2) const {
	if (newYear >= c2.newYear) {
		int age = newYear - c2.newYear;
		if (newMonth >= c2.newMonth) {
			if ((newMonth == c2.newMonth)&&(newDay > c2.newDay)) {
				age--;
				return age;
			}
			else {
				return age;
			}
		}
		else {
			age--;
			return age;
		}
	}
	else {
		return -1;
	}
	
}

class MyException {
public:
	MyException(const string &message) : message(message) {}
	~MyException() {}
	const string &getMessage() const { return message; }
private:
	string message;
};

class idCode {
public:
	void putIdCode() {
		cout << "------ run putIdCode ------" << endl;
		char tmp;
		for (int i = 0; i < 18; i++) {
			cout << "Input your code: " << endl;
			tmp = getch();
			while (!(tmp >= '0' && tmp <= '9') && !(i == 17 && (tmp == 'x' || tmp =='X' ))) {
				system("cls");
				cout << "Your input is: " << tmp << endl;
				cout << "Please input a number" << endl;
				cout << "Input your code again: " << endl;
				tmp = getch();
			}
			system("cls");
			code += tmp;
			showIdCode();
		}
	}

	string getIdCode() {
		return code;
	}

	void showIdCode() {
			cout << "------idCode is: " << code << " ------" << endl;
	}

	string getBirthday() {
		return code.substr(6, 4) + "年" + code.substr(10, 2) + "月" + code.substr(12, 2) + "日";//字符串截取6-13位;
	}

	int getAge() {
		//获取当前计算机时间
		time_t now = time(0);
		tm *ltm = localtime(&now);
		newDate currentDate(1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);

		//截取身份证时间
		newDate codeDate(atoi(code.substr(6, 4).c_str()), atoi(code.substr(10, 2).c_str()), atoi(code.substr(12, 2).c_str()));

		return currentDate - codeDate;//当前时间-身份证时间
	}


	bool validate() throw (MyException){
		int weight[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
		char validate[] = { '1','0','X','9','8','7','6','5','4','3','2' };
		int sum = 0;
		int mode = 0;
		if (code.length() == 18) {
			for (int i = 0; i < code.length() - 1; i++) {
				sum = sum + (code[i] - '0') * weight[i];
			}
			mode = sum % 11;
			if (validate[mode] == code[17]) {
				return true;
			}
		}
		throw MyException("IDCode Validate ERROR!");
		return false;
	}

private:
	//例子31011419930721007x
	string code;

};


int main()
{
	idCode myId;

	myId.putIdCode();
	try{
		myId.validate();
	}
	catch (MyException &e) {
		cout << "错误信息为： " << e.getMessage() << endl;
	}

	cout << "生日是： " << myId.getBirthday() << endl;
	cout << "年龄是： " << myId.getAge() << endl;

	cout << "\nPlease press any key to exit:" << endl;
	int a;
	a = getch();

    return 0;
}

