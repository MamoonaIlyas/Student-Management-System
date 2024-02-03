#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;
struct stud
{
	string Name,Father_name;
    int Roll_num,ID;
    int Class;
    char Section;
};
stud S[50];
int total=0;
void Enter_Data(){
	int choice;
	cout<<" How many student data do you want to enter ??"<<endl;
	cin>>choice;
	fstream new_file;
	new_file.open("Student Data .txt",ios::app);
	if(!new_file)
	{
		cout<<"File creation failed";
	}
	else
	{
	cout<<"New file created ";
	for(int i=total;i<total+choice;i++){
		cout<<"\n\n\t********** Enter Student Data **********\n\n"<<i+1<<"  ";	
		cout<<"Enter Student ID :"<<endl;
		cin>>S[i].ID;
	    cout<<"Enter Student name :"<<endl;
	    cin>>S[i].Name;
	    cout<<"Enter Father name :"<<endl;
	    cin>>S[i].Father_name;
	    cout<<"Enter roll num :"<<endl;
		cin>>S[i].Roll_num;
	    cout<<"Enter Class :"<<endl;
	    cin>>S[i].Class;
	    cout<<"Enter Section :"<<endl;
	    cin>>S[i].Section;
	    new_file<<S[i].ID<<"\t"<<S[i].Name<<"\t"<<S[i].Father_name<<"\t"<<S[i].Roll_num<<
	"\t"<<S[i].Class<<"\t"<<S[i].Section<<endl;
	
	}
	total=total+choice;
	new_file.close();
	}
}
void Display_Data(){
	
	if(total!=0){

			cout<<"\n\n\t************ Display Student Data ************\n\n"<<" ";
			
			cout<<"\n\t Student ID "<<"\t Student Name "<<"\t Father Name "
			<<"\t Roll Number "<<"\t Class "<<"\t Section ";
				for(int i=0;i<total;i++){
   cout<<"\n\t------------------------------------------------------------------------------";
			cout<<"\n\t"<<S[i].ID<<"\t\t  "<<S[i].Name<<"\t    "
			<<S[i].Father_name<<"\t   "<<S[i].Roll_num<<"\t\t "
			<<S[i].Class<<"\t "<<S[i].Section;
	cout<<endl;
	}
		}
     else{
		cout<<" Your record is empty "<<endl;
	}
}
void Update_Data(){
	
	if(total!=0){
	   int ID;
	   cout<<" Enter ID of data which you want to update "<<endl;
	   cin>>ID;
	   for(int i=0;i<total;i++){
	   	    if(ID==S[i].ID){
	   	    	cout<<" \n\n***** Previous Data *****\n\n "<<endl;
	   	    	
	   	    	cout<<"\n\n\t********** Student Data **********\n\n";
			    
			    cout<<" Student ID : "<<S[i].ID<<endl;
		    	cout<<" Student Name : "<<S[i].Name<<endl;
			    cout<<" Father Name : "<<S[i].Father_name<<endl;
			    cout<<" Roll Number : "<<S[i].Roll_num<<endl;
			    cout<<" Class : "<<S[i].Class<<endl;
			    cout<<" Section : "<<S[i].Section<<endl;
			    
			    cout<<" \n\n***** Enter new data *****\n\n "<<endl;
			    
			     cout<<"Enter Student ID :"<<endl;
			     cin>>S[i].ID;
			     cout<<"Enter Student name :"<<endl;
	             cin>>S[i].Name;
	             cout<<"Enter Father name :"<<endl;
	             cin>>S[i].Father_name;
	             cout<<"Enter roll num :"<<endl;
		         cin>>S[i].Roll_num;
	             cout<<"Enter Class :"<<endl;
	             cin>>S[i].Class;
	             cout<<"Enter Section :"<<endl;
	             cin>>S[i].Section;
			    break;
			   }
			   if(i==total-1){
			   	cout<<" No such record found "<<endl;
			   }
		}
	}
	else{
		cout<<" Your record is empty "<<endl;
	}
}
void Search_Data(){
	if(total!=0){
	   int ID;
	   cout<<" Enter ID of data which you want to search "<<endl;
	   cin>>ID;
	   for(int i=0;i<total;i++){
	   	    if(ID==S[i].ID){
	   	    	cout<<"\n\n\t********** Student Data **********\n\n";
			
			    cout<<" Student ID : "<<S[i].ID<<endl;
		    	cout<<" Student Name : "<<S[i].Name<<endl;
			    cout<<" Father Name : "<<S[i].Father_name<<endl;
			    cout<<" Roll Number : "<<S[i].Roll_num<<endl;
			    cout<<" Class : "<<S[i].Class<<endl;
			    cout<<" Section : "<<S[i].Section<<endl;
			    break;
			   }
			   if(i==total-1){
			   	cout<<" No such record found "<<endl;
			   }
	   }
	}
	else{
		cout<<" Your record is empty "<<endl;
	}
}
void Delete_Data(){
	if(total!=0){
			char user;
		cout<<" Press 1. Delete full record "<<endl;
		cout<<" Press 2. Delete specific record "<<endl;
		user= getch();
		if(user=='1'){
			total=0;
			cout<<" All record is deleted . . . ! ! ! "<<endl;
		}
		else if(user=='2'){
			int ID;
	        cout<<" Enter ID of data which you want to delete "<<endl;
	        cin>>ID;
	        for(int i=0;i<total;i++){
	        	if(ID==S[i].ID){
	        		for(int j=i;j<total;j++){
	        		S[j].ID=S[j+1].ID;	
	        	    S[j].Name=S[j+1].Name;
					S[j].Father_name=S[j+1].Father_name;
					S[j].Roll_num=S[j+1].Roll_num;
					S[j].Class=S[j+1].Class;
					S[j].Section=S[j+1].Section;
					total--;
					cout<<" Your required record is deleted "<<endl;
					break;
			    	}
			    }
			if(i=total-1){
			    	cout<<" No such record found "<<endl;	  
				}
 			}
	   }
	else{
		cout<<" Your record is empty "<<endl;
	}
}
}
void Logout_Data(){
cout<<" Logout Data . . . ! ! !"<<endl;
	if(total!=0){
        total=0;
			cout<<" Logout . . . ! ! ! "<<endl;
		}
	}
