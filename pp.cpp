#include<iostream>
#include<fstream>
#include<windows.h>
#include<string>
using namespace std;
void english()
{
	system("cls");
	int serialno,number;
	string book,ISSN,publisher;
	float cost;
	ofstream add("English.txt");
	if(!add){
		cout<<"file is not creat"<<endl;
		exit(1);
	}
	else{
		cout<<"file is created suceesfully"<<endl;
		cout<<"     "<<endl;
	}
	    while(true){
		cout<<"  "<<endl;
		cout<<"Serial NO# ";
		cin>>serialno;
		cout<<"Book name"<<endl;
		cin>>book;
		cout<<"ISSN"<<endl;
		cin>>ISSN;
		cout<<"Publisher name"<<endl;
		cin>>publisher;
		cout<<"cost of book"<<endl;
		cin>>cost;
		add<<"Serial NO# "<<serialno<<endl<<"Book name: "<<book<<endl<<"    ISSN:  "<<ISSN<<endl<<"  publisher name:  "<<publisher<<endl<<"  cost of book:   "<<cost<<endl;
	cout<<"enter 0 if you want to exit to main menue then  "<<endl;
	cout<<"enter 1 if you want to add other book"<<endl;
		cin>>number;
		if(number>=1)
		continue;
		else if(number<=0)
		break;
		}
}
	void math()
{
	system("cls");
	int serialno,number;
	string book,ISSN,publisher;
	float cost;
	ofstream add("math.txt");
	if(!add){
		cout<<"file is not creat"<<endl;
		exit(1);
	}
	else{
		cout<<"file is created suceesfully"<<endl;
		cout<<"     "<<endl;
	}
	while(true){
		cout<<"serial NO# ";
		cin>>serialno;
		cout<<"Book name"<<endl;
		cin>>book;
		cout<<"ISSN"<<endl;
		cin>>ISSN;
		cout<<"Publisher name"<<endl;
		cin>>publisher;
		cout<<"cost of book"<<endl;
		cin>>cost;
		add<<"Serial NO# "<<serialno<<endl<<"Book name = "<<book<<endl<<"    ISSN =  "<<ISSN<<endl<<"  publisher name =  "<<publisher<<endl<<"  cost of book =   "<<cost<<endl;
cout<<"enter 0 if you want to exit to main menue then  "<<endl;
	cout<<"enter 1 if you want to add other book"<<endl;
		cin>>number;
		if(number>=1)
		continue;
		else if(number<=0)
		break;
	}
}
	void urdu()
{
	system("cls");
	int serialno,number;
	string book,ISSN,publisher;
	float cost;
	ofstream add("urdu.txt");
	if(!add){
		cout<<"file is not creat"<<endl;
		exit(1);
	}
	else{
		cout<<"file is created suceesfully"<<endl;
		cout<<"     "<<endl;
	}

	while(true){
		cout<<"serial NO# ";
		cin>>serialno;
		cout<<"Book name"<<endl;
		cin>>book;
		cout<<"ISSN"<<endl;
		cin>>ISSN;
		cout<<"Publisher name"<<endl;
		cin>>publisher;
		cout<<"cost of book"<<endl;
		cin>>cost;
		add<<"Serial NO# "<<serialno<<endl<<"Book name = "<<book<<endl<<"    ISSN =  "<<ISSN<<endl<<"  publisher name =  "<<publisher<<endl<<"  cost of book =   "<<cost<<endl;
cout<<"enter 0 if you want to exit to main menue then  "<<endl;
	cout<<"enter 1 if you want to add other book"<<endl;
		cin>>number;
		if(number>=1)
		continue;
		else if(number<=0)
		break;
	}
}
	void islamiat()
{
	system("cls");
	int serialno,number;
	string book,ISSN,publisher;
	float cost;
	ofstream add("islamiat.txt");
	if(!add){
		cout<<"file is not creat"<<endl;
		exit(1);
	}
	else{
		cout<<"file is created suceesfully"<<endl;
		cout<<"     "<<endl;
	}

	while(true){	
		cout<<"serial NO# ";
		cin>>serialno;
		cout<<"Book name"<<endl;
		cin>>book;
		cout<<"ISSN"<<endl;
		cin>>ISSN;
		cout<<"Publisher name"<<endl;
		cin>>publisher;
		cout<<"cost of book"<<endl;
		cin>>cost;
		add<<"Serial NO# "<<serialno<<endl<<"Book name = "<<book<<endl<<"    ISSN =  "<<ISSN<<endl<<"  publisher name =  "<<publisher<<endl<<"  cost of book =   "<<cost<<endl;
cout<<"enter 0 if you want to exit to main menue then  "<<endl;
	cout<<"enter 1 if you want to add other book"<<endl;
		cin>>number;
		if(number>=1)
		continue;
		else if(number<=0)
		break;
	}
}
	void pakstudy()
{
	system("cls");
	int serialno,number;
	string book,ISSN,publisher;
	float cost;
	ofstream add("pakstudy.txt");
	if(!add){
		cout<<"file is not creat"<<endl;
		exit(1);
	}
	else{
		cout<<"file is created suceesfully"<<endl;
		cout<<"    "<<endl;
	}

	while(true){
		cout<<"serial NO# ";
		cin>>serialno;
		cout<<"Book name"<<endl;
		cin>>book;
		cout<<"ISSN"<<endl;
		cin>>ISSN;
		cout<<"Publisher name"<<endl;
		cin>>publisher;
		cout<<"cost of book"<<endl;
		cin>>cost;
		add<<"Serial NO# "<<serialno<<endl<<"Book name = "<<book<<endl<<"    ISSN =  "<<ISSN<<endl<<"  publisher name =  "<<publisher<<endl<<"  cost of book =   "<<cost<<endl;
cout<<"enter 0 if you want to exit to main menue then  "<<endl;
	cout<<"enter 1 if you want to add other book"<<endl;
		cin>>number;
		if(number>=1)
		continue;
		else if(number<=0)
		break;
	}
}
	void computer()
{
	system("cls");
	int serialno,number;
	string book,ISSN,publisher;
	float cost;
	ofstream add("computer.txt");
	if(!add){
		cout<<"file is not creat"<<endl;
		exit(1);
	}
	else{
		cout<<"file is created suceesfully"<<endl;
		cout<<"     "<<endl;
	}
	while(true){
		cout<<"serial NO# ";
		cin>>serialno;
		cout<<"Book name"<<endl;
		cin>>book;
		cout<<"ISSN"<<endl;
		cin>>ISSN;
		cout<<"Publisher name"<<endl;
		cin>>publisher;
		cout<<"cost of book"<<endl;
		cin>>cost;
		add<<"Serial NO# "<<serialno<<endl<<"Book name = "<<book<<endl<<"    ISSN =  "<<ISSN<<endl<<"  publisher name =  "<<publisher<<endl<<"  cost of book =   "<<cost<<endl;
cout<<"enter 0 if you want to exit to main menue then  "<<endl;
	cout<<"enter 1 if you want to add other book"<<endl;
		cin>>number;
		if(number>=1)
		continue;
		else if(number<=0)
		break;
	}
}
	void writefile()
	{
		system("cls");
		int choose;
		cout<<"\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"\t\t\t\t*******************"<<endl;
		cout<<"\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"\t\t\t\t::      Enter 1 to add english books             ::"<<endl;
		cout<<"\t\t\t\t::      Enter 2 to add math books                ::"<<endl;
		cout<<"\t\t\t\t::      Enter 3 to add urdu books                ::"<<endl;
		cout<<"\t\t\t\t::      Enter 4 to add islamiat books            ::"<<endl;
		cout<<"\t\t\t\t::      Enter 5 to add pakstudy books            ::"<<endl;
		cout<<"\t\t\t\t::      Enter 6 to add computer books            ::"<<endl;
		cout<<"\t\t\t\t::      Enter 7 to leave                         ::"<<endl;
		cout<<"\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"Choose your option"<<endl;
		cin>>choose;
		switch (choose){
			case 1:
				english();
				break;
				case 2:
					math();
					break;
					case 3:
						urdu();
						break;
						case 4:
							islamiat();
							break;
							case 5:
								pakstudy();
								break;
								case 6:
									computer();
									break;
									case 7:
										exit(0);
										break;
								   default:
								   	cout<<"your information is invalid";
								   	break;
		}
	}

