#include<iostream>
#include<windows.h>
#define code flag=!flag;if(flag==1)  cout<<"player "<<w<<" is on strike now\n";else   cout<<"player "<<q<<" is on strike now\n";
using namespace std;
class score
{
  int ovr=0,run=0,ball=0;
  int ch;
  int p,g,flag=0,arr[13]={0},q=1,w=2,sum=0,out=0,wd=0,extras=0,r=0,lb=0,b=0,pl=0,nb=0;
  public:
  void getrun();
  void bowling();
};
void score::bowling()
{
    int bow[10]={0},wick[11]={0},bno=0,wickets=0;
    cout<<"Welcome.... For how many overs would you like to play\n";
    cin>>ovr;
    cout<<"[Note: In case of a dot ball,wide,leg byes,byes and an Out! then enter run as 0.... then make your choice]\n";

    while(ovr--)
    {
       Sleep(1000);
       cout<<"enter the bowler number \n";
       cin>>bno;
       for(int i=1;i<=6;i++)
       {
        x:   cout<<"how many runs were scored on the "<<i<<" bowl\n";
           cin>>run;
           if(run==0)
            {
                cout<<"make your choice  1.Out!   2.Dot   3.Wide   4.Leg Byes   5.Byes   6.No ball\n";
                cin>>ch;
                switch(ch)
                {
                case 1:
                    wickets++;
                    wick[bno]=wick[bno]+wickets;
                    wickets=0;
                    break;
                case 2:
                    cout<<"bowl the next delivery\n";
                    break;
                case 3:
                      cout<<"that was a wide ball \nyou have to ball that again\n";
                      wd++;
                      bow[bno]=bow[bno]+wd;
                      goto x;
                      break;
                case 4:
                    cout<<"how many runs were scored on legbyes\n";
                    cin>>lb;
                    break;
                case 5:
                    cout<<"how many bye runs were scored on that ball\n";
                    cin>>b;
                    break;
                case 6:
                    nb++;
                    cout<<"you have to bowl that again \n ";
                    cout<<"how many runs were scored on that ball\n";
                    cin>>run;
                    cout<<"next ball will be a free hit\n";
                    bow[bno]=bow[bno]+run;
                    goto x;
                default:
                    cout<<"Invalid Entry\n";

                }
            }
            else
            {
                bow[bno]=bow[bno]+run;
            }
       }
    }
            extras=lb+nb+b;

            cout<<"-----Thats end of the innings \n the scorecard is as follows\n";
            for(int i=bno;i>0;i--)
            {
                cout<<"bowler "<<i<<" conceded "<<bow[i]<<" took "<<wick[i]<<" wickets"<<endl;
            }
            cout<<"extras---"<<extras<<endl;
}


void score::getrun()
{

    cout<<"WELCOME!....";
    Sleep(1000);
    cout<<" \nFor how many overs would you like to play\n";
    cin>>ovr;
    ball=6*ovr;
    Sleep(1000);
    cout<<"player 1 is on strike now,playing the first ball\n";
    Sleep(1000);
    cout<<"[Note: In case of a dot ball,wide,leg byes,byes and an Out! then enter run as 0.... then make your choice]\n";
    Sleep(1000);
    for(int i=1;i<=ball;i++)
    {
      x: cout<<"-:how many runs were scored on "<<i<<" ball\n";
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
                cout<<"that was a wide ball \nyou have to ball that again\n";
                wd++;
                goto x;
            }break;
          case 4:
            {
                cout<<"how many leg byes runs were scored \n";
                cin>>lb;
                if(lb==1||lb==3)
          {
          code;
            }}break;
          case 5:
            {
                cout<<"how many byes runs were scored \n";
                cin>>b;
                if(b==1||b==3)
           {
               code;
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
               code;
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
          code;
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
int main()
{
    int choice;
  score ob;
  cout<<"HELLO CRICKET LOVERS....\nHERE YOU CAN MAINTAIN A BATTING AS WELL AS A BOWLING SCORECARD\n";
  Sleep(1000);
  while(1)
  {
   cout<<"Make your choice \n 1.Batting Scorecard  2.Bowling Scorecard  3.Exit\n";
   cin>>choice;
   switch(choice)
   {
   case 1:
    ob.getrun();
    break;
   case 2:
    ob.bowling();
    break;
   default:
    cout<<"Thank You!\n";
    return 0;
   }
  }

  return 0;
}

