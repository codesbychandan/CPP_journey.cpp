
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



#include <iostream>
using namespace std;
int main(){
    cout<<"enter the  num :";
    int num;
    cin>>num;
    int sq = num*num;
    cout<<"square of the number is:"<<sq;

}


/* Q. take two num and print their sum*/

#include <iostream>
using namespace std;
int main (){
    cout<<"enter the first num :";
    int num1 ;
    cin>>num1;
    cout<<"enter the 2nd num:";
    int num2;
    cin>>num2;
    cout<<"sum of the num is :"<<num1+num2;
}

// another way to solve it 
#include <iostream>
using namespace std;
int main (){
    cout<<" Enter the numbers :";
    int a , b; // a and b are variable to store the value
    cin>>a>>b; // taking input for both variables
    int sum = a +b;
    cout<<"the sum of the numbers is : "<<sum;

}








