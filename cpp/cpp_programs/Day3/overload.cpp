#include<iostream>
using namespace std;
class percent
{
    public:
    percent() {value=0;}
    percent(int a) {value=a; if(value >100 || value <0) value=0;}
    percent(percent &a) {value=a.value;}
    void display() {cout<<value;}
    void operator++(int);
    void operator--(int);
    percent operator+(int);
    percent operator-(int);
    percent operator=(int);
    percent operator=(percent &);
    /* percent operator+(percent &);
    percent operator-(percent &);
    operator int();
    friend percent operator+(int,percent &);
    friend percent operator-(int,percent &); */
    private:
    int value;
};
void percent::operator++(int)
{
    value++;
    if(value==100)
        value=0;
}
void percent::operator--(int)
{
    value--;
    if(value==-1)
        value=100;
}
percent percent::operator+(int a)
{
    percent temp;
    temp.value=value+a;
    return temp;
}
percent percent::operator-(int a)
{
    percent temp;
    temp.value=value-a;
    return temp;
}
percent percent::operator=(int a)
{
    value=a;
    return *this;
}
percent percent::operator=(percent &a)
{
    value=a.value;
    return *this;
}
/* percent percent::operator+(percent &a)
{
    percent temp;
    temp.value=value+a.value;
    return temp;
}
percent percent::operator-(percent &a)
{
    percent temp;
    temp.value=value-a.value;
    return temp;
}
percent::operator int()
{
    return value;
}
percent operator+(int a,percent &b)
{
    percent temp;
    temp.value=a+b.value;
    return temp;
}
percent operator-(int a,percent &b)
{
    percent temp;
    temp.value=a-b.value;
    return temp;
} */
int main(){
    int num;
    percent myvalue1(40);
    percent myvalue2(20);
    percent myvalue3;
    percent d;
    myvalue1.display();
    myvalue1--;
    myvalue1.display();
    myvalue1++;
    myvalue1.display();
    d = 10 + 10;
    d.display();
    /* myvalue3=5 + myvalue1 + 10 + myvalue2 - 21;
    myvalue3.display();
    cout <<"\n";
    num = int(myvalue3);
    cout << num; */
    /* d = myvalue1+ myvalue2;
    cout <<"\n"<< d; */
}