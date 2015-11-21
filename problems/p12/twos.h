#include <string>
static int twos(int n){
    int count=0;
    for(int i = 1; i <= n; i++){
        for(unsigned j = 0; j < (std::to_string(i)).length(); j++ ){
        	if ((std::to_string(i)).at(j) == '2'){
        		count++;
        	}
        }
    }
   	return count;
}