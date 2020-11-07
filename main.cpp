#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    int num1=0,num2=0,isIt1,counter=0,operator_num=0;
    string Operator,yesNo;
    bool isTrue=true,isNot6=true,correctNum=true,incorrectSelection=true;
    system("COLOR 6");
    /*  Color Codes:-

            0 = Black       8 = Gray
            1 = Blue        9 = Light Blue
            2 = Green       A = Light Green
            3 = Aqua        B = Light Aqua
            4 = Red         C = Light Red
            5 = Purple      D = Light Purple
            6 = Yellow      E = Light Yellow
            7 = White       F = Bright White
    */
    do
    {
        counter++;
        cout << "\n\n\t\t\t\t\t\t\tWelcome"
             << "\n\t\t\t\t\t\t  This is a CALCULATOR"
             << "\n\n\n\tEnter a NUMBER: ";
        cin  >> num1;
        do
        {
            num2=0;
            correctNum=true;
            while(correctNum!=false)
            {
                cout << "\n\n\t\tAddition +"
                     << "\n\n\t\tSubtraction -"
                     << "\n\n\t\tMultiplication *"
                     << "\n\n\t\tDivision /"
                     << "\n\n\t\tRemainder %"
                     << "\n\n\t\tResult ="
                     << "\n\n\t\t(Enter the symbol)"
                     << "\n\n\tEnter operator:";
                cin  >> Operator;
                operator_num=(Operator=="+")?1:(Operator=="-")?2:(Operator=="*")?3:(Operator=="/")?4:(Operator=="%")?5:(Operator=="=")?6:7;
                if (operator_num==7)
                {
                    cout << "\n\n\t\t\tPlease enter a valid operator(+,-,*,/,%,=).Thank you.";
                }
                else
                {
                    correctNum=false;
                }
            }
            if (Operator!="=")
            {
                cout << "\n\n\tEnter another number: ";
                cin  >> num2;
            }
            if (Operator=="+")
            {
                num1+=num2;
                isNot6=true;
            }
            if (Operator=="-")
            {
                num1-=num2;
                isNot6=true;
            }
            if (Operator=="*")
            {
                num1*=num2;
                isNot6=true;
            }
            if (Operator=="/")
            {
                num1/=num2;
                isNot6=true;
            }
            if (Operator=="%")
            {
                num1%=num2;
                isNot6=true;
            }
            if (Operator=="=")
            {
                isNot6=false;
            }
        }while(isNot6!=false);
        cout << "\n\n\t\tResult is equal to "<<num1;
        incorrectSelection=true;
        while(incorrectSelection!=false)
        {
            cout << "\n\n--------->Do you want to use the calculator again?(y/n): ";
            cin  >> yesNo;
            if (yesNo=="y" || yesNo=="Y")
                isIt1=1;
            else if (yesNo=="Counter" || yesNo=="COUNTER" || yesNo=="counter")
                isIt1=128;
            else if (yesNo=="n" || yesNo=="N")
                isIt1=0;
            else
                incorrectSelection=true;
            switch(isIt1)
            {
            case 1:
                incorrectSelection=false;
                isTrue=true;
                break;
            case 128:
                cout <<"\n\n\t\tThis program was used "<< counter <<" times.";
                incorrectSelection=false;
                isTrue=false;
                break;
            default:
                incorrectSelection=false;
                isTrue=false;
            }
            if (isTrue!=false)
            {
                system("pause");
                system("cls");
            }
        }
    }while(isTrue!=false);
    return 0;
}
