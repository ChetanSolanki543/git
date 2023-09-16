// program to print rainbow colours
#include <iostream>
using namespace std;
int main()
{
    int colorcode;
    cout<<"\n enter code no ";
    cin>>colorcode;

    switch(colorcode)
    {
        case 1:
        cout<<"Red"<<endl;break;
        case 2:
        cout<<"Orange"<<endl;break;
        case 3:
        cout<<"Yellow"<<endl;break;
        case 4:
        cout<<"Green"<<endl;break;
        case 5:
        cout<<"Blue"<<endl;break;
        case 6:
        cout<<"Indigo"<<endl;break;
        case 7:
        cout<<"Violet"<<endl;break;
        default :
        cout<<"your input is wrong "; break;
        
    }return 0;
}
