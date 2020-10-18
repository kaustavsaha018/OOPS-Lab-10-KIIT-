#include <iostream>  
using namespace std;
class Shape{  
	protected:  
    	double x, y;  
  	public:  
    	void set_dimension(double i,double j=0) {  
      		x=i;  
      		y=j;  
    	}  
    	virtual void show_area(void) {  
      		cout << "Area cannot be Caluculated!";  
    	}  
};  
       
class Triangle : public Shape {  
	public:  
    	void show_area(void){   
        	cout<<"The area of the triangle is: ";  
        	cout<<x*0.5*y<<endl;  
      	}  
  };  
       
class Rectangle : public Shape {  
	public:  
    	void show_area(void) {  
        	cout<<"The area of the rectangle is: ";  
        	cout<<x*y<<endl;  
        }  
};  
       
class Circle : public Shape {  
	public:  
    	void show_area(void) {   
        	cout<<"The area of the circle is: ";  
        	cout<<3.14*x*x;  
      	}  
};  
       
int main(){  
	Shape *ptr;  
    Triangle t; 
    Rectangle r;  
    Circle c; 
       
    ptr=&t;  
    ptr->set_dimension(10.0, 5.0);  
    ptr->show_area();  
       
    ptr=&r;  
    ptr->set_dimension(10.0, 5.0);  
    ptr->show_area();  
       
    ptr=&c;  
    ptr->set_dimension(3.0);  
    ptr->show_area();  
       
    return 0;  
  }
