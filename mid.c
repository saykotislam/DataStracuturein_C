#include<bits/stdc++.h>
#include<string>
 using namespace std;
int main()
{
   vector<string>Istiak_array,v2;

   Islam_array.push_back("Saykot");//Name: Saykot Islam
   v2.push_back("Islam");


   int n,i;
   cin>>n;

   for(i=1;i<=n;i++){

     string s1;
     string s2;

     cin>>s1>>s2;

     Islam_array.push_back(s1);
     v2.push_back(s2);
   }


   cout<<"All the names those starts with the first character of my name"<<endl<<endl;

   for(int i=1; i<=n; i++){

       string check= Islam_array[i];
       if (check[0]=='S'){
           cout<<Istiak_array[i]<<" "<<v2[i]<<endl;
       }
   }


   return 0;


}
