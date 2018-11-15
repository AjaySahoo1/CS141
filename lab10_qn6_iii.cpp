//Include library
#include <iostream>

using namespace std;
 enum scale {ounces, kilograms};

 class ZooAnimal  
   {
    //Define variables
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
      //Different member functions
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void isMotherOf (ZooAnimal&);
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate () {return weightDate;};
      int daysSinceLastWeighed (int today);
   };
   //Defining the member functions
void ZooAnimal::Create(char* x,int y, int z,int a)
{
    name=x;
    cageNumber=y;
    weightDate=z;
    weight=a;
}
void ZooAnimal::isMotherOf(ZooAnimal& a1)
{
    mother=&a1;
}

int main()
{
    ZooAnimal bozo;//Declaring an object of the class
    //Using the member functions
    bozo.Create("Bozo",12,29,55);
    bozo.isMotherOf(bozo);

    return 0;
}
