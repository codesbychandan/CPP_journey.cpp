/* TO TAKE INPUT FROM USER WE USE 'cin>>'*/


/* Q.take input from user and calculate area of the cirlce*/

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




