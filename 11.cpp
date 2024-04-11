/*Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.*/
#include<iostream>
using namespace std;

class Celsius{
        float temperature;
    public:
        void setTemperature(float temp){
            temperature=temp;
        }
        float toFahrenheit(){
            return (temperature*9/5) + 32;
        }
};

class Fahrenheit{
        float temperature;
    public:
        void setTemperature(float temp){
            temperature=temp;
        }
        float toCelsius(){
            return (temperature-32.0)*5/9;
        }
};

int main(){
    Celsius celsius;
    Fahrenheit fahrenheit;
    float temp;

    cout<<"Enter the temperature in Celsius : ";
    cin>>temp;
    celsius.setTemperature(temp);
    cout<<"The temperature in Fahrenheit is : "<<celsius.toFahrenheit()<<endl;

    cout<<"Enter the temperature in Fahrenheit : ";
    cin>>temp;
    fahrenheit.setTemperature(temp);
    cout<<"The temperature is Celsius is : "<<fahrenheit.toCelsius()<<endl;

    return 0;
}