#include<iostream>
using namespace std;
const float PI = 3.14;
class circle
{
   public:
	   void setR(double m)
	   {
		   r = m;
	   }
	   void computeCSZ(double R)
	   {
		   s = R * R * PI;
		   z = 2 * PI * R;
	   }
	   void printCSZ()
	   {
		   cout << "圆的面积：" <<s<<" 圆的周长："<<z<< endl;
	   }
private:double r; double s; double z;
};
class jux
{
public:
	void setL(double m,double n)
	{
		L= m;
		K = n;
	}
	void computeJSZ(double L,double K)
	{
		S = L * K;
		Z = 2 * (L + K);
	}
	void printJSZ()
	{
		cout << "矩形的面积：" << S<<" 矩形的周长"<<Z<< endl;
	}
private:double L; double K; double S; double Z;
};
int main()
{
	double R,len1,len2;
	circle C1, C2;
	jux L1, L2;
	C1.computeCSZ(3.5);
	C1.printCSZ();
	L1.computeJSZ(9.6, 1.79);
	L1.printJSZ();
	cout << "请输入圆的半径：" << endl;
	cin >> R;
	C2.setR(R);
	C2.computeCSZ(R);
	C2.printCSZ();
	cout << "请输入矩形的长、宽：" << endl;
	cin >> len1>>len2;
	L2.setL(len1, len2);
	L2.computeJSZ(len1, len2);
	L2.printJSZ();
	return 0;
}