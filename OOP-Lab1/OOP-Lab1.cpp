#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string name;
    int age;
    string breed;

    Dog(string Name, int Age, string Breed) : name(Name), age(Age), breed(Breed) {}
};

class Person {
public:

    Dog pet;
    Person(string Name, int Age, string Breed) : pet(Name, Age, Breed) {}

    void DogInfo() {
        cout << "\n\tName: " << pet.name << endl;
        cout << "\tAge: " << pet.age << endl;
        cout << "\tBreed: " << pet.breed << endl;
    }
};

class House {
public:
    string name;
    int age;
    string house;
    House(string Name, int Age, string House) : name(Name), age(Age), house(House) {}

    void Get_Person_info() {
        cout << "\n\tPerson Name: " << name << endl;
        cout << "\tPerson Age: " << age << endl;
    }
};

class Neighborhood {
public:
    string House_Name;
    string House_Num;
    string House_Location;

    Neighborhood(string H_Name, string H_Num, string H_Location) : House_Name(H_Name), House_Num(H_Num), House_Location(H_Location) {}

    void Get_House_Info() {
        cout << endl;
        cout << "\tHouse Name: " << House_Name << endl;
        cout << "\tHouse Number: " << House_Num << endl;
        cout << "\tHouse Location: " << House_Location << endl;
    }
};

