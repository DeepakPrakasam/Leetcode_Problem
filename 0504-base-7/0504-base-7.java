class Solution {
    public String convertToBase7(int num) {
    
        if(num==0)
        return "0";
       // String str=String.valueOf(num);
        String reversedNumber="";

        boolean isNegative = num < 0;
        num = Math.abs(num);

        StringBuilder str = new StringBuilder();

        while(num!=0)
        {
            str.append(num%7);
            num=num/7;
        }

        str.reverse();

        if (isNegative) {
            str.insert(0, "-");
        }

        return str.toString();

        /*boolean isNegative = number < 0;
        String number = "-12345";
        String reversedNumber = reverseNegativeNumber(number);
        if (isNegative) {
            number = -number; // Make the number positive
        }
        System.out.println(str);
        System.out.println(ans);
        //System.out.println(str," ",ans);*/
        //return reversedNumber;

    }
}