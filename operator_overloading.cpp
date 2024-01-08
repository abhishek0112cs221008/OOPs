#include <iostream>
using namespace std;

class Distance {
   private:
      int meters;
      int centimeters;
      int millimeters;

   public:
      Distance() {
         meters = 0;
         centimeters = 0;
         millimeters = 0;
      }

      Distance(int m, int cm, int mm) {
         meters = m;
         centimeters = cm;
         millimeters = mm;
      }

      Distance operator+(Distance const &obj) {
         Distance res;
         res.meters = meters + obj.meters;
         res.centimeters = centimeters + obj.centimeters;
         res.millimeters = millimeters + obj.millimeters;

         if (res.millimeters >= 10) {
            res.centimeters += res.millimeters / 10;
            res.millimeters %= 10;
         }

         if (res.centimeters >= 100) {
            res.meters += res.centimeters / 100;
            res.centimeters %= 100;
         }

         return res;
      }

      Distance operator-(Distance const &obj) {
         Distance res;
         res.meters = meters - obj.meters;
         res.centimeters = centimeters - obj.centimeters;
         res.millimeters = millimeters - obj.millimeters;

         if (res.millimeters < 0) {
            res.centimeters -= 1;
            res.millimeters += 10;
         }

         if (res.centimeters < 0) {
            res.meters -= 1;
            res.centimeters += 100;
         }

         return res;
      }

      void display() {
         cout << "Meters: " << meters << endl
              << "Centimeters: " << centimeters << endl
              << "Millimeters: " << millimeters << endl
              << endl;
      }
};

int main() {
   Distance d1(2, 50, 5);
   Distance d2(1, 75, 8);
   Distance d3;

   d3 = d1 + d2; // Overloaded '+' operator
   cout << "d1 + d2 = ";
   d3.display();

   d3 = d1 - d2; // Overloaded '-' operator
   cout << "d1 - d2 = ";
   d3.display();

   return 0;
}

