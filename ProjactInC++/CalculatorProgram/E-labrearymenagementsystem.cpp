#include<iostream>
#include<string>
using namespace std;
class Labrary{
    public:
    string bookname;
    string author;
    int pages;
    int price;
};
int main(){
    Labrary lab[100];
    string authorname,bookname;
    int n,input,bookcount;

    n = input = bookcount= 0;
    while(input!=5){
        cout<<"1. Add book\n2. Display book\n3. Search book by author\n4. Search book by bookname\n5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>input;

        switch(input){
            case 1:
            cout<<"Enter the book name: ";
            cin>>lab[n].bookname;      //lab[n] is an object of class Labrary
            cout<<"Enter the author name: ";
            cin>>lab[n].author;
            cout<<"Enter the number of pages: ";
            cin>>lab[n].pages;
            cout<<"Enter the price: ";
            cin>>lab[n].price;
            n++;
            bookcount++;
            break;
            case 2:
            for(int i=0;i<bookcount;i++){
                cout<<"Book name: "<<lab[i].bookname<<endl;
                cout<<"Author name: "<<lab[i].author<<endl;
                cout<<"Number of pages: "<<lab[i].pages<<endl;
                cout<<"Price: "<<lab[i].price<<endl;
            }
            break;
            case 3:
            cout<<"Enter the author name: ";
            cin>>authorname;
            for(int i=0;i<bookcount;i++){
                if(lab[i].author==authorname){
                    cout<<"Book name: "<<lab[i].bookname<<endl;
                    cout<<"Author name: "<<lab[i].author<<endl;
                    cout<<"Number of pages: "<<lab[i].pages<<endl;
                    cout<<"Price: "<<lab[i].price<<endl;
                }
            }
            break;
            case 4:
            cout<<"Enter the book name: ";
            cin>>bookname;
            for(int i=0;i<bookcount;i++){
                if(lab[i].bookname==bookname){
                    cout<<"Book name: "<<lab[i].bookname<<endl;
                    cout<<"Author name: "<<lab[i].author<<endl;
                    cout<<"Number of pages: "<<lab[i].pages<<endl;
                    cout<<"Price: "<<lab[i].price<<endl;
                }
            }
            break;
            case 5:
                cout<<" no book in labrary"<<endl<<bookcount<<endl;
            break;
            default:
            exit(0);
            cout<<"Invalid input";
            break;
        }
    }
    
    

}

