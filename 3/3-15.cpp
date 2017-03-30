#include <iostream>

using namespace std;


int getPower(int x, int y) {
	if (y == 1) {
		return x;
	}
	else if(y == -1) {
		return 1 / x;
	}
	else if (y == 0) {
		return 1;
	}

	return y > 0 ? x*getPower(x, y - 1) : (1 / x)*getPower(x, y + 1);
}
double getPower(double x, double y) {
	if (y == 1) {
		return x;
	}
	else if (y == -1) {
		return 1 / x;
	}
	else if (y == 0) {
		return 1;
	}
	return y > 0 ? x*getPower(x, y - 1) : (1 / x)*getPower(x, y + 1);
}
int sumFunction(int x, int y) {
	return x + y;
}

int main()
{
	int a=0,m = 0;
	double b=0;
	
	cout << "输入整数a作为底数:";
	cin >> a;
	cout << "输入实数b作为底数:";
	cin >> b;
	cout << "输入整数m作为指数";
	cin >> m;

	cout << "a的m次方为：" << getPower(a, m) <<"\n"<< "b的m次方为:" << getPower(b, (double)m) << endl;
	cout << "请按任意键退出程序...";
	cin >> m;
    return 0;
}
