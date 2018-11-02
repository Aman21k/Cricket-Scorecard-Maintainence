#include<iostream>
#include<windows.h>
using namespace std;
class score
{
  int ovr=0,run=0,ball=0;
  int ch;
  public:
  void getrun()
  {
    int p,g,flag=0,arr[13]={0},q=1,w=2,sum=0,out=0,wd=0,extras=0,r=0,lb=0,b=0,pl=0,nb=0;
    cout<<"WELCOME!....";
    Sleep(1000);
    cout<<" \nFor how many overs would you like to play\n";
    cin>>ovr;
    ball=6*ovr;
    Sleep(1000);
    cout<<"player 1 is on strike now,playing the first ball\n";
    Sleep(1000);
    cout<<"[Note: In case of a dot ball,wide,leg byes,byes and an Out! then enter run as 0 then make your choice]\n";
    Sleep(1000);
    for(int i=1;i<=ball;i++)
    {
      x: cout<<"how many runs were scored on "<<i<<" ball\n";
        cin>>run;
       if(run==0)
       {
          cout<<"make your choice  1.Out!   2.Dot   3.Wide   4.Leg Byes   5.Byes   6.No ball\n";
          cin>>ch;
          switch(ch)
          {
            case 1:
          {
            out++;
            cout<<"enter the player... who got out \n";
            cin>>p;
            if(p==q)
            {
               cout<<"player "<<q<<" got out \n";
               cout<<"enter next player number \n";
               cin>>g;
               q=g;
               cout<<"next player  "<<q<<" is on the strike\n";
            }
            else if(p==w)
            {
              cout<<"player "<<w<<" got out \n";
               cout<<"enter next player number \n";
               cin>>g;
               w=g;
               cout<<"next player  "<<w<<"  is on the strike\n";

            }
            else
            {
              cout<<"invalid entry\n";
            }
          }break;
          case 2:
          {
            cout<<"it was a dot ball\n";
          }break;
          case 3:
            {
                cout<<"that was a wide ball \n you have to ball that again\n";
                wd++;
                goto x;
            }break;
          case 4:
            {
                cout<<"how many leg byes runs were scored \n";
                cin>>lb;
                if(lb==1||lb==3)
          {
          flag=!flag;
          if(flag==1)
          {
             cout<<"player "<<w<<" is on strike now\n";
          }
          else
          {
            cout<<"player "<<q<<" is on strike now\n";
          }
            }}break;
          case 5:
            {
                cout<<"how many byes runs were scored \n";
                cin>>b;
                if(b==1||b==3)
           {
          flag=!flag;
          if(flag==1)
          {
             cout<<"player "<<w<<" is on strike now\n";
          }
          else
          {
            cout<<"player "<<q<<" is on strike now\n";
          }
           } }break;
          case 6:
            {
                nb++;
                cout<<"how many runs were scored on that no ball\n";
                cin>>r;
                cout<<"who was on strike\n ";
                cin>>pl;
                if(pl==q)
                {
                    arr[q]=arr[q]+r;
                }
                else if(pl==w)
                {
                    arr[w]=arr[w]+r;
                }
                else cout<<"invalid entry \n";

         if(r==1||r==3)
           {
          flag=!flag;
          if(flag==1)
          {
             cout<<"player "<<w<<" is on strike now\n";
          }
          else
          {
            cout<<"player "<<q<<" is on strike now\n";
          }
           }
                cout<<"you have to ball that again....next ball will be a free hit \n";
                goto x;
            }break;
          default:
           cout<<"invalid entry \n";
       } }
    else
    {   if(flag==0)
       {
         arr[q]=arr[q]+run;
       }
       else
       {
         arr[w]=arr[w]+run;
       }
       if(run==1||run==3)
       {
          flag=!flag;
          if(flag==1)
          {
             cout<<"player "<<w<<" is on strike now\n";
          }
          else
          {
            cout<<"player "<<q<<" is on strike now\n";
          }
       }
  }
    }
    cout<<"Match finished \n";
    cout<<"After the completion of "<<ovr<<" over/overs\n";
    cout<<" The scorecard is as follows:\n";
    for(int i=1;i<=11;i++)
    {
        cout<<"player "<<i<<" scored \n"<<arr[i]<<endl;
    }
    for(int i=0;i<=11;i++)
    {
      sum=sum+arr[i];
    }
    extras=wd+lb+b+nb;
    cout<<"SCORECARD: "<<sum+extras<<" /"<<out<<endl;
    cout<<"Wides- "<<wd<<"  Leg byes- "<<lb<<"  Byes- "<<b<<"  No balls-"<<nb<<endl;
    cout<<"EXTRAS: "<<extras;
  }

};
int main()
{
  score ob;
  ob.getrun();
  return 0;
}

