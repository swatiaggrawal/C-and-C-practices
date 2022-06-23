#include <iostream>
#include <cstring>
 
using namespace std;
 
struct Student {
   char name[20];
   int age;
   float marks;
   
};
void printdetails(struct Student *ptr);
 
int main() {
   struct Student ptr;        
 
  
   strcpy( ptr.name, "SWATI AGGRAWAL");
   ptr.age = 21;
   ptr.marks=90;

   printdetails(&ptr);
 
   

   return 0;
}
 
void printdetails(struct Student *ptr){
   cout << "Name : " << ptr->name <<endl;
   cout << "\n";
   cout << "Age : " << ptr->age <<endl;
   cout << "\n";
   cout << "Marks : " << ptr->marks <<endl;
   cout << "\n";
}