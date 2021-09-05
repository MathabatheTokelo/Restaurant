#include<iostream>
#inlcude<iomanip>>
using namespace std;



int main(){

int foodtype;
double sub_foodtype;
char confirmation;

//House specials make discounts
    for(int i = 0 ;i<3; i++){
          cout<< "*****TOKELO'S RESTAURANT*****\n\n";
          cout<< "***MENU***\n";
          cout<< "1.  Starters\n";
          cout<< "2.  Soups\n";
          cout<< "3.  Salads\n";
          cout<< "4.  Sandwiches\n";
          cout<< "5.  Burgers\n";
          cout<< "6.  Cocktails\n";
          cout<< "7.  Coffee\n";
          cout<< "8.  Snacks\n";
          cout<< "9.  Desert\n";
          cout<< "10. House Specials\n";
          cout<< "Enter Food Category Number :   ";
          cin>> foodtype;

                        switch (foodtype){
                        case 1:
                            cout<< "***STARTERS***\n";
                            cout<< "1. Fried Pickles"<<setw(14)<<"R 20" <<endl;
                            cout<< "2. Onion Rings"<<setw(16)<<"R 10" <<endl;
                            cout<< "3. Sweet Potato Fries"<<setw(9)<<"R 15" <<endl;
                            cout<< "4. French Fries"<<setw(15)<<"R 15" <<endl;
                            cout<< "5. Mozzarella Sticks"<<setw(10)<<"R 25" <<endl;
                            cout<< "Enter Starter Number :   ";
                            cin>> sub_foodtype;

                                     if(sub_foodtype == 1){
                                          cout<<setw(10)<< "You have selected Fried Pickles "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                                          cin>>confirmation;

                                                      if(confirmation == 'Y' ){
                                                           cout<<"You have successfully Ordered Fried Pickles for R 20 \n";
                                                           }else if (confirmation == 'N' ){
                                                           cout<<"Order Cancelled:(\n";
                                                           }else {
                                                           cout<<"Invalid Option!! ";
                                                                              }
                                    }else if(sub_foodtype == 2){
                                        cout<<setw(10)<< "You have selected Onion Rings"<<endl;
                                        cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                                        cin>>confirmation;

                                                     if(confirmation == 'Y' ){
                                                           cout<<"You have Successfully Ordered Onion Rings for R 10\n";
                                                           }else if (confirmation == 'N' ){
                                                           cout<<"Order Cancelled:(";
                                                           }else {
                                                           cout<<"Invalid Option!! ";
                                                                                }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected Sweet Potato Fries"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Sweet Potato Fries for R 15\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected French Fries"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered French Fries for R 15\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if (sub_foodtype == 5){
                    cout<<setw(10)<< "You have selected Mozzarella Sticks"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Mozzarella Sticks for R 25\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Starters Number!!!"<<endl;


                  }

    break;
case 2:
    cout<< "***SOUPS***\n";
    cout<< "1. Sweet Potato Soup"<<setw(15)<<"R 15" <<endl;
    cout<< "2. Bilton & Mushroom Soup"<<setw(10)<<"R 20" <<endl;
    cout<< "3. Leek Soup"<<setw(23)<<"R 15" <<endl;
    cout<< "4. Minestrone Soup"<<setw(17)<<"R 15" <<endl;
;
 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected the Sweet Potato Soup "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered  Sweet Potato Soup for R 15 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Bilton & Mushroom Soup"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Bilton & Mushroom Soup for R 20";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected Leek Soup"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Leek Soup for R 15";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected Minestrone Soup"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Minestrone Soup for R 15";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Soup Number!!!"<<endl;


                  }
    break;
case 3:
        cout<< "***SALADS***\n";
    cout<< "1. French Salad"<<setw(17)<<"R 18" <<endl;
    cout<< "2. Greek Salad"<<setw(18)<<"R 10" <<endl;
    cout<< "3. Roquefort Salad"<<setw(14)<<"R 15" <<endl;
    cout<< "4. Biltong Salad"<<setw(16)<<"R 12" <<endl;
    cout<< "5. Salmon Salad"<<setw(17)<<"R 12" <<endl;
    cout<< "6. Cajun Chicken Salad"<<setw(10)<<"R 19" <<endl;
 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected French Salad "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered French Salad for R 18 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Greek Salad"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Greek Salad for R 10\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected  Roquefort Salad"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Roquefort Salad for R 15\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected Biltong Salad"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Biltong Salad for R 12\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if (sub_foodtype == 5){
                    cout<<setw(10)<< "You have selected  Salmon Salad"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered  Salmon Salad for R 12\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if (sub_foodtype == 6){
                    cout<<setw(10)<< "You have selected Cajun Chicken Salad"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Cajun Chicken Salad for R 19\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Salad Number!!!"<<endl;


                  }

    break;

case 4:
    cout<< "***SANDWICHES***\n";
    cout<< "1. Ham & Swiss Sandwich"<<setw(11)<<"R 25" <<endl;
    cout<< "2. Chicken & Cheese Sandwich"<<setw(6)<<"R 20" <<endl;
    cout<< "3. BBQ and Eggs Sandwich"<<setw(10)<<"R 20" <<endl;
    cout<< "4. Tuna & Salad Sandwich"<<setw(10)<<"R 25" <<endl;
    cout<< "5. Turkey Sandwich"<<setw(16)<<"R 25" <<endl;
 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected Ham & Swiss Sandwich "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered Ham & Swiss Sandwich for R 25 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Chicken & Cheese Sandwich"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Chicken & Cheese Sandwich for R 20";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected BBQ and Eggs Sandwich"<<endl;
                    cout<<"Enter Y to confirm Ordered or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered BBQ and Eggs Sandwich for R 20";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected Tuna & Salad Sandwich"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Tuna & Salad Sandwich for R 20";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if (sub_foodtype == 5){
                    cout<<setw(10)<< "You have selected Turkey Sandwich"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Turkey Sandwich for R 25";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Sandwiches Number!!!"<<endl;


                  }
 break;
case 5:
    cout<< "***BURGERS***\n";
    cout<< "1. Cheese Burger"<<setw(11)<<"R 50" <<endl;
    cout<< "2. Beef Burger"<<setw(13)<<"R 65" <<endl;
    cout<< "3. Mutton Burger"<<setw(11)<<"R 48" <<endl;
    cout<< "4. Chicken Burger"<<setw(10)<<"R 60" <<endl;
 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected a Cheese Burger "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered Cheese Burger for R 50 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected a Beef Burger"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Beef Burger for R 65\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected a Mutton Burger"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Mutton Burger for R 48\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected a Chicken Burger"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Chicken Burger for R 60\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }


                  }else{
                           cout<< "Invalid Burgers Number!!!"<<endl;


                  }



    break;


case 6:
    cout<< "***COCKTAILS***\n";
    cout<< "1. Mojito"<<setw(16)<<"R 20" <<endl;
    cout<< "2. Jager Boom"<<setw(12)<<"R 23" <<endl;
    cout<< "3. Caipinhia"<<setw(13)<<"R 25" <<endl;
    cout<< "4. Bloody Mary"<<setw(11)<<"R 25" <<endl;
    cout<< "5. Cosmopolitan"<<setw(10)<<"R 27" <<endl;
 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected a Mojito "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered Mojito for R 20 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Jager Boom"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered a Jager Boom for R 23\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected Caipinhia"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Caipinhia for R 25\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected Bloody Mary"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered French Fries for R 25\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if (sub_foodtype == 5){
                    cout<<setw(10)<< "You have selected Mozzarella Sticks"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Mozzarella Sticks for R 27\n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Cocktail Number!!!"<<endl;


                  }


    break;


case 7:
    cout<< "***COFFEES***\n";
    cout<<setw(10)<< "1. Expresso"<<setw(10)<<"R 20" <<endl;
    cout<<setw(10)<< "2. Coffee Latte"<<setw(10)<<"R 10" <<endl;
    cout<<setw(10)<< "3. Cappucino"<<setw(10)<<"R 15" <<endl;
    cout<<setw(10)<< "4. Mocha"<<setw(10)<<"R 15" <<endl;

 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected Expresso "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered Expresso for R 20 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Coffee Latte"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Coffee Latte for R 10";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected Cappucino"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Cappucino for R 15";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected  Mocha"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered  Mocha for R 15";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Starters Number!!!"<<endl;


                  }



    break;


case 8:
        cout<< "***SNACKS***\n";
    cout<<setw(10)<< "1. Doughnut"<<setw(10)<<"R 20" <<endl;
    cout<<setw(10)<< "2. Chips"<<setw(10)<<"R 10" <<endl;
    cout<<setw(10)<< "3. Burritos"<<setw(10)<<"R 15" <<endl;

 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected a Doughnut "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered Doughnut for R 20 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Chips"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Chips for R 10";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected Burritos"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Burritos for R 15";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Starters Number!!!"<<endl;


                  }



    break;


