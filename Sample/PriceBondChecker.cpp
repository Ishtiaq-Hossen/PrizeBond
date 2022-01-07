#include<bits/stdc++.h>
using namespace std;
int ownNum=4;
int main()
{
    int k,num,t=0;
    bool count;
    
    
    string own[ownNum];
    string temp;

    ifstream myfile("files/own.txt");
    if(myfile.is_open()){
        while(myfile>>temp){
            own[t]=temp;
            t++;
        }
        myfile.close();
    }
    else{
        cout<<0<<endl;
    }
    /*cin.get();*/
    for(int i=0;i<ownNum;i++){
        
        cout<<own[i]<<" ";
    }
    cout<<endl;
    
    
    while(1){
        cout<<"============================================"<<endl;
        cout<<"|---------For Checking 1st Price Type 1----|"<<endl;
        cout<<"|---------For Checking 2nd Price Type 2----|"<<endl;
        cout<<"|---------For Checking 3rd Price Type 3----|"<<endl;
        cout<<"|---------For Checking 4th Price Type 4----|"<<endl;
        cout<<"|---------For Checking 5th Price Type 5----|"<<endl;
        cout<<"|---------For Exit Type 0------------------|"<<endl;
        cout<<"============================================\n\n"<<endl;
        cin>>num;
        if(num==0){
            break;
        }
        else if(num==1){
            count=true;
            cout<<"Number of Pricebond "<<endl;
            cin>>k;
            string price[k];
            ifstream cin("files/input1.txt");
            for(int i=0;i<k;i++){
                
                cin>>price[i];
                
            }
            
            for(int i=0;i<k;i++){
                
                for(int j=0;j<ownNum;j++){
                    if(price[i]==own[j]){
                        cout<<"Congrats you got 1st prize \nPrice bond number: "<<price[i]<<endl;
                        count=false;
                        
                    }            
                }
            }    
               
            if(count==true){
                cout<<"There is no match"<<endl;
            }         

        }
        else if(num==2){
            count=true;
            cout<<"Number of Pricebond "<<endl;
            cin>>k;
            string price[k];
            ifstream cin("files/input2.txt");
            for(int i=0;i<k;i++){
                
                cin>>price[i];
                
            }
            
            for(int i=0;i<k;i++){
                
                for(int j=0;j<ownNum;j++){
                    if(price[i]==own[j]){
                        cout<<"Congrats you got 2nd prize \nPrice bond number: "<<price[i]<<endl;
                        count=false;
                        
                    }            
                }
            }  
            if(count==true){
                cout<<"There is no match"<<endl;
            }      
        }
        else if(num==3){
            count=true;
            cout<<"Number of Pricebond "<<endl;
            cin>>k;
            string price[k];
            ifstream cin("files/input3.txt");
            for(int i=0;i<k;i++){
                
                cin>>price[i];
                
            }
            
            for(int i=0;i<k;i++){
                
                for(int j=0;j<ownNum;j++){
                    if(price[i]==own[j]){
                        cout<<"Congrats you got 3rd prize \nPrice bond number: "<<price[i]<<endl;
                        count=false;
                        
                    }            
                }
            }   
            if(count==true){
                cout<<"There is no match"<<endl;
            }    
        }
        else if(num==4){
            count=true;
            cout<<"Number of Pricebond "<<endl;
            cin>>k;
            string price[k];
            ifstream cin("files/input4.txt");
            for(int i=0;i<k;i++){
                
                cin>>price[i];
                
            }
            
            for(int i=0;i<k;i++){
                
                for(int j=0;j<ownNum;j++){
                    if(price[i]==own[j]){
                        cout<<"Congrats you got 4th prize \nPrice bond number: "<<price[i]<<endl;
                        count=false;
                        
                    }            
                }
            }
            if(count==true){
                cout<<"There is no match"<<endl;
            }       
        }
        else if(num==5){
            count=true;
            cout<<"Number of Pricebond "<<endl;
            cin>>k;
            string price[k];
            ifstream cin("files/input5.txt");
            for(int i=0;i<k;i++){
                
                cin>>price[i];
                
            }
            
            for(int i=0;i<k;i++){
                
                for(int j=0;j<ownNum;j++){
                    if(price[i]==own[j]){
                        cout<<"Congrats you got 5th prize \nPrice bond number: "<<price[i]<<endl;
                        count=false;
                        
                    }            
                }
            } 
            if(count==true){
                cout<<"There is no match"<<endl;
            }     
        }
        else{
            cout<<"-----------404 error -------------\n-----------Type correct number-----------\n";
        }

        
    }
    
    
    return 0;
}