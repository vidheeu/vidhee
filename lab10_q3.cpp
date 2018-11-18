#include <iostream>
using namespace std;
class Rectangle // Class Rectangle
{
	public:
	Rectangle(float L=1, float W=1); // Constructor
	float getLength() const; //{return length;}
	void setLength(float L);//{length = L;}
	float getWidth()const;// {return width;}
	void setWidth(float W);//{width = W;}
	float perimeter(float ,float);/*{return (length*2 + width*2);}*/ // Perimeter function
	float area (float, float);/*{return (length*width);}*/ // Area funcion
		
private:
	float length, width;
		}; // End of class Rectangle

Rectangle::Rectangle(float L, float W) // Scope function
{
setLength(L);
setWidth(W);
}

void Rectangle::setWidth(float W)//I'd like to change this to a do/ while loop??
{
if ((W < 0.0) || (W > 20.0))   
     {  
        width = 1.0;
     }  
     else 
        {  
          width = W;  
        }  
   return;  
}
float Rectangle::getWidth()const
{
	return width;
}

void Rectangle::setLength(float L)//same here-do/while loop?
{
if ((L < 0.0) || (L > 20.0))   
     {  
        length = 1.0;
     }  
     else 
        {  
          length = L;  
        }  
   return;  
}
float Rectangle::getLength()const
{
	return length;
}


float Rectangle::perimeter(float L, float W)
{
return((2*L) + (2*W));
//cout << "The perimeter of the rectangle is: " << perimeter << endl;
}

float Rectangle::area(float L, float W)
{
return(L*W);
//cout << "The area of the rectangle is :  " << area << endl;
}

int main() 
{
float length, width;
Rectangle MyRectangle;

cout << "Enter The Length Of The Rectangle: ";
cin >> length;

cout << "Enter The Width Of Rectangle: ";
cin >> width;

cout <<"The area of the rectangle is : "<< MyRectangle.area(length, width) << endl;
cout <<"The perimeter is: " <<MyRectangle.perimeter(length, width)<<endl;

return 0 ;
} // End of main()

