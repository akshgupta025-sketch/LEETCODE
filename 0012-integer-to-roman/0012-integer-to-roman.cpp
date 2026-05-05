class Solution {
public:
    string intToRoman(int num) {
        string s = "";

        while(num > 0){

            if(num >= 1000){
                int q = num / 1000;
                num %= 1000;
                s += string(q, 'M');
            }

            else if(num >= 900){
                s += "CM";
                num -= 900;
            }

            else if(num >= 500){
                int q = num / 500;
                num %= 500;
                s += string(q, 'D');
            }

            else if(num >= 400){
                s += "CD";
                num -= 400;
            }

            else if(num >= 100){
                int q = num / 100;
                num %= 100;
                s += string(q, 'C');
            }

            else if(num >= 90){
                s += "XC";
                num -= 90;
            }

            else if(num >= 50){
                int q = num / 50;
                num %= 50;
                s += string(q, 'L');
            }

            else if(num >= 40){
                s += "XL";
                num -= 40;
            }

            else if(num >= 10){
                int q = num / 10;
                num %= 10;
                s += string(q, 'X');
            }

            else if(num == 9){
                s += "IX";
                break;
            }

            else if(num >= 5){
                s += "V";
                num -= 5;
            }

            else if(num == 4){
                s += "IV";
                break;
            }

            else{
                s += string(num, 'I');
                break;
            }
        }

        return s;
    }
};