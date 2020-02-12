Name Jeet Kumar Patidar
reg  11900624
roll 19

#include<iostream.h>
#include<conio.h>
class area
{
    private:
	 float r;
    public:
	 area();
	 void get(float a)
	 {
	      r=a;
	 }
	 void disp()
	 {
	    cout<<"Area of a circle = "<<r*r*3.14<<endl;
	 }
	 friend void frd();
};
area :: area()
{
    this->r=r;
}
void frd()
{
   area ob;
   float a;
   cout<<"Enter radius: ";
   cin>>a;
   ob.get(a);
   ob.disp();
}
void main()
{
   clrscr();
   frd();
   getch();
}





