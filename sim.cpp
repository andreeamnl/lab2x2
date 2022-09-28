
#include <cmath>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;


class Car {
    private:          // Access specifier
        string brand;  // Attribute
        string model;  // Attribute
        int year;      // Attribute
        bool confort;
    public:
        void setBrand(string s){
            brand=s;
        }
        string getBrand() {
            return brand;
        }
        void setModel(string s){
            model=s;
        }
        string getModel() {
            return model;
        }
        void setYear(int s){
            year=s;
        }
        int getYear() {
            return year;
        }
        void setConfort(bool s){
            confort=s;
        }
        bool getConfort() {
            return confort;
        }
};

class Police {
    private:          // Access specifier
        string officer_name;  // Attribute
        string stop_message;  // Attribute
    public:
        void setOfficer_name(string s){
            officer_name=s;
        }
        string getOfficer_name() {
            return officer_name;
        }
        void setStop_message(string s){
            stop_message=s;
        }
        string getStop_message() {
            return stop_message;
        }
};

class Registration_plate{
    private:
        string reg_plate;
    public:
        void setReg_plate(string s){
            reg_plate=s;
        }
        string getReg_plate(){
            return reg_plate;
        }
};

class TaxiCompany{
    private:
        string company_name;
    public:
        void setCompany_name(string s){
            company_name=s;
        }
        string getCompany_name(){
            return company_name;
        }
   
};

class Client{
    private:
        string client_name;
        string client_phone;
    public:
        void setClient_name(string s){
            client_name=s;
        }
        string getClient_name(string s){
            return client_name;
        }
};

class Driver{
    private:
        string driver_name;
        string driver_registration;
    public:
        void setDriver_name(string s){
            driver_name=s;
        }
        string getDriver_Name(){
            return driver_name;
        }
};

class Route{
    private:
        string pickup_address;
        string final_address;
        float distance;
    public:
        void setPickup_address(string s){
            pickup_address=s;
        }
        string getPickup_address(){
            return pickup_address;
        }
        void setFinal_address(string s){
            final_address=s;
        }
        string getFinal_address(){
            return final_address;
        }
        void setDistance(float i){
            distance=i;
        }
        float getDistance(){
            return distance;
        }
};


class Payment{
    private:
        bool card_status;
        bool daytime_trip_status;
        float pay;
    public:
        void setCard_status(bool i){
            card_status=i;
        }
        bool getCard_status(){
            return card_status;
        }
        void setDaytime_trip_status(bool i){
            daytime_trip_status=i;
        }
        bool getDaytime_trip_status(){
            return card_status;
        }
        void setPay(float i){
            pay=i;
        }
        float getPay(){
            return pay;
        }
   
};

class Trip_duration{
    private:
        int start_time_hour;
        int start_time_min;
        int end_time_hour;
        int end_time_min;
    public:
        void setStart_time_hour(int i){
            start_time_hour=i;
        }
        int getStart_time_hour(){
            return start_time_hour;
        }
        void setStart_time_min(int k){
            start_time_min=k;
        }
        int getStart_time_min(){
            return start_time_min;
        }
        void setEnd_time_hour(int i){
            end_time_hour=i;
        }
        int getEnd_time_hour(){
            return end_time_hour;
        }
        void setEnd_time_min(int k){
            end_time_min=k;
        }
        int getEnd_time_min(){
            return end_time_min;
        }
};



class Customer_feedback{
    private:
        string feedback;
        bool report;
    public:
        void setFeedback(string s){
            feedback=s;
        }
        string getFeedback(){
            return feedback;
        }
        void setReport(bool i){
            report=i;
        }
        bool getReport(){
            return report;
        }
};






