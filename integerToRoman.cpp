class Solution {
public:
    string intToRoman(int num) {
        string val = "";
        while(num >= 1000){
            num = num - 1000;
            val.append("M");
        }
        while(num >= 900){
            num = num - 900;
            val.append("CM");
        }
        while(num >= 500){
            num = num - 500;
            val.append("D");
        }
        while(num >= 400){
            num = num - 400;
            val.append("CD");
        }
        while(num >= 100){
            num = num - 100;
            val.append("C");
        }
        while(num >= 90){
            num = num - 90;
            val.append("XC");
        }
        while(num >= 50){
            num = num - 50;
            val.append("L");
        }
        while(num >= 40){
            num = num - 40;
            val.append("XL");
        }
        while(num >= 10){
            num = num - 10;
            val.append("X");
        }
        while(num >= 9){
            num = num - 9;
            val.append("IX");
        }
        while(num >= 5){
            num = num - 5;
            val.append("V");
        }
        while(num >= 4){
            num = num - 4;
            val.append("IV");
        }
        cout<<num<<endl;
        while(num >= 1){
            num = num - 1;
            val.append("I");
        }
        return val;
    }
};