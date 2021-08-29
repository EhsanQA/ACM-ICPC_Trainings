public class Kata {
    public static String expandedForm(Integer num) {
      Integer n = num;
      String s = num.toString();
      String ans = "";
      int dCount = s.length();
      for (int i = dCount - 1; i >= 0; i--) {
        int tmp = 1;
        for (int j = 0; j < i; j++) {
          tmp *= 10;
        }
        Integer nd = n - (n % tmp);
        if (nd != 0) {
          ans += nd.toString() + " + ";
        }
        int beforeCount = n.toString().length();
        n -= nd;
        int afterCount = n.toString().length();
        for (int j = 0; j < beforeCount - afterCount - 1; j++) {
          i--;
        }
      }
      return ans.substring(0, ans.length() - 3);
    }
}
