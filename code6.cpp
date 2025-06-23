#include<iostream>
using namespace std;
class Triangle{
	private:
		int a_side;
		int b_side;
		int c_side;
	public:
		void input(){
		cout<<"enter the side of a"<<endl;
		cin>>a_side;
		cout<<"enter the side of b"<<endl;
		cin>>b_side;
		cout<<"enter the side of c"<<endl;
		cin>>c_side;
	}
	void Equilateral(){
		if(a_side == b_side && b_side == c_side && a_side == c_side)
		cout<<"the triangle is equilateral triangle"<<endl;
	}
		void Isoceles(){
		if(a_side == b_side && b_side != c_side && a_side != c_side)
		cout<<"the triangle is isoceles triangle"<<endl;
	}
		void Scalar(){
		if(a_side != b_side && b_side != c_side && a_side != c_side)
		cout<<"the triangle is scalar triangle"<<endl;
	}
};
int main(){
	Triangle t;
	t.input();
	t.Equilateral();
	t.Isoceles();
	t.Scalar();
}
