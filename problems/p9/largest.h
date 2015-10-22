#include <vector>
#include <cmath>
static int largest(std::vector<int> &v)
{
	
int sortarr[v.size()];
   int leng[v.size()];
   int big = 0;
   
   //get number length
   cout << "Get: " << endl;
   for (int i = 0 ;  i < v.size()  ;i++){
      cout<< v[i] << endl;
      if (v[i]>99999){
         leng[i] =6;
      }
      if (v[i]>9999){
         leng[i] =5;
      }
      else if (v[i]>999){
         leng[i] =4;
      }
      else if (v[i]>99){
         leng[i] =3;
      }
      else if (v[i]>9){
         leng[i] =2;
      }
      else {
         leng[i] =1;
      }
      
      if (leng[i]>big){
         big = leng[i];
      }   
      }
    
   //fill new array   
   cout << "Sort as:" << endl;    
   for (int i = 0 ;  i < v.size()  ;i++){
      if (v[i]>9){
         sortarr[i]=v[i]*pow(10,big-leng[i]);
      }
      else{
      sortarr[i]=v[i]*pow(10,big-leng[i]);
      }
      cout<<sortarr[i]<<endl;
   }
   
	//sort	
  for(int i=0;  i < v.size()  ;i++){
      for(int j=i+1;  j < v.size()  ;j++){
          if(sortarr[i]<sortarr[j]){
              int temp = sortarr[i];
              sortarr[i] = sortarr[j];
              sortarr[j] = temp;
              
              int temp1 = v[i];
              v[i] = v[j];
              v[j] = temp1;
              }
              }
              }
   
   //print number
   cout << "Biggest Number: " << endl;           
      for(int i= 0;  i < v.size()  ;i++){
         cout << v[i];
         }
         
   cout << endl;
	return 0;
}