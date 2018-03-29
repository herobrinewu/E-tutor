/*
  2018 03 30:01:21 <create>
  CMM13 easy
  停車費計算

*/


    #include <iostream>  
      
    using namespace std;  
      
    int main()  
    {  
        int a,b,c,A,B,C;        //a=start hr,A=end hr,c=mins,sum=answer  
        cin >>a>>b;  
        cin >>A>>B;  
      
        if(((a>=0 && a<=23) && (b>=0 && b<=60)) && ((A>=0 && A<=23) && (B>=0 && B<=60)) && A>a)  
        {  
			c=a*60+b;  
			C=A*60+B;  
				if(C-c<=120)  
				{  
					C=(C-c)/30*30;  
					}   else if(C-c<=240 && C-c>120)  
				{  
					C=120+((C-c-120)/30)*40;  
					}   else      
				{  
					C=280+((C-c-240)/30)*60;  
				}  
        }  
        cout << C << endl;
		return 0;
    }  
