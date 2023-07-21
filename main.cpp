#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int menu();
int k = 0;



int main()
{
    string name[100];
    string number[100];
    int check = 0;
    int total_contacts=0;
    check = menu();
    do
    {
        //add contacts
        if(check == 1)
        {
            cout<<"\t\t\t\t\t\t Name :";
            cin>>name[k];
            cout<<"\t\t\t\t\t\t Phone no :";
            cin>>number[k];
            k++;
            total_contacts++;
            
        }

        //display contacts
        else if (check == 2)
        {
            int check2=0;
            for (int i = 0; i < 100; i++)
            {
                if (name[i]!="\0")
                {
                    cout<<"\t\t\t\t\tName :"<<name[i]<<"          Phone No. :"<<number[i]<<endl;
                    check2++;
                }
                
            }
            if (check2==0)
            {
                cout<<"\t\t\t\t\t\tContact List is Empty";
            }
            
            
        }
        //search by Number
        else if (check==3)
        {
            string temp;
            cout<<"\t\t\t\t\tNumber : ";
            cin>>temp;
            int check2=0;
            for (int i=0;i<100;i++)
            {
                if(temp==number[i])
                {
                    cout<<"\t\t\t\t\tNumber is Found\n";
                    cout<<"\t\t\t\t\tName : "<<name[i]<<"          Phone : "<<number[i]<<endl;
                    check2++;
                }
            }
            if (check2==0)
            {
                cout<<"\t\t\t\t\tThis Number is not Found in Contact List";
            }
        }
        //search by Name
        else if (check==4)
        {
            string temp;
            cout<<"\t\t\t\t\tName : ";
            cin>>temp;
            int check2=0;
            for (int i=0;i<100;i++)
            {

                if(temp==name[i])
                {
                    cout<<"\t\t\t\t\tName is Found\n";
                    cout<<"\t\t\t\t\tName : "<<name[i]<<"          Phone : "<<number[i]<<endl;
                    check2++;
                }
            }
            if (check2==0)
            {
                cout<<"\t\t\t\t\tThis Name is not Found in Contact List";
            }
        }
        //update contact
        else if (check==5)
        {
            string temp,temp2,temp3;
            cout<<"\t\t\t\t\tName : ";
            cin>>temp;
            int check2=0;
            for (int i=0;i<100;i++)
            {

                if(temp==name[i])
                {
                    cout<<"\t\t\t\t\tNew Name : ";
                    cin>>temp2;
                    cout<<"\t\t\t\t\tNew Number : ";
                    cin>>temp3;
                    name[i]=temp2;
                    number[i]=temp3;
                    check2++;
                    cout<<"\t\t\t\t\tUpdated Successfully";
                }
            }
            if (check2==0)
            {
                cout<<"\t\t\t\t\tThis Name is not Found in Contact List";
            }
        }
        //delete
        else if (check==6)
        {
            string temp;
            cout<<"\t\t\t\t\tFor Delete Enter Name : ";
            cin>>temp;
            int check2 = 0;
            for (int i=0;i<100;i++)
            {

                if(temp==name[i])
                {
                    cout<<"\t\t\t\t\tDeleted Successfully\n";
                    cout<<"\t\t\t\t\tName : "<<name[i]<<"          Phone : "<<number[i]<<endl;
                    name[i]="\0";
                    number[i]="\0";
                    check2++;
                    total_contacts--;
                }
            }
            if (check2==0)
            {
                cout<<"\t\t\t\t\tThis name is not Found in Contact List";
            }
            
        }
        //delete all
        else if (check==7)
        {
            cout<<"\t\t\t\t\tAll Deleted Successfully\n";
            for (int i = 0; i < k; i++)
            {
                name[i]="\0";
                number[i]="\0";
            }
            k=0;
            total_contacts=0;
                
            
        }
        //number of contacts
        else if (check==8)
        {
            cout<<"\t\t\t\t\tTotal Number of contact list are : "<<total_contacts<<endl;
        }
        check = menu();


    }while(check!=9);

    return 0;
}

int menu(){
    
    cout<<"\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t|---------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t|---------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t|           PHONE BOOK APPLICATION            |\n";
    cout<<"\t\t\t\t\t\t|---------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t|                                             |\n";
    cout<<"\t\t\t\t\t\t|            [1] Add Contacts                 |\n";
    cout<<"\t\t\t\t\t\t|            [2] Display All Contacts         |\n";
    cout<<"\t\t\t\t\t\t|            [3] Search By Number             |\n";
    cout<<"\t\t\t\t\t\t|            [4] Search By Name               |\n";
    cout<<"\t\t\t\t\t\t|            [5] Update Contact               |\n";
    cout<<"\t\t\t\t\t\t|            [6] Delete                       |\n";
    cout<<"\t\t\t\t\t\t|            [7] Delete All                   |\n";
    cout<<"\t\t\t\t\t\t|            [8] Numbers of Contacts          |\n";
    cout<<"\t\t\t\t\t\t|                                             |\n";
    cout<<"\t\t\t\t\t\t|---------------------------------------------|\n";
    cout<<"\t\t\t\t\t\t|            [9] Exit                         |\n";
    cout<<"\t\t\t\t\t\t|---------------------------------------------|\n";
    
    int a;
    cin>>a;
    system("cls");
    return a;
}