void englisH()
{
	system("cls");
	string gotext;
	
	ifstream myreadtext("english.txt");
	while(getline(myreadtext,gotext))
	{
		cout<<gotext<<endl;
	}
	myreadtext.close();
	
}
void matH()
{
	system("cls");
	string gotext;
	
	ifstream myreadtext("math.txt");
	while(getline(myreadtext,gotext))
	{
		cout<<gotext<<endl;
	}
	myreadtext.close();
	
}
void urdU()
{
	system("cls");
	string gotext;
	
	ifstream myreadtext("urdu.txt");
	while(getline(myreadtext,gotext))
	{
		cout<<gotext<<endl;
	}
	myreadtext.close();
	
}
void islamiaT()
{
	system("cls");
	string gotext;
	
	ifstream myreadtext("islamiat.txt");
	while(getline(myreadtext,gotext))
	{
		cout<<gotext<<endl;
	}
	myreadtext.close();
	
}
void pakstudY()
{
	system("cls");
	string gotext;
	
	ifstream myreadtext("pakstudy.txt");
	while(getline(myreadtext,gotext))
	{
		cout<<gotext<<endl;
	}
	myreadtext.close();
	
}
void computeR()
{
	system("cls");
	string gotext;
	
	ifstream myreadtext("computer.txt");
	while(getline(myreadtext,gotext))
	{
		cout<<gotext<<endl;
	}
	myreadtext.close();
	
}
void readmybook()
{
	system("cls");
	int press;
	cout<<"\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t\t\t\t*****************"<<endl;
	cout<<"\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t\t\t\t::   Enter 1 to read english file              ::"<<endl;
	cout<<"\t\t\t\t\t\t::   Enter 2 to read math file                 ::"<<endl;
	cout<<"\t\t\t\t\t\t::   Enter 3 to read urdu file                 ::"<<endl;
	cout<<"\t\t\t\t\t\t::   Enter 4 to read Islamiat file             ::"<<endl;
	cout<<"\t\t\t\t\t\t::   Enter 5 to read Pak study file            ::"<<endl;
	cout<<"\t\t\t\t\t\t::   Enter 6 to read computer file             ::"<<endl;
	cout<<"\t\t\t\t\t\t::   Enter 7 for left                          ::"<<endl;
	cout<<"\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"Enter your option"<<endl;
	cin>>press;
	switch (press){
		case 1:
			englisH();
			break;
			case 2:
				matH();
				break;
				case 3:
					urdU();
					break;
					case 4:
						islamiaT();
						break;
						case 5:
							pakstudY();
							break;
							case 6:
							computeR();
							break;
							case 7:
								exit(0);
								break;
							default:
								cout<<"you are left"<<endl;
								break;
	}
}
void writestudentrecord()
{
	system("cls");
	int number;
	string a,b,e;
	double c,d,f;
   system("cls");
	ofstream myaddfile("writestudentdata.txt");
		while(true){	
	cout<<"Student Name "<<endl;
	cin>>a;
	cout<<"Enter your CNIC "<<endl;
	cin>>c;
	cout<<"enter your phone number"<<endl;
	cin>>f;
	cout<<"Enter Email Address "<<endl;
	cin>>b;
    cout<<"Enter library card number  "<<endl;
	cin>>d;
	cout<<"book name issued to student"<<endl;
	cin>>e;
	myaddfile<<"name of student = "<<a<<endl<<"  CNIC = "<<c<<endl<<"phone NO = "<<f<<endl<<"  Email = "<<b<<endl<<"  library card NO = "<<d<<endl<<"  book name issued  ="<<e<<endl;
cout<<"enter 0 if you want to exit to main menue then  "<<endl;
	cout<<"enter 1 if you want to add other student data "<<endl;
		cin>>number;
		if(number>=1)
		continue;
		else if(number<=0)
		break;
	}
	}    

