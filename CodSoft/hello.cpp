//Q1. Print Hello World

/*#include<iostream>
using namespace std;
int main(){
    cout<<"Hello Priya"<< endl; 
    cout<<"Welcome to Programming";
}
*/

//Q2. Write a Program to Read and Print Number Input From the User.

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
}
*/

//Q3. Write a Program to Print the ASCII Value of a Character.

/*#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter a character : ";
    cin>>ch;
    cout<<"The ASCII value of " <<ch<<" is "<<int(ch) <<endl;
}
*/

//Q4. Write a Program to Swap Two Numbers.

/*#include<iostream>
using namespace std;
int main(){
   int a = 2,  b = 3;
   cout<<"Before Swapping a = "<<a<<endl;
 
     cout<<"Before Swapping b = "<<b<<endl;
     

     int temp = a;
     a = b;
     b= temp;
     cout<<"After Swapping a = "<<a<<endl;
    cout<<"After Swapping b = "<<b<<endl;
}
*/

   //or

/*#include<iostream>
using namespace std;
int main(){
   int a = 2,  b = 3;
   cout<<"Before Swapping a = ";
   cout<<a;
     cout<<"Before Swapping b = ";
     cout<<b;

     int temp;
     temp = a;
     a = b;
     b= temp;
     cout<<"After Swapping a = ";
     cout<<a;
     cout<<"After Swapping b = ";
     cout<<b;
   
}
*/

//Q5. Write a Program to Find the Size of int, float, double, and char.

/*#include<iostream>
using  namespace std;
int main(){
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    cout<<"Size of int is : " ;
    cout<<sizeof(integerType)<<"\n";

    cout<<"Size of char is : " ;
    cout<<sizeof(charType)<<"\n";

    cout<<"Size of float is : " ;
    cout<<sizeof(floatType)<<"\n";

      cout<<"Size of double is : " ;
    cout<<sizeof(doubleType)<<"\n";
     
}
*/

//Q6. Write a Program to Find Compound Interest.

/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal = 10000, rate = 5, time = 2;

    double A = principal * pow((1 + rate / 100), time);
    double CI = A - principal;
    cout << "Compound Interest is " << CI;

    return 0;
}
*/
//Q7. Write a Program to Check Even or Odd Integers.

/*#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number to check : ";
    cin>>a;
    if(a%2==0){
    cout<<"Given no is Even";
    }
else{
    cout<<"Given no is Odd";
}
}
*/

//Q8. Write a Program to Find the Largest Among 3 Numbers.
 

/*#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << "a is the greatest";
    }
    else if (b > a && b > c) {
        cout << "b is the greatest";
    }
    else {
        cout << "c is the greatest";
    }

    return 0;
}
*/

//Q9. Write a Program to Check if a Given Year Is a Leap Year.

/*#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year : ";
    cin>>year;

if(year%400==0 || (year%4==0 && year%100!=0)){
    cout<<"Given year is leap year";
}
else{
    cout<<"Given is not a leap year";
}
}
*/

//Q10. Write a Program to Check Whether a Number Is Prime or Not.

/*#include<iostream>
using namespace std;

bool isPrime(int num){
    if (num<=1)return false;
    for(int i=2; i*i <=num; i++){
        if(num % i ==0) return false;
    }
    return true;
}

/*int main(){
    int num;
    cout<<"Enter no to check : ";
    cin>> num;

    if(isPrime(num)){
        cout<< num<< " is a prime number." << endl;
    }else{
         cout<< num<< " is not a prime number." << endl;
    }
return 0;
}

*/

#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter n: ";
    cin>>n;
    bool flag = true;
    for(int i = 2; i<=n/2 ; i++){
        if(n%i==0){
            flag = false; 
            break;
        }
    }
    if(n==1) cout<<"Neither Prime Nor Composite";
    else if (flag == true) cout<<"Prime";
    else cout<<"Composite";
}


//Q11. Write a Program to Check Whether a Number Is a Palindrome or Not.

