// #include<iostream>

// using namespace std;

// class Shop
// {
//      int itemId[100];
//      int itemPrice[100];
//      int counter;

//  public:
//      void initCounter(void) { counter =0;}
//      void setPrice(void);
//      void displayPrice(void);
// };

// void Shop :: setPrice(void)
// {
//     cout<<"Enter Id of your item no "<<counter+1<<endl;
//     cin>>itemId[counter];
//     cout<<"Enter Price of your item "<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }

// void Shop :: displayPrice(void)
// {
//     for(int i = 0; i < counter; i++)
//     {
//         cout<<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
//     }
// }

// int main(){
//     Shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;
// }

//  Homework for my side to me

// class Costumer
// {
//    int CostumerId[50];
//    int Price_he_pay[50];
//    int Customer_Number;

//  public:

//    void initCustomer_Number(void) { Customer_Number = 0; }
//    void Price_pay_set(void);
//    void Display_pay_price(void);
// };

// void Costumer :: Price_pay_set(void)
// {
//    cout<<" Enter Id of our Costumer no "<<Customer_Number+1<<endl;
//    cin>>CostumerId[Customer_Number];
//    cout<<" Enter the price customer pay you "<<endl;
//    cin>>Price_he_pay[Customer_Number];
//    Customer_Number++;
// }

// void Costumer :: Display_pay_price(void)
// {
//     for(int i = 0; i < Customer_Number; i++)
//     {
//         cout<<"Your Costumer Id is "<<CostumerId[i]<<" and the Price you pay is "<<Price_he_pay[i]<<endl;
//     }
// }

// int main(){
//     int p;
//     cout<<"Which Times you run this code"<<endl;
//     cin>>p;
//     Costumer Rohan, Avni, Lakshay; 

//     Rohan.initCustomer_Number(); 

//     for(int i = 0; i < p; i++)
//     {
//       Rohan.Price_pay_set();
//     }
//     Rohan.Display_pay_price();
    
    // Rohan.Price_pay_set();
    // Rohan.Price_pay_set();
    // Rohan.Price_pay_set();
    // Rohan.Display_pay_price();

    // Avni.initCustomer_Number();
    // Avni.Price_pay_set();
    // Avni.Display_pay_price();

    // Lakshay.initCustomer_Number();
    // Lakshay.Price_pay_set();
    // Lakshay.Display_pay_price();

//     return 0;
// }

//    In this code some error
//    don't clear what is this error

#include <iostream>

using namespace std;

class Store
{
    int Itemno[50];
    int ItemPrice[50];
    int Serial;

public:
    void SerialCounter(void) { Serial = 0; }
    void Itemset(void);
    void ItemShow(void);
};

void Store::Itemset(void)
{
    cout << "Enter the Item number " << Serial + 1 << endl;
    cin >> Itemno[Serial];
    Serial++;
}

void Store::ItemShow(void)
{
    for (int i = 0; i < Serial; i++)
    {
        if (Itemno[Serial] > 1 && Itemno[Serial] < 23)
        {
            cout << "This is Item number " << Serial << " and The price of this Item is " << (12) << endl;
        }
        else if (Itemno[Serial] == 33)
        {
            cout << "This is Item number " << Serial << " and The price of this Item is " << (45) << endl;
        }
        else if (Itemno[Serial] == 44)
        {
            cout << "This is Item number " << Serial << " and The price of this Item is " << (67) << endl;
        }
        else if (Itemno[Serial] == 25)
        {
            cout << "This is Item number " << Serial << " and The price of this Item is " << (85) << endl;
        }
        else if (Itemno[Serial] == 28)
        {
            cout << "This is Item number " << Serial << " and The price of this Item is " << (32) << endl;
        }
        else
        {
            cout << "This is wrong this is not a Item number " << endl;
        }
    }
}

int main()
{
    Store p;

    p.SerialCounter();
    p.Itemset();
    p.ItemShow();

    return 0;
}