//ไม่ต้องเติม function main()
char before(char x){
if(x >= 65 and x <= 90 ){
 x = x-1 ;
    if(x < 65){
        x = 90 ;
        return x ;
        }
    return x ;
    }
else{
    return '0' ;
    }

   
    
}