
/* Q1.take input from user and calculate area of the cirlce*/

#include <iostream>
using namespace std;
int main(){ 
    float radius;
    cin>>radius;
    float area = 3.14*radius*radius;
    cout<<area<<endl;
}


    /* or method 2 */

#include <iostream>
using namespace std;
int main(){
    cout<<"enter the radius :";  // cout means print 
    float radius;    // radius is variable(box) to store value
    cin>>radius;     // means enter the value in box 
    float area = 3.14*radius*radius;  // float area is a new box which store that eq
    cout<<area<<endl; 
}

/*===============================================================================================================*/

/*Q2. CALCULATE THE VALUE PF THE SPHERE*/

#include <iostream>
using namespace std;
int main(){
    cout<<"enter the radius :";
    float r ;
    cin>>r;
    float volume = 4/3*3.14*r*r*r;
    cout<<"volume of the sphere: "<<volume<<endl;

}
/*===============================================================================================================*/


/*Q.3 SQUARE OF A NUMBER */

#include <iostream>
using namespace std;
int main (){
    cout<<"enter the num:";
    int num;
    cin>>num;
    int square = num*num;
    cout<<"square of the num : "<<square<<endl;

}
/*===============================================================================================================*/

