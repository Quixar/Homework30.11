#include <iostream>
#include <string>

using namespace std;


class ElectricKettle {
public:
    string brand;
    double capacity;
    int power;
    bool isPluggedIn;
    int waterLevel;

    void PuggedIn()
    {
        cout << "Kettle is plugged in\n";
    }

    void Unplug()
    {
        cout << " Kettle is unplagged\n";
    }

    void FillWater()
    {
        cout << "Kettle is filling with water\n";
    }

    void Boil()
    {
        cout << "kettle boils water\n";
    }

    void PourTea()
    {
        cout << "pour tea\n";
    }
};

class Book {
public:
    string title;
    string author;
    int pageCount;
    bool isHardcover;
    double price;

    void Read()
    {

    }
    void BookmarkPage()
    {

    }
    void Review()
    {

    }
    void Lend()
    {

    }
    void CalculateDiscountPrice()
    {

    }
};

class Smartphone {
public:
    string brand;
    string model;
    int storageCapacityGB;
    bool hasDualCamera;
    bool isWaterproof;


    void MakeCall()
    {

    }
    void TakePhoto()
    {

    }
    void InstallApp()
    {

    }
    void CheckStorageSpace()
    {

    }
    void SetAlarm()
    {

    }
};

class Cat {
public:
    string name;
    int age;
    string color;
    bool isMale;
    bool hasCollar;

    void Meow()
    {

    }

    void Sleep()
    {

    }

    void Eat()
    {

    }

    void Purr()
    {

    }

    void Play() 
    {

    }
};

class RemoteControl {
public:
    string brand;
    bool hasBattery;
    int buttonsCount;
    bool isProgrammable;
    bool isTouchScreen;

    void PressButton()
    {

    }

    void PowerOn()
    {

    }

    void PowerOff()
    {

    }

    void ProgramButton()
    {

    }

    void AdjustVolume()
    {

    }
};

int main()
{
    
}