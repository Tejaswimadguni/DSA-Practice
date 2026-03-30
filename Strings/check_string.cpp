class Solution {
public:
    bool checkString(string s) {
        bool m=false;
        
               for(int i=0;i<s.length();i++){
                    
                    if(s[i]=='a'){
                         if(m==true){return false;}
                         m=false;
                    }else{
                         m=true;
                    }
               }
          
         
          return true;
    }
};
