#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    

    for (int b = 5; b <= b; b++)

    {
        float x, y, z, a;
        cout<<"Click 0 for advance option."<<"\nClick 1 for addition."<<"\nClick 2 for subtraction."<<"\nClick 3 for multiplication."<<"\nClick 4 for division."<<"\n";
        cin>>x;

        if (x==0)
        {
            for (int i = 7; i <= i; i++)
            {
                int a;
                cout<<"Click 1 to get the multiplication table of your given number."<<"\nClick 2 to get the square of your given number."<<"\nClick 3 to get the cube of your given number."<<"\nClick 4 to check if the given number is even number or odd number."<<"\nClick 5 to check if the number is a prime number or not."<<"\nClick 6 to get the square root of your given number."<<"\n";
                cin>>a;

                if (a==0)
                {
                    cout<<"You have entered the wrong number, Please check your number.";
                }
                else{
                    if (a==i)
                    {
                        cout<<"You have entered the wrong number, Please check your number.";
                    }
                    else{
                        if (a==1)
                        {
                            int c;
                            cout<<"Enter the number of which you want the table: ";
                            cin>>c;
                            for (int d = 1; d <= 10; d++)
                            {
                                int z = c*d;
                                cout<<c<<" x "<<d<<" = "<<z<<endl;
                            }
                         }
                         else{
                            if(a==2)
                            {
                                int e;
                                cout<<"Enter the number of which you want the square of: ";
                                cin>>e;
                                int f = e * e;
                                cout<<"The Square of the given number is: "<<f<<".";
                            }
                            else{
                                if (a==3)
                                {
                                    int g;
                                    cout<<"Enter the number of which you want the cube of: ";
                                    cin>>g;
                                    int h = g * g * g;
                                    cout<<"The Square of the given number is: "<<h<<".";
                                }
                                else{
                                    if (a==4)
                                    {
                                        int j;
                                        cout<<"Enter the number: ";
                                        cin>>j;
                                        if (j % 2 == 0)
                                        {
                                            cout<<"It is a even number.";
                                        }
                                        else{
                                            cout<<"It is a odd number.";
                                            }
                                    }
                                    else{
                                        if (a==5)
                                        {
                                            int k, l;
                                            bool m = true;
                                            
                                            cout << "Enter a positive integer: ";
                                            cin >> l;
                                            if (l == 0 || l == 1) 
                                            {
                                                m = false;
                                            }
                                            for (k = 2; k <= l/2; ++k)
                                            {
                                                if (l % k == 0)
                                                {
                                                    m = false;
                                                    break;
                                                }
                                            }
                                            if (m)
                                            cout << l << " is a prime number";
                                            else
                                            cout << l << " is not a prime number";
                                        }
                                        else{
                                            if (a==6)
                                            {
                                                int n;
                                                cout<<"Enter the number for which you want square root of: ";
                                                cin>>n;
                                                cout << "Square root of your given number is: ";
                                                cout << sqrt(n);
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    }
                                
                                }
                            }
                        
                        }
                        exit(0);
                    }
                
            }
            
        }  

        if (x==b)
        {
            cout<<"You have entered the wrong number, Please check your number.";
        }
        else{
            cout<<"Enter your first number: ";
            cin>>y;
            cout<<"Enter your second number: ";
            cin>>z;

            if (x==1)
            {
                float a = y + z;
                cout<<"\nThe solution of your given number is: "<<a<<".";
            }
            else{
                if (x==2)
                {
                    float a = y - z;
                    cout<<"\nThe solution of your given number is: "<<a<<".";
                }
                else{
                    if (x==3)
                    {
                        float a = y * z;
                        cout<<"\nThe solution of your given number is: "<<a<<".";
                    }
                    else{
                        if (x==4)
                        {
                            float a = y / z;
                            cout<<"\nThe solution of your given number is: "<<a<<".";
                        }
                
                        }
            
                    }
        
                }
            }
        exit(0);
    }
        
    return 0;
    
}

//Created by Kai on 03-09-2024