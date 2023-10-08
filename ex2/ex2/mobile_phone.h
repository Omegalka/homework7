#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class MobilePhone
{

private:
     int size = 16;
     int width = 7;
     string brand = "iphone"; //*
     int serial_number = 15; // *
     string color = "black"; // *
     string alarm = "loud"; // *
     int battery = 100; // *
     string name = "Iphon"; // *
     int camera = 2; // *
     int button = 3; // *
     string light = "light";
     /*int* adds = ;*/
     string add;
     bool light_on = false;
     
public:

    MobilePhone() : MobilePhone("Iphon", 100, 2, true, "loud") {}

    MobilePhone(string name, int battery, int camera, bool light_on, string alarm) {
        void SetBattery(int battery);
        void SetAlarm(string alarm);
        void SetSerialNumber(int serial_number);
        void SetColor(string color);
        void SetBrand(string brand);
        void SetName(string name);
        void SetCamera(int camera);
        void SetButton(int button);
    }

 /*   MobilePhone()
    {
        adds = new int[10];
    }

    ~MobilePhone()
    {
        cout << "Adds has been deleted\n";
        delete[] adds;
    }
    void AddAdds(int add) {
        this->add = add;
    }
    int* GetAdds() const
    {
        return adds;
    }*/


    void Noize(string alarm);
    void Call(string ringtone);
    void Count(string calculator);
    void Update();
    void Discharge();
    void SetBattery(int battery);
    int GetBattery() const;
    void SetBrand(string brand);
    string GetBrand()const;
    void SetAlarm(string alarm);
    string GetAlarm()const;
    void SetSerialNumber(int serial_number);
    int GetSerialNumber() const;
    void SetColor(string color);
    string GetColor() const;
    void SetName(string name);
    string GetName() const;
    void SetCamera(int camera);
    int GetCamera() const;
    void SetButton(int button);
    int GetButton() const;
};


