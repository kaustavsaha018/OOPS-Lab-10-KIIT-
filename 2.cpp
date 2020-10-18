#include <iostream>  
#include <string.h>
using namespace std;
class Media{  
	protected:  
		string title;
    	double price;  
  	public:  
    	void getData(string title,double price) {  
      		this->title=title;
			this->price=price;   
    	}  
    	virtual void show_Details(void) {  
      		cout<<"Not Defined!";  
    	}  
};  
       
class Book : public Media {  
	protected:
		int no_of_pages;
	public: 
		Book(int no_of_pages){
			this->no_of_pages=no_of_pages;
		}  
    	void show_Details(void){   
        	cout<<"BOOK DETAILS:- "<<endl;
			cout<<"Title: "<<title;
			cout<<endl<<"Price: "<<price<<endl;
			cout<<"No. of Pages: "<<no_of_pages<<" pages"<<endl;
      	}  
  };  
       
class Tape : public Media {  
	protected:
		int run_time;
	public:
		Tape(int run_time){
			this->run_time=run_time;
		} 
    	void show_Details(void) {  
        	cout<<"TAPE DETAILS:- "<<endl;
			cout<<"Title: "<<title;
			cout<<endl<<"Price: "<<price<<endl;
			cout<<"Run-Time (in min): "<<run_time<<" mins"<<endl; 
        }  
};  
       
class CD : public Media {  
	protected:
		float capacity_in_GB;
	public:  
		CD(float capacity_in_GB){
			this->capacity_in_GB=capacity_in_GB;
		}
    	void show_Details(void) {   
        	cout<<"CD:- "<<endl;
			cout<<"Title: "<<title<<endl<<"Price: "<<price<<endl;
			cout<<"Capacity (in GB): "<<capacity_in_GB<<" GB";  
      	}  
};  
       
int main(){  
	Media *ptr;  
    Book b(50); 
    Tape t(300);  
    CD c(4.5); 
       
    
	ptr=&b;  
    ptr->getData("RD SHARMA",500);
 	ptr->show_Details();
 	cout<<endl;
       
    ptr=&t; 
	ptr->getData("ALAN WALKER",100);
 	ptr->show_Details();
	cout<<endl; 
   
       
    ptr=&c; 
	ptr->getData("AVENGERS ENDGAME",1500);
 	ptr->show_Details(); 
 	cout<<endl;  
       
    return 0;  
  }
