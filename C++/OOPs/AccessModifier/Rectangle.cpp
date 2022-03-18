#include <iostream>
using namespace std;

class Rectangle{
    private:
        int len,br;
    
    public:
        void getData(){
            cout << "Enter length and breadth : \n";
            cin >> len >> br;
        }
    
    private:
        calc_area(){
            return len*br;
        }

    public:
        void showData(){
            int area= calc_area();
            cout << "Length = " << len << "\nBreadth = " << br << "\nArea = " << area;

        }
};

/*int main(){
    Rectangle r;
    r.getData();
    r.showData();
                                                            // static
    return 0;
}  */

int main(){
    Rectangle *r;
    r = new Rectangle;
    r->getData();
    r->showData();
}

