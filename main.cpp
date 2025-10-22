#include <iostream>
#include<fstream>
#include<vector>
#include <string>
using namespace std;

struct person {
    string name;
    string address;
    string phone;
};

    vector<person> people;

void addinfo() {
    person newperson;
    cout << "Name of the person: ";
    cin >> newperson.name;
    cout << "Address: ";
    cin >> newperson.address;
    cout << "Phone number: ";
    cin >> newperson.phone;

    people.push_back(newperson);
    cout<<"person added successfully.";
}

    void showinfo(){
        cout <<"/n All persons detail.";
        for(int i=0;i<people.size();i++){
            cout<<"Person" <<i+1 <<endl;
            cout<<"Name : " <<people[i].name <<endl;
            cout<<"Address : " <<people[i].address <<endl;
            cout<<"Phone : " <<people[i].phone <<endl;

            cout << "These are the details.";
        }
    }
int main() {
    

     ofstream file("addressbook.txt", ios::app);
    if(file.is_open()){
        file<< "\nPerson1 details:" << endl;
        for(int i=0;i<people.size();i++){
    file << "Name: " << people[i].name << endl;
    file << "Address: " << people[i].address << endl;
    file << "Phone: " << people[i].phone << endl;
    }}
    else{
        file<<"The file is not opened to write infos.";
    }
    file.close();
    int question;

    do {
        cout << "\nPress the numbers to perform following actions:\n";
        cout << "1. Add another person detail.\n";
        cout << "2. show all the details.\n";
        cout << "0. Exit.\n";
        cout << "Enter your choice: ";
        cin >> question;

        switch (question) {
            case 1:
                addinfo();
                break;
            case 2:
                showinfo();
                break;
            case 0:
                cout << "\nYou chose to exit.\n";
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

    } while (question != 0);  // fixed condition (!=, not =!)

    return 0;
}
