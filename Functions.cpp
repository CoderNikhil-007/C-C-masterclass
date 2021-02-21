#include<iostream>
using namespace std;
void tri_pattern(int q)
{
    int i,j;
    for(i=1;i<=q;i++)
    {
        for(j=1;j<=i;j++)
            cout<<"*";
            cout<<"\n";
    }
}
void rect_pattern(int s,int t)
{
    int i,j;
    for(i=1;i<=s;i++)
    {
        for(j=1;j<=t;j++)

            cout<<"&";
        cout<<"\n";

    }
}
int fib(int n)
{
    int f;
    if(n==1||n==2)
    return 1;
    f = fib(n-1)+fib(n-2);
    return f;

}

class student{
    public:
        int roll_number;
        string name;
        float marks;
        float percentage;


    student(int rl,string nm,float m,float per,int fp)
    {
        this->roll_number= rl;
        this->name= nm;
        this->marks = m;
        this->percentage = per;
        this->fee_password = fp;
    }

    void student_info()
    {
        cout<<"Roll Number = "<<this->roll_number<<endl<<"Name = "<<this->name<<endl<<"Marks = "<<this->marks<<endl<<"Percentage = "<<this->percentage<<endl;
    }
    void get_password()
    {
        cout<<"Your Fee Password is "<<this->fee_password<<endl<<"Don't Share this with anybody"<<endl;
    }
    private:
        int fee_password;

};
class resident{
    public:

    resident(int bn,int f,string on,int c,float u,float b,string ld)
    {
        this->building_number=bn;
        this->floor=f;
        this->owner_name=on;
        this->contact=c;
        this->units=u;
        this->bill=b;
        this->last_date=ld;
    }
    //public:
    //void get_input()
    //{
    //    building_number=12;
    //    floor=3;
    //    owner_name="Pawan Mishra";
    //    contact=9990120708;
    //    units=100.00;
    //    bill=700.00;
    //    last_date="25.02.2021";
    //}

void generate_bill()
{
    cout<<"Buuilding Number = "<<this->building_number<<endl<<"Floor = "<<this->floor<<endl<<"Name = "<<this->owner_name<<endl<<"Contact Number"<<this->contact<<endl<<"Units Consumed = "<<this->units<<endl<<"Total Bill "<<this->bill<<endl<<"Last Date = "<<this->last_date<<endl;
}
private:
        int building_number;
        int floor;
        string owner_name;
        int contact;
        float units;
        float bill;
        string last_date;




};
void tower(int a, int b, int c, int d)
{
    if(a%d==0 && b%d==0 && c%d==0)
        cout<<"Done"<<endl;
    else
        cout<<"Give Up"<<endl;
}

void array_total(int a[50])
{
    int i,s=0;
    for(i=0;i<=1;i++)
    {
        s = s+ a[i];
    }
    cout<<s<<endl;
        int summ = 0;
        while(s>0)
        {
            summ = summ + (s%10);
            s = s/10;
        }
        cout<<summ<<endl;
        int total=0;
        while(summ>0)
        {
            total = total + (summ%10);
            summ = summ/10;
        }

        if(total>9)
        {
            total = (total/10) + (total%10);
            cout<<total<<endl;
        }
        else
        {
            cout<<total<<endl;
        }
}
int tot(int arr[50])
{
long long int s=0,total=0;
    for(int i=0;i<1;i++)
    {
        s=s+arr[i];
    }
    total=s;
    while(s/10)
    {
        total=0;
        while(s)
        {
            total+=(s%10);
            s=s/10;
        }
        s=total;
    }
    return total;
}


int main()
{
    int p,q,i;
    cout<<"Enter the numbers"<<endl;
    cin>>p>>q;
    tri_pattern(p);
    rect_pattern(p,q);
    cout<<fib(1);
    for(i=2;i<=p;i++)
    {
        cout<<"-"<<fib(i);
    }
    student Nikhil(55,"Nikhil Mishra",98.5,98.5,786);
    Nikhil.student_info();
    int rp;
    cout<<"Please Enter Password"<<endl;
    cin>>rp;
    if(rp==007)
        Nikhil.get_password();
    else
        cout<<"Error:: Please Enter correct Password"<<endl;
    int n;
    cout<<"Please Enter your Password"<<endl;
    cin>>n;
    resident pawan(12,3,"Pawan Mishra",9990120590,100.00,700.00,"25.02.2021");
    if(n == 120)
        pawan.generate_bill();
    else
       cout<<"Error:: Please enter correct password"<<endl;
     int T,N,I;
     cin>>T;
     for(I=1;I<=T;I++)
     {
        cin>>N;
        cout<<(fib(N-1)*fib(N+1)- (fib(N)*fib(N)));
     }
     int a[50] = {9991,0};
     array_total(a);
     int x;
     x = tot(a);
     cout<<x<<endl;
     return 0;
}

