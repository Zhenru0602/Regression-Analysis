#include<iostream> 
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    //cout.precision(4);                        //set precision
    //cout.setf(ios::fixed);
    int N;
    cout << "\nEnter the no. of data pairs to be entered:\n";        //To find the size of arrays that will store x,y, and z values
    cin >> N;
    double x[N],y[N];
    cout << "\nEnter the x-axis values:\n";                //Input x-values
    for (int i = 0;i < N;i++)
        cin >> x[i];
    cout<<"\nEnter the y-axis values:\n";                //Input y-values
    for (int i = 0;i < N;i++)
        cin>>y[i];
    char selection;
    cout << "\nPlease select your regression analysis type:\nA. Linear Regression\nB. Polynomial Fit Regression\n"
            "C.  Exponential Regression\n";      //Let user select regression type
    cin >> selection;
     if(selection == 'A' || selection == 'a'){          //apply linear regression
         //linearFunction(x,y);
         cout <<"linear";
     }
     else if(selection == 'B' || selection == 'b'){       //apply polynimial fit regression
        //polynomialFitFunction(x,y);
         cout<<"poly";
    }
    else if(selection == 'C' || selection == 'c'){             //apply Exponential Regression
        //Exponential Regression(x,y)
        cout<<"exponetial";
    }
    else{
        cout << "error";
    }
    return 0;
}