case 9:
    cout<< "***DESERTS***\n";
    cout<<setw(10)<< "1. Cheese Cake"<<setw(10)<<"R 33" <<endl;
    cout<<setw(10)<< "2. Ice cream"<<setw(10)<<"R 30" <<endl;
    cout<<setw(10)<< "3. Caramel Crumble"<<setw(10)<<"R 33" <<endl;
    cout<<setw(10)<< "4. Chocolate Cake"<<setw(10)<<"R 35" <<endl;
    cout<<setw(10)<< "5. Red Cake"<<setw(10)<<"R 33" <<endl;
 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected Cheese Cake "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered Cheese Cake for R 33 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Ice cream"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Ice cream for R 30";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected Caramel Crumble"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Caramel Crumble for R 33";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if(sub_foodtype == 4){
                    cout<<setw(10)<< "You have selected Chocolate Cake"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Chocolate Cake for R 35";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else if (sub_foodtype == 5){
                    cout<<setw(10)<< "You have selected Red Cake"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;
                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Red Cake for R 33";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Purchase Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Starters Number!!!"<<endl;


                  }



    break;


case 10:
    cout<< "***HOUSE SPECIALS***\n";
    cout<<setw(10)<< "1. Order Two OF ANY Burgers And get Free French Fries"<<setw(10)<<"R 120" <<endl;
    cout<<setw(10)<< "2. Order Three OF ANY Burgers And get Free Desert"<<setw(10)<<"R 110" <<endl;
    cout<<setw(10)<< "3. Order Two OF ANY Burgers And get Free Sweet Potato Fries"<<setw(10)<<"R 115" <<endl;

 cout<< "Enter Starter Number :   ";
