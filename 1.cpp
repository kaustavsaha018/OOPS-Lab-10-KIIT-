#include <iostream>  
using namespace std;

class Shape{  
	protected:  
    		double area;
  	public:    
    	virtual void show_area(void) {  
      		cout << "Area is: "<<area<<endl;
    	}  
};  
       
class Triangle:public Shape{  
	protected:
		double base,height;
	public:  
    	Triangle(double base, double height){
    		this->base=base;
    		this->height=height;
		}	
		void show_area(void){
			area=0.5*base*height;   
        	cout<<"The area of the triangle is: ";  
        	cout<<area<<endl;  
      	}  
};  
       
class Rectangle:public Shape{  
	protected:
		double length, breadth;
	public:  
		Rectangle(double length, double breadth){
			this->breadth=breadth;
			this->length=length;
		}		
    	void show_area(void){
			area=length*breadth;  
        	cout<<"The area of the rectangle is: ";  
        	cout<<area<<endl;  
        }  
};  
       
class Circle:public Shape{  
	protected:
		double radius;
	public:
		Circle(double radius){
			this->radius=radius;
		}  	
    	void show_area(void){   
    		area=3.14*radius*radius;
        	cout<<"The area of the circle is: ";  
        	cout<<area<<endl;  
      	}  
};  
       
int main(){  
    Shape *ptr;  
    Triangle t(10.0, 5.0); 
    Rectangle r(10.0, 5.0);  
    Circle c(3.0); 
       
    ptr=&t;  
    ptr->show_area();  
       
    ptr=&r;   
    ptr->show_area();  
       
    ptr=&c;  
    ptr->show_area();  
       
    return 0;  
  }