int main() {
    char user_choice;
    cout << "\t\t\t\tWelcome to PetPals..." << endl;
    do {
        cout << "\tPlease choose the person you want to know (1, 2, 3) or press 4 for house information: ";
        cin >> user_choice;
    } while (user_choice != '1' && user_choice != '2' && user_choice != '3' && user_choice != '4');
    system("cls");

    if (user_choice == '1') {
        char user_choice1;
        do {
            cout << "Do you want to change your dog information (y/n): ";
            cin >> user_choice1;
        } while (user_choice1 != 'y' && user_choice1 != 'Y' && user_choice1 != 'n' && user_choice1 != 'N');

        if (user_choice1 == 'n' || user_choice1 == 'N') {
            system("cls");
            cout << "\n\t\t\tDogs Information!";
            Person DogClass1("Max", 3, "Boxer");
            DogClass1.DogInfo();

            House PersonClass1("Lotfullah", 18, "Kabul");
            PersonClass1.Get_Person_info();

            cout << endl;
            cout << "\t\t\tScenario \n" << endl;
            cout << "\tHello, My Name is " << PersonClass1.name << " I am " << PersonClass1.age << " Years old " << endl
                << "\tI am Living in " << PersonClass1.house << endl
                << "\tI have a dog and my dog name is " << DogClass1.pet.name << " My Dog is " << DogClass1.pet.age << endl
                << "\tYears Old " << " My Dog Breed is " << DogClass1.pet.breed << endl;
        }
        else if (user_choice1 == 'y' || user_choice1 == 'Y') {
            system("cls");
            string Dog_Name;
            int Dog_age;
            string Dog_breed;

            cout << "Enter Your Dog Name: ";
            cin.ignore();
            getline(cin, Dog_Name);

            cout << "Enter Your Dog Age: ";
            cin >> Dog_age;

            cin.ignore();

            cout << "Enter Your Dog Breed: ";
            getline(cin, Dog_breed);

            system("cls");

            cout << "\n\t\t\tDogs Information!";
            Person DogClass1(Dog_Name, Dog_age, Dog_breed);
            DogClass1.DogInfo();

            cout << "\n\t\t\Persons Information!" << endl;
            House PersonClass1("Lotfullah", 18, "Kabul");
            PersonClass1.Get_Person_info();

            cout << endl;
            cout << "\t\t\tScenario \n" << endl;
            cout << "\tHello, My Name is " << PersonClass1.name << " I am " << PersonClass1.age << " Years old " << endl
                << "\tI am Living in " << PersonClass1.house << endl
                << "\tI have a dog and my dog name is " << DogClass1.pet.name << " My Dog is " << DogClass1.pet.age << endl
                << "\tYears Old " << " My Dog Breed is " << DogClass1.pet.breed << endl;
        }
        else {
            system("cls");
            cout << "\t\t\tInvalid Input";
        }
        exit;
    }
    else if (user_choice == '2') {
        char user_choice2;
        do {
            cout << "Do you want to change your dog's information (y/n): ";
            cin >> user_choice2;
        } while (user_choice2 != 'y' && user_choice2 != 'Y' && user_choice2 != 'n' && user_choice2 != 'N');

        if (user_choice2 == 'n' || user_choice2 == 'N') {
            system("cls");
            cout << "\n\t\t\tDogs Information!";
            Person DogClass2("Alex", 2, "Pug");
            DogClass2.DogInfo();

            cout << "\n\t\t\tPersons Information!";
            House PersonClass2("kalimullah", 7, "Istanbul");
            PersonClass2.Get_Person_info();

            cout << endl;
            cout << "\t\t\tScenario \n" << endl;

            cout << "\tHello, My Name is " << PersonClass2.name << " I am " << PersonClass2.age << " Years old " << endl
                << "\tI am Living in " << PersonClass2.house << endl
                << "\tI have a dog and my dog name is " << DogClass2.pet.name << " My Dog is " << DogClass2.pet.age << endl
                << "\tYears Old " << " My Dog Breed is " << DogClass2.pet.breed << endl;
        }
        else if (user_choice2 == 'y' || user_choice2 == 'Y') {
            string Dog2_Name;
            int Dog2_Age;
            string Dog2_Breed;
            system("cls");
            cin.ignore();

            cout << "\n\t\t\tDogs Information!";
            cout << endl;

            cout << "Enter Your Dog Name: ";
            getline(cin, Dog2_Name);

            cout << "Enter Your Dog Breed: ";
            getline(cin, Dog2_Breed);

            cout << "Enter Your Dog Age: ";
            cin >> Dog2_Age;
            system("cls");
            Person DogClass2(Dog2_Name, Dog2_Age, Dog2_Breed);
            DogClass2.DogInfo();

            cout << "\n\t\t\tPersons Information!";
            House PersonClass2("kalimullah", 7, "Istanbul");
            PersonClass2.Get_Person_info();

            cout << endl;
            cout << "\t\t\tScenario \n" << endl;

            cout << "\tHello, My Name is " << PersonClass2.name << " I am " << PersonClass2.age << " Years old " << endl
                << "\tI am Living in " << PersonClass2.house << endl
                << "\tI have a dog and my dog name is " << DogClass2.pet.name << " My Dog is " << DogClass2.pet.age << endl
                << "\tYears Old " << " My Dog Breed is " << DogClass2.pet.breed << endl;
        }
        else {
            system("cls");
            cout << "\t\t\tInvalid Input";
        }
        exit;
    }
    else if (user_choice == '3') {
        char user_choice3;
        do {
            cout << "Do you want to change your dog's information (y/n): ";
            cin >> user_choice3;
        } while (user_choice3 != 'y' && user_choice3 != 'Y' && user_choice3 != 'n' && user_choice3 != 'N');

        if (user_choice3 == 'n' || user_choice3 == 'N') {
            system("cls");
            cout << "\t\t\tDogs Information!";
            Person DogClass3("Puppy", 4, "Naon");
            DogClass3.DogInfo();

            cout << "\t\t\tPersons Information!";
            House PersonClass3("Muhammad Hamza", 20, "Islamabad");
            PersonClass3.Get_Person_info();

            cout << endl;
            cout << "\t\t\tScenario \n" << endl;
            cout << "\tHello, My Name is " << PersonClass3.name << " I am " << PersonClass3.age << " Years old " << endl
                << "\tI am Living in " << PersonClass3.house << endl
                << "\tI have a dog and my dog name is " << DogClass3.pet.name << " My Dog is " << DogClass3.pet.age << endl
                << "\tYears Old " << " My Dog Breed is " << DogClass3.pet.breed << endl;
        }
        else if (user_choice3 == 'y' || user_choice3 == 'Y') {
            string Dog3_Name;
            int Dog3_Age;
            string Dog3_Breed;
            cin.ignore();
            cout << "Enter Your Dog's Name: ";
            getline(cin, Dog3_Name);
            cout << "Enter Your Dog's Breed: ";
            getline(cin, Dog3_Breed);
            cout << "Enter Your Dog's Age: ";
            cin >> Dog3_Age;
            system("cls");

            cout << "\t\t\tDogs Information!";
            Person DogClass3(Dog3_Name, Dog3_Age, Dog3_Breed);
            DogClass3.DogInfo();

            cout << "\t\t\tPersons Information!";
            House PersonClass3("Muhammad Hamza", 20, "Islamabad");
            PersonClass3.Get_Person_info();

            cout << endl;
            cout << "\t\t\tScenario \n" << endl;
            cout << "\tHello, My Name is " << PersonClass3.name << " I am " << PersonClass3.age << " Years old " << endl
                << "\tI am Living in " << PersonClass3.house << endl
                << "\tI have a dog and my dog name is " << DogClass3.pet.name << " My Dog is " << DogClass3.pet.age << endl
                << "\tYears Old " << " My Dog Breed is " << DogClass3.pet.breed << endl;
        }
        else {
            system("cls");
            cout << "\t\t\tInvalid Input";
        }
    }
    else if (user_choice == '4') {
        char House_Choice;
        do {
            cout << "Please Enter Which House You Want To Know About (1, 2, 3): ";
            cin >> House_Choice;
        } while (House_Choice != '1' && House_Choice != '2' && House_Choice != '3');

        system("cls");
        if (House_Choice == '1') {
            cout << endl;
            cout << "\t\t\tHouse 1 Information!" << endl;
            Neighborhood House1("Ahmad's House", "# 304", "I 10/2 Islamabad");
            House1.Get_House_Info();
        }
        else if (House_Choice == '2') {
            cout << endl;
            cout << "\t\t\tHouse 2 Information!" << endl;
            Neighborhood House2("Lotfullah's House", "# 405", "Kabul, Afghanistan");
            House2.Get_House_Info();
        }
        else if (House_Choice == '3') {
            cout << endl;
            cout << "\t\t\tHouse 3 Information!" << endl;
            Neighborhood House3("Hamza's House", "# 221", "Malakand Pakistan");
            House3.Get_House_Info();
        }
        else {
            system("cls");
            cout << "\t\t\tInvalid Input";
        }
    }
    return 0;
}