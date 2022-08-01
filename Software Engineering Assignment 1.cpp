// Looking for Fermat's Last Theorem
// Programmer Name 1: Naveen Madupoju
// Programmer Name 2: Praneeth Somisetty
//Programmer 1 EmailAddress: NaveenMadupoju@lewisu.edu
//Programmer 2 EmailAddress: PraneethSomisetty@lewisu.edu
// In this program we are calculatibng the equation and finding the nearest miss

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    
    int arr[5]; 
    int x,y,z,n;
    int lowerk = 10;
    int upperk = 15;
    bool flag = false;
    //solving the equations 5 times, with different values of x, y and n
    for (int i =0; i<5; i++)
    {
        //While loop to check either user input for x is in range
        while(flag!=true)
        {
            cout<<" Value of X ::  ";
            cin>>x;
            //condition to check range
            if(x>=lowerk && x<=upperk)
            {
                flag = true; // if flag will be true it means user input is accurate
            }
        }
        flag = false;
        //While loop to check either user input for y is in range
        while(flag!=true)
        {
            cout<<" Value of Y ::  ";
            cin>>y;
            //condition to check range
            if(y>=lowerk && y<=upperk)
            {
                flag = true; // if flag will be true it means user input is accurate
            }   
        }
        flag = false;
        //While loop to check either user input for n is greater than 2
        while(flag!=true)
        {
            cout<<" Value of n ::  ";
            cin>>n;
            if(n>2)
            {
                flag = true; // if flag will be true it means user input is accurate
            }
        }
        flag = false;
        //This chunk of code is main logic of the code
        //Where equation is being solved
        long sumxy = (int) (pow (x, n) + pow (y, n));
        z = (int) pow (sumxy, 1.0/n);
        //Calculating the near miss
        int miss = sumxy - pow (z, n);
        //calculating the relative miss
        double relativemiss = 100. * miss / sumxy;
        //Output
        cout<<"Miss :: "<< miss <<" And  Relative Miss :: "<<relativemiss<<endl;
        //Array to store the result of relative near miss everytime
        //So that at the end we can find out the smallest nearest miss
        arr[i]=relativemiss;
    }
    int nearmiss;
    //to find out the smallest vlaue from the list of near miss, That will be our nearest miss
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] < nearmiss)
        {
            nearmiss = arr[i];
        }
    }
    cout<<"******* Near Miss = "<<nearmiss<<endl;

    return 0;
}