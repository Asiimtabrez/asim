#include<iostream>
using namespace std;
class student{
	private:
		int s1,s2,s3,s4,s5;
		float per;
		public:
			string name;
			int roll;
			 int year;
			student()
			{
		s1=s2=s3=s4=s5=0;
		per=0.0;
			}
			void classper(int a,int b,int c,int d,int e){
					s1=a;s2=b;s3=c;s4=d;s5=e;
			per=(s1+s2+s3+s4+s5)/5.0;
			displayper();
			}
			void displayper(){
				cout<<"percentage"<<per<<"%"<<endl;
			}
};
int main(){
	student stud;
		stud.name="asim.tabrez";
	cout<<"Name="<<stud.name<<endl;
	stud.roll=01;
	cout<<"Roll Number is ="<<stud.roll<<endl;
	stud.year=2022;
	cout<<"year of joining="<<stud.year<<endl;
	stud.classper(98,85,93,86,76);
	stud.displayper();

}
