#include <iostream>
#include <cstring>
 
using namespace std;
 
struct Student {
   char  name[20];
   int age;
   float marks;
   
};
 
int main() {
   struct Student obj;        
 
  
   strcpy( obj.name, "SWATI AGGRAWAL");
   obj.age = 21;
   obj.marks=90;

   
   cout << "Name : " << obj.name <<endl;
   cout << "\n";
   cout << "Age : " << obj.age <<endl;
   cout << "\n";
   cout << "Marks : " << obj.marks <<endl;
   cout << "\n";
   

   return 0;
}
