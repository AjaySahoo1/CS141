#include <iostream>

using namespace std;

class Rectangle {
   public:
      double len;        // side1 of a box
      double bre;        // side2 of a box

      // Member functions declaration
      double getArea(void);
      double getPerimeter(void);
      void setLength( double l );
      void setBreadth( double b );
};

// Member functions definitions
double Rectangle::getArea(void) {
   return len*bre;
}
double Rectangle::getPerimeter(void) {
   return 2*(len+bre);
}

void Rectangle::setLength( double l ) {
    len= l;
}
void Rectangle::setBreadth( double b ) {
   bre = b;
}


// Main function for the program
int main() {
   Rectangle r1,r2;                // Declare r1,r2 of type Rectangle
   double area1 = 0.0;     // Store the area of a Rectangle1 here
   double area2 = 0.0;     // Store the area of a Rectangle2 here
   double perimeter1=0.0;  // Store the perimeter of a Rectangle1 here
   double perimeter2=0.0;  // Store the perimeter of a Rectangle2 here
   //Declare variables for user input
   double l1,l2,b1,b2;
   cout<<"Enter length of one rectangle"<<endl;
   cin>>l1;
   cout<<"Enter breadth side of rectangle"<<endl;
   cin>>b1; 
   cout<<"Enter length of another rectangle"<<endl;
   cin>>l2;
   cout<<"Enter breadth side of rectangle"<<endl;
   cin>>b2; 
 
 
   // R1 specification
   r1.setLength(l1); 
   r1.setBreadth(b1); 

   // R1 specification
   r2.setLength(l2); 
   r2.setBreadth(b2); 

   // area of box 1
   area1 = r1.getArea();
   cout << "Area of rectangle1 : " << area1 <<endl;

   // perimeter of box 2
   perimeter1 = r1.getPerimeter();
  cout << "Perimeter of rectangle1 : " << perimeter1 <<endl;

    // area of box 1
   area2 = r2.getArea();
   cout << "Area of rectangle1 : " << area2 <<endl;

   // perimeter of box 2
   perimeter2 = r2.getPerimeter();
   cout << "Perimeter of rectangle1 : " << perimeter2 <<endl;

//compare areas
if(area1==area2)
cout<<"Both has same area"<<endl;
else if(area1>area2)
cout<<"1st rectangle has more area"<<endl;
else
cout<<"2nd rectangle has more area"<<endl;

//compare perimeters
if(perimeter1==perimeter2)
cout<<"Both has same perimeter"<<endl;
else if(perimeter1>perimeter2)
cout<<"1st rectangle has more perimeter"<<endl;
else
cout<<"2nd rectangle has more perimeter"<<endl;
   return 0;
}
