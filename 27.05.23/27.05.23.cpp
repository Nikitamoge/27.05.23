#include <iostream>
using namespace std;

int main()
{
    //Task1
    int first_number, second_number;
    cout << "Enter first number: ";
    cin >> first_number;
    cout << "Enter second number: ";
    cin >> second_number;

    cout << "First number = " << (first_number / 100) * 100 + ((second_number / 10) % 10) * 10 + (first_number % 10) << "\n";
    cout << "second number = " << ((second_number / 100) * 100) + ((first_number / 10) % 10) * 10 + (second_number % 10) << "\n";


    //Task2
    int number_three;
    cout << "Enter number: ";
    cin >> number_three;
    cout << "Sum = " << (number_three / 1000) + (number_three / 10) % 10 << "\n";
    int second_digit = ((number_three / 100) % 10);
    int fourth_digit = number_three % 10;
    if (second_digit < fourth_digit)
    {
        cout << "Difference = " << fourth_digit - second_digit << "\n";
    }
    else
    {
        cout << "Difference = " << second_digit - fourth_digit << "\n";
    }


    //Task3
    int number_four;
    cout << "Enter number: ";
    cin >> number_four;
    cout << (number_four / 100) * 10 + (number_four % 10);


    //Task4
    double money, rate, percent, time, deposit;
    cout << "Enter sum of money which you want to deposit: ";
    cin >> money;
    cout << "ENter the period of time: ";
    cin >> time;
    cout << "By how much percetages: ";
    cin >> percent;
    rate = percent / 100;
    deposit = (money * pow(1 + rate / 12, time));
    cout << deposit << "\n";
    cout << "Sum of money which you can receive by the first month " << (deposit - money) / time << " UAH" << "\n";


    //Task5
    int product, customer;

    cout << "Enter price of product in UAH: ";
    cin >> product;
    cout << "Enter amount of money is given: ";
    cin >> customer;
    cout << "For this amount of money he can buy: " << customer / product << " product and can get change = " << customer % product << " UAH";


    //Task6
    const double pound = 405.9;
    int kilogram = 1000,
        pounds;
    cout << "Enter pounds: ";
    cin >> pounds;
    cout << "Pounts in kgs: " << (pounds * pound) / kilogram << " kg";


    //Task7
    double width, length, height, price, percent, color;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter price of color: ";
    cin >> price;
    cout << "Enter percent of window and door at room: ";
    cin >> percent;
    cout << "Enter how much color will need on 1m square: ";
    cin >> color;

    double area, window, color_two, cost;
    area = 2 * (length + width) * height;  
    window = area * (100 - percent) / 100;
    color_two = window * color;
    cost = color_two * price;

    cout << "Amount of paint you need: " << color << "\n";
    cout << "Total cost: " << cost << "\n";


    //Task8
    int number_five, first, second, third, fourth, fifth;
    cout << "Enter number: ";
    cin >> number_five;
    first = number_five / 10000;
    second = (number_five / 1000) % 10;
    third = (number_five / 100) % 10;
    fourth = (number_five / 10) % 10;
    fifth = number_five % 10;
    cout << fourth * 10000 + fifth * 1000 + first * 100 + second * 10 + third;


    //Task9
    const double long Venus = 4.81068 * 10e24;
    const double long Earth = 5.97600 * 10e24;
    const double long Mars = 0.63345 * 10e24;
    const double long Mercury = 0.32868 * 10e24;
    const double long Neptune = 101.59200 * 10e24;
    const double long Saturn = 561.80376 * 10e24;
    const double long Uranus = 86.05440 * 10e24;
    const double long Jupiter = 1876.64328 * 10e24;
    double long average;
    average = (Venus * Earth * Mars * Mercury * Neptune * Saturn * Uranus * Jupiter) / 8;
    cout << "Weight of all planets = " << (Venus + Earth + Mars + Mercury + Neptune + Saturn + Uranus + Jupiter);
    cout << "Average of all planets = " << average << "\n";

    const double percent_Venus = 0.00016;
    const double percent_Earth = 0.00017;
    const double percent_Mars = 0.00003;
    const double percent_Mercury = 0.00000017;
    const double percent_Neptune = 7.53;
    const double percent_Saturn = 18.98;
    const double percent_Uranus = 1.23;
    const double percent_Jupiter = 71.41;

    double long big;
    big = (percent_Jupiter - (percent_Earth + percent_Mars + percent_Neptune + percent_Saturn + percent_Venus + percent_Mercury + percent_Uranus)) / (percent_Earth + percent_Mars + percent_Neptune + percent_Saturn + percent_Venus + percent_Mercury + percent_Uranus);
    cout << "Jupiter more than all planets " << big << " times." << "\n";
}