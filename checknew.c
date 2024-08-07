import java.util.*;  
public class IsomorphicString  
{    
//driver code  
public static void main(String args[])   
{  
//strings to check isomorphic or not    
String str1 = "KITE", str2 = "ZXBN";  
//function calling  
System.out.println("Are "+str1 +" and "+str2 +" Isomorphic? "+isIsomorphic(str1, str2));  
}  
//function to check if the string is isomorphic or not  
public static boolean isIsomorphic(String str1, String str2)   
{  
if (str1 == null || str2 == null || str1.length() != str2.length())  
//if string1 and string2 are null and both the string are of different sizes then it returns false  
return false;  
//creating an instance of Map  
Map<Character, Character> map = new HashMap<>();  
for (int i = 0; i < str1.length(); i++)   
{  
//finding the character of the string at i-th position  
char char_str1 = str1.charAt(i), char_str2 = str2.charAt(i);  
//checks whether a particular key (i-th character) is being mapped into the Map or not  
if (map.containsKey(char_str1))   
{  
if (map.get(char_str1) != char_str2)  
//returns false if the character of the first string is not equal to the character of the second string  
return false;  
}  
else   
{  
//checks whether a particular key (i-th character) is being mapped into the Map or not      
if (map.containsValue(char_str2))            
return false;  
//adding key and value to the map  
map.put(char_str1, char_str2);  
}  
}  
return true;  
}  
}  
