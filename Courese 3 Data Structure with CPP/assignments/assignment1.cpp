#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_price[12];
    int total_tax;
    int total;


};



int main()
{
    Restaurant *my_restaurant = new Restaurant;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>my_restaurant->food_item_codes[i];

        getline(cin>>ws,my_restaurant->food_item_names[i]);
        cin>>my_restaurant->food_item_price[i];
    }

    cout<<"\t\t\t\tMake Bill"<<endl;
    cout<<"\t\t\t\t__________"<<endl;
    cout<<"Item code \t\t\t\t"<<"Item Name \t\t\t\t"<<"item price"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<my_restaurant->food_item_codes[i]<<"\t\t\t\t";
        cout<<my_restaurant->food_item_names[i]<<"\t\t\t\t";
        cout<<my_restaurant->food_item_price[i]<<endl;
    }







    return 0;

}