cin>> sub_foodtype;


                  if(sub_foodtype == 1){
                    cout<<setw(10)<< "You have selected Burgers And get Free French Fries R 120 "<<endl<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have successfully Ordered Our First Special for R 120 \n";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(\n";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                                                              }
                  }else if(sub_foodtype == 2){
                    cout<<setw(10)<< "You have selected Burgers And get Free Desert R 110"<<endl;
                    cout<<"Enter Y to confirm Order or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Burgers And get Free Sweet Potato Fries Special";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                     }
                  }else if(sub_foodtype == 3){
                    cout<<setw(10)<< "You have selected Burgers And get Free Sweet Potato Fries for R115"<<endl;
                    cout<<"Enter Y to confirm Purchase or N to Cancel  :  " ;
                    cin>>confirmation;

                                    if(confirmation == 'Y' ){
                                      cout<<"You have Successfully Ordered Burgers And get Free Sweet Potato Fries Special";
                                    }else if (confirmation == 'N' ){
                                      cout<<"Order Cancelled:(";
                                    }else {
                                      cout<<"Invalid Option!! ";
                                    }

                  }else{
                           cout<< "Invalid Starters Number!!!"<<endl;


                  }



    break;

default:
    cout<< "Invalid Food Number!!!";


    break;

}
}


return 0;
}
