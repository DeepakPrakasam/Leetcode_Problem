class Solution {
    public String largestNumber(int[] nums) {
        /*String str = "";
        int n=nums.length;
        //char ch = str.charAt(6);
        //Character.getNumericValue(ch)
        //int number = Integer.parseInt(str);
        // Convert int to String using String.valueOf  
        //String strNumber = String.valueOf(number);
        //int[] intArray = {1, 2, 3, 4, 5};
        //String arrayString = Arrays.toString(intArray);  
        for(int i=0;i<n;i++)
        {
            str+=nums[i];
        }
        
        System.out.println(str);


        int len=str.length();
        String sum="";int max=0;
        /*for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                sum=str.charAt(i)+str.charAt(j);
            }
            System.out.println(sum);

           
        }*/

        // Convert integers to strings
        String[] strNums = new String[nums.length];
        for (int i = 0; i < nums.length; i++) {
            strNums[i] = Integer.toString(nums[i]);
        }

        // Custom comparator to compare concatenated results
        Arrays.sort(strNums, new Comparator<String>() {
            @Override
            public int compare(String x, String y) {
                return (y + x).compareTo(x + y);
            }
        });

        // If the largest number is "0", return "0"
        if (strNums[0].equals("0")) {
            return "0";
        }

        // Concatenate the sorted strings to form the largest number
        StringBuilder largestNum = new StringBuilder();
        for (String num : strNums) {
            largestNum.append(num);
        }

        return largestNum.toString();

    }
}