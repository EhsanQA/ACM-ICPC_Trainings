public class Solution {

  public static boolean validatePin(String pin) {
      for (int i = 0; i < pin.length(); i++)
          if (!Character.isDigit(pin.charAt(i)))
              return false;
      return pin.length() == 4 || pin.length() == 6;
  }

}
