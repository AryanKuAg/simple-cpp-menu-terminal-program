#include<iostream>
#include<vector>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
    char select {};
    vector<int> mylist {};
    do {
        cout << "-----------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        ////////////////////
        cout << "Enter your choice : ";
        cin >> select;
        
        if ( select == 'p' || select == 'P')
        {
            cout << "[ "; 
            for(auto item : mylist){
                cout << item << " " ;
                }
            cout << "]" << endl; 
            
            }
        else if (select == 'a' || select == 'A'){
            int z {};
            cout << "Enter an integer : " ;
            cin >> z;
            mylist.push_back(z);
            cout << z <<" is added to the list"<< endl;
            }
        else if (select == 'm' || select == 'M'){
            
            if (mylist.size() > 0){
            double sum {};
            for (unsigned r {0}; r < mylist.size(); ++r){
                sum += mylist.at(r);
            }
            cout << fixed << setprecision(2);
            cout << "The mean is : " << sum / mylist.size() << endl;
            }else{
                
                cout << "Unable to calculate the mean - no data" << endl;     
                               
                
                }
            }
        else if (select == 's' || select == 'S' ) {
            int mymin {};
            
            for (auto just : mylist){
                mymin = min(mymin, just);
                
                }
            
            cout << "The smallest number is " << mymin << endl;
            }
             else if (select == 'l' || select == 'L' ) {
            int mymax {};
            
            for (auto just : mylist){
                mymax = max(mymax, just);
                
                }
            
            cout << "The largest number is " << mymax << endl;
            }
            else if (select == 'q' || select == 'Q' ){
                cout << "Goodbye" << endl;
                
                }
            
            
        else {
              cout << "Unknown selection, please try again" << endl;

            }
        } while(select != 'q' && select != 'Q');
    
    
    
    
    return 0;
}