int main()
{
system("pause");
system("cls");
	cout<<"\n\n\t\t********** STUDENT DATA MANAGEMENT SYSTEM **********\n\n "<<endl;
	cout<<"\n\n\t\t Sign Up "<<endl;
	string username,password;
	cout<<"\n\t\t Enter username : ";
	cin>>username;
	cout<<"\n\t\t Enter password : ";
	cin>>password;
	cout<<"\n\t\t Your id is creating please wait ";
	for(int i=0;i<4;i++)
	{
		cout<<" . ";
		Sleep(1000);
	}
	cout<<"\n\t\t Your id created successfully "<<endl;
	system("CLS");
	start:
		system("CLS");
	cout<<"\n\n\t\t********** STUDENT DATA MANAGEMENT SYSTEM **********\n\n "<<endl;
	cout<<"\n\n\t\t Login "<<endl;
	string username1,password1;
	cout<<" \t\t Username : ";
	cin>>username1;
	cout<<" \t\t Password : ";
	cin>>password1;
	if(username1==username&&password1==password){
		system("CLS");
	  char user;
	  while(1){
	  		system("CLS");
	  	cout<<endl<<endl;
	  	  cout<<"\n\t\t\t\t**************************************************** \n";
          cout<<" \t\t\t\t\t\t\tMENU \t \n ";
          cout<<"\t\t\t\t**************************************************** \n";
        string a,b,c;
	  	 cout<<" \t\t\t\tPress 1. Enter student records\n";
         cout<<" \t\t\t\tPress 2. Display student records\n";
         cout<<" \t\t\t\tPress 3. Update student records \n";
         cout<<" \t\t\t\tPress 4. Search student records \n";
         cout<<" \t\t\t\tPress 5. Delete student records \n";
         cout<<" \t\t\t\tPress 6. Logout \n";
         cout<<" \t\t\t\tPress 7. Login \n";
         user= getch();
         	system("CLS");
         switch(user){
         	case '1':
         		Enter_Data();
         		system("pause");
         		break;
         	case '2':
         		Display_Data();
         			system("pause");
         		break;
			case '3':
         		Update_Data();
         			system("pause");
         		break;
			case '4':
         		Search_Data();
         			system("pause");
         		break;
			case '5':
         		Delete_Data();
         			system("pause");
         		break;
         		case '6':
         		Logout_Data();
         			system("pause");
         		break;
			case '7':
         		goto start;
         		break;
         	
			default:
			    cout<<"\a  Invalid Input "<<endl;
				break;	
		 }
	  }
  }
	 
   
	else if(username1!=username){
		cout<<" Your username is incorrect "<<endl;
		Sleep(3000);
		goto start;
	}
	else if(password1!=password){
		cout<<" Your password is incorrect "<<endl;
		Sleep(3000);
		goto start;
	}

	return 0;
}
