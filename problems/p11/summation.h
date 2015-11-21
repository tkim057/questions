#include <vector>
static std::vector<std::pair<int, int> > summation(std::vector<int> &v, int n)
{
   std::vector<std::pair<int, int> > name;
   for(int i = 1; i <= v.size(); i++){
       for(int j = i; j <= v.size(); j++){
           if (i+j==n){
               name.push_back(std::pair(i,j));
           }
       }
   }
   return name;
}