void studentread()
{
	system("cls");
	string gotext;
	ifstream myreadtext("writestudentdata.txt");
	while(getline(myreadtext,gotext))
	{
		cout<<gotext<<endl;
	}
	myreadtext.close();
	
}
void studentdata(string name) {
	system("cls");
    ifstream file("writestudentdata.txt");
    string line;
    bool found = false;
    while (getline(file, line)) {
        if (line.find(name) != string::npos) {
            cout << line << endl;
            found = true;
            cout<<"Do not issue the book he was not returned the previous book"<<endl;
        }
    }
    if (!found) {
        cout << "he returned the previous book, So issued the book" << endl;
    }
}
int main(){
	system("color 5");
	char a = 219;
	cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
	
	if(a<=5)
	Sleep(2500);
	if(a>5&&a<=15)
	Sleep(1800);
	system("cls");
	while(true){
		
		int opt;
		string newstudent;
		cout<<"\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"\t\t********************************"<<endl;
		cout<<"\t\t::::::::::::::::::::::::::::       LIBRARY MANGEMENT MENUE         :::::::::::::::::::::::::"<<endl;
		cout<<"\t\t********************************"<<endl;
		cout<<"\t\t::::::::::::::::::::  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"\t\t::                     Option 1 for add new books information                             ::"<<endl;
		cout<<"\t\t::                    Option 2 for reading books files                                    ::"<<endl;
		cout<<"\t\t::     Option 3 for enter new student record while issue book and first go to option 5    ::"<<endl;
		cout<<"\t\t::                   Option 4 to read student record                                      ::"<<endl;
	    cout<<"\t\t::             Option 5 check that the student returned the previous book                 ::"<<endl;
		cout<<"\t\t::                          Option 6 for exit                                             ::"<<endl;
		cout<<"\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"  "<<endl;
		cout<<"Choose your option "<<endl;
		cin>>opt;
		switch (opt){
			case 1:
				writefile();
				break;
				case 2:
					readmybook();
					break;
					case 3:
					writestudentrecord();
					break;
					case 4:
						studentread();
						break;
						case 5:
							cout<<"enter name of student"<<endl;
							cin>>newstudent;
							studentdata(newstudent);							
						case 6:
							exit(0);
							break;
				default:
					cout<<"invalid information"<<endl;
		}
	}	
	return 0;	
	}