int main()
{  
    string conf,feedb;
   
    Driver Driver1;
    Driver Driver2;
    TaxiCompany Taxi1;
    TaxiCompany Taxi2;
    Client Client1;
    Client Client2;
    Car car1;
    Car car2;
    Police police2;
    Registration_plate rp2;
    Route route1;
    Route route2;
    Trip_duration time1;
    Trip_duration time2;
    Payment pay1;
    Payment pay2;
    Customer_feedback feedback1;
    Customer_feedback feedback2;
   
   
    Driver1.setDriver_name("Jeffrey D");
    car1.setBrand("Toyota");
    car1.setModel("Prius");
    car1.setYear(2012);
    car1.setConfort(false);
    Taxi1.setCompany_name("Yandex");
    time1.setStart_time_hour(6);
    time1.setStart_time_min(15);
    time1.setEnd_time_hour(8);
    time1.setEnd_time_min(30);
    route1.setPickup_address("Stefan cel Mare 1");
    route1.setFinal_address("bd Moscova 3");
    route1.setDistance(2.3);
    pay1.setPay(89.90);
   
   
   
   
    cout<<"..."<<endl;
    cout<<"Calling Taxi company "<<Taxi1.getCompany_name()<<endl;
    cout<<"Driver "<<Driver1.getDriver_Name()<<" is on his way\n";
   
    if(car1.getConfort()){
        conf="Confort";
    }else{
        conf="Standard";
    }
   
    cout<<car1.getBrand()<<" "<<car1.getModel()<<" "<<car1.getYear()<<" "<<conf<<" will soon be waiting for you."<<endl;
    cout<<"Pickup time:"<<time1.getStart_time_hour()<<":"<<time1.getStart_time_min()<<endl;
    cout<<"Destination reach time:"<<time1.getEnd_time_hour()<<":"<<time1.getEnd_time_min()<<endl;
    cout<< "Travel time, " << time1.getEnd_time_hour() - time1.getStart_time_hour() << "." << (time1.getEnd_time_min() - time1.getStart_time_min()) / 60.0 * 100
        << " hours." << endl << endl;
    cout<<route1.getPickup_address()<<"-->"<<route1.getFinal_address()<<", "<<route1.getDistance()<<"km"<<endl;
    cout<<"To pay:"<<pay1.getPay()<<"lei"<<endl;
    cout<<"Please eneter some feedback:"<<endl;
    cin>>feedb;
    feedback1.setFeedback(feedb);
    cout<<" '"<<feedback1.getFeedback()<<"' "<<" Thank you for your feedback!"<<endl;
    cout<<"Have a nice day!"<<endl<<endl;
   
   
    Driver2.setDriver_name("Ted B.");
    car2.setBrand("Skoda");
    car2.setModel("Oktavia");
    car2.setYear(2016);
    car2.setConfort(true);
    Taxi2.setCompany_name("iTaxi");
    time2.setStart_time_hour(15);
    time2.setStart_time_min(15);
    time2.setEnd_time_hour(16);
    time2.setEnd_time_min(45);
    route2.setPickup_address("Ion Dumeniuc 4");
    route2.setFinal_address("bd Moscova 8");
    route2.setDistance(4.5);
    pay2.setPay(109.90);
    police2.setStop_message("'Youre going 50 in a 30 zone, license and registration please!'");
    rp2.setReg_plate("MDA890");
   
   
   
   
    cout<<"..."<<endl;
    cout<<"Calling Taxi company "<<Taxi2.getCompany_name()<<endl;
    cout<<"Driver "<<Driver2.getDriver_Name()<<" is on his way\n";
   
    if(car2.getConfort()){
        conf="Confort";
    }else{
        conf="Standard";
    }
   
   
    cout<<car2.getBrand()<<" "<<car2.getModel()<<" "<<car2.getYear()<<" "<<conf<<" will soon be waiting for you."<<endl;
    cout<<"Pickup time:"<<time2.getStart_time_hour()<<":"<<time2.getStart_time_min()<<endl;
    cout<<"!!!!"<<endl;
    cout<<"You got stopped by police. "<<police2.getStop_message()<<endl;
    cout<<rp2.getReg_plate()<<endl;
    cout<<"Destination reach time:"<<time2.getEnd_time_hour()<<":"<<time2.getEnd_time_min()<<endl;
    cout<< "Travel time, " << time2.getEnd_time_hour() - time2.getStart_time_hour() << "." << (time2.getEnd_time_min() - time2.getStart_time_min()) / 60.0 * 100
        << " hours." << endl << endl;
    cout<<route2.getPickup_address()<<"-->"<<route2.getFinal_address()<<", "<<route2.getDistance()<<"km"<<endl;
    cout<<"To pay:"<<pay2.getPay()<<"lei"<<endl;
    cout<<"Please eneter some feedback:"<<endl;
    cin>>feedb;
    feedback2.setFeedback(feedb);
    cout<<" '"<<feedback2.getFeedback()<<"' "<<" Thank you for your feedback!"<<endl;
    cout<<"Have a nice day!"<<endl<<endl;
   
   
   
   
   
   
   
    return 0;
}
