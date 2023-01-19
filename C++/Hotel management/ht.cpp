#include <iostream.>
#include <conio.h>
using namespace std;

int main()
{
    int quant;
    int choice;
    // varibles for storing the quanttity of room available etc //Quantity
    int qrooms = 0, qpasta = 0, qburger = 0, qnoodles = 0, qshake = 0, qchiken = 0;

    // varibles for sold rooms etc //food items sold
    int srooms = 0, spasta = 0, sburger = 0, snoodles = 0, sshake = 0, schiken = 0;

    // price of total price of each of them
    // total price of items
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chiken = 0;

    cout << "\n\t Quantity of items we have in a hotel" << endl;
    cout << "\n Rooms available" << endl;
    cin >> qrooms;
    cout << "Quantity of pasta" << endl;
    cin >> qpasta;
    cout << "Quantity of burger" << endl;
    cin >> qburger;
    cout << "Quantity of noodle" << endl;
    cin >> qnoodles;
    cout << "Quantity of shake" << endl;
    cin >> qshake;
    cout << "Quantity of chiken roll" << endl;
    cin >> qchiken;

    // menu
    m:
    cout << "\n\t\t\t Please select from the menu options" << endl;
    cout << "\n\n1)Rooms" << endl;
    cout << "\n2)pasta" << endl;
    cout << "\n3)burger" << endl;
    cout << "\n4)noodles" << endl;
    cout << "\n5)shake" << endl;
    cout << "\n6)chiken roll" << endl;
    cout << "\n7)Information regarding sales and collection" << endl;
    cout << "\n8)exit" << endl;

    cout << "\n\n Please enter your choice" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\nEnter the number of rooms you want" << endl;
        cin >> quant;
        if (qrooms - srooms >= quant)
        {
            srooms = srooms + quant;
            total_rooms = total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "rooms have been alloted to you;" << endl;
        }
        else
        {
            cout << "\n\tOnly" << qrooms - srooms << "Rooms remaining in hotel" << endl;
        }

        break;

    case 2:
        cout << "\n\nEnter the pasta quantity" << endl;
        cin >> quant;
        if (qpasta - spasta >= quant)
        {
            spasta = spasta + quant;
            total_pasta = total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << "pasta is the order;" << endl;
        }
        else
        {
            cout << "\n\tOnly" << qpasta - spasta << "pasta remaining in hotel" << endl;
        }

        break;

        case 3:
         cout << "\n\nEnter burger quantity" << endl;
        cin >> quant;
        if (qburger - sburger >= quant)
        {
            sburger = sburger + quant;
            total_burger = total_burger + quant * 120;
            cout << "\n\n\t\t" << quant << "burger is the order;" << endl;
        }
        else
        {
            cout << "\n\tOnly" << qburger - sburger << "burger remaining in hotel" << endl;
        }
        break;
        case 4:
        cout << "\n\nEnter noodles quantity" << endl;
        cin >> quant;
        if (qnoodles - snoodles >= quant)
        {
            snoodles = snoodles + quant;
            total_noodles = total_noodles + quant * 140;
            cout << "\n\n\t\t" << quant << "burger is the order;" << endl;
        }
        else
        {
            cout << "\n\tOnly" << qnoodles - snoodles << "noodles remaining in hotel" << endl;
        }
        break;
        case 5:
        cout << "\n\nEnter shake quantity" << endl;
        cin >> quant;
        if (qshake - sshake >= quant)
        {
            sshake = sshake + quant;
            total_shake = total_shake + quant * 120;
            cout << "\n\n\t\t" << quant << "shakes is the order;" << endl;
        }
        else
        {
            cout << "\n\tOnly" << qshake - sshake << "shake remaining in hotel" << endl;
        }
        break;

        case 6:
        cout << "\n\nEnter chiken-roll quantity" << endl;
        cin >> quant;
        if (qchiken - schiken >= quant)
        {
            schiken = schiken + quant;
            total_chiken = total_chiken + quant * 150;
            cout << "\n\n\t\t" << quant << "chiken is the order;" << endl;
        }
        else
        {
            cout << "\n\tOnly" << qchiken- schiken << "chiken remaining in hotel" << endl;
        }
        break;
        case 7:
        cout<<"\n\tdetails of sales and collection"<<endl;
        cout<<"\n\n Number of rooms we had  :"<<qrooms<<endl;
        cout<<"\n\n Number of rooms we give for rent  :"<<srooms<<endl;
        cout<<"\n\n remaining rooms  :"<<qrooms-srooms<<endl;
        cout<<"\n\n total rooms collection for the day :"<<total_rooms<<endl;

         cout<<"\n\n Number of pasta we had  :"<<qpasta<<endl;
        cout<<"\n\n Number of pasta we sold :"<<spasta<<endl;
        cout<<"\n\n remaining pastas :"<<qpasta-spasta<<endl;
        cout<<"\n\n total pasta collection for the day :"<<total_pasta<<endl;

         cout<<"\n\n Number of burger we had  :"<<qburger<<endl;
        cout<<"\n\n Number of burger we sold  :"<<sburger<<endl;
        cout<<"\n\n remaining burger:"<<qburger-sburger<<endl;
        cout<<"\n\n total burger collection for the day :"<<total_burger<<endl;

        cout<<"\n\n Number of noodles we had  :"<<qnoodles<<endl;
        cout<<"\n\n Number of noodles we sold  :"<<snoodles<<endl;
        cout<<"\n\n remaining noodles:"<<qnoodles-snoodles<<endl;
        cout<<"\n\n total noodles collection for the day :"<<total_noodles<<endl;

         cout<<"\n\n Number of shake we had  :"<<qshake<<endl;
        cout<<"\n\n Number of shake we sold  :"<<sshake<<endl;
        cout<<"\n\n remaining shake:"<<qshake-sshake<<endl;
        cout<<"\n\n total shake collection for the day :"<<total_shake<<endl;

         cout<<"\n\n Number of chiken roll we had  :"<<qchiken<<endl;
        cout<<"\n\n Number of chiken we sold  :"<<schiken<<endl;
        cout<<"\n\n remaining chiken:"<<qchiken-schiken<<endl;
        cout<<"\n\n total chiken collection for the day :"<<total_chiken<<endl;

        cout<<"Total collection for the day"<<total_burger+total_chiken+total_noodles+total_pasta+total_rooms+total_shake<<endl;
        case 8:
        exit(0);

    default:
    cout<<"\nPlease select the number menioned above"<<endl;
        break;
    }
    goto m;
    // goto is used to jump with the label m 
}