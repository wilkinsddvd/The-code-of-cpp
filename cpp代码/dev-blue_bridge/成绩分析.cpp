#include<bits/stdc++.h>
using namespace std;

#define   1  180.90*0.88      
#define   2  10.25*0.65
#define   3 56.14*0.9    
#define   4  104.65*0.9
#define   5  100.30*0.88
#define   6  297.15*0.5  
#define   7   26.75*0.65       
#define   8  130.62*0.5        
#define   9  240.28*0.58       
#define   10  270.62*0.8        
#define   11  115.87*0.88       
#define   12  247.34*0.95       
#define   13   73.21*0.9        
#define   14  101.00*0.5        
#define   15   79.54*0.5       
#define   16  278.44*0.7        
#define   17  199.26*0.5       
#define   18   12.97*0.9        
#define   19 166.30*0.78       
#define   20  125.50*0.58       
#define   21   84.98*0.9        
#define   22  113.35*0.68       
#define   23  166.57*0.5        
#define   24   42.56*0.9        
#define   25   81.90*0.95       
#define   26  131.78*0.8        
#define   27  255.89*0.78       
#define   28  109.17*0.9        
#define   29  146.69*0.68       
#define   30     139.33*0.65       
#define   31  141.16*0.78       
#define   32  154.74*0.8        
#define   33   59.42*0.8        
#define   34   85.44*0.68       
#define   35  293.70*0.88       
#define   36  261.79*0.65       
#define   37   11.30*0.88       
#define   38  268.27*0.58       
#define   39  128.29*0.88       
#define   40  251.03*0.8        
#define   41  208.39*0.75       
#define   42  128.88*0.75       
#define   43  62.06*0.9        
#define   44  225.87*0.75       
#define   45   12.89*0.75       
#define   46   34.28*0.75       
#define   47   62.16*0.58       
#define   48  129.12*0.5        
#define   49  218.37*0.5        
#define   50  289.69*0.8        

int sum=0;

int main(){
  for(int i=1;i<=50;i++)
    sum+=i;
  if(sum%100!=0||sum/10%10!=0)
    sum+=100;
  cout<<sum<<endl;
  return 0;
}
