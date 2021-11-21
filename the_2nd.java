import java.util.*;
import java.io.*;

public class LinkedList {
   int n;
   ListNode start;
   ListNode rear;

   public LinkedList() {
       n = 0;
       start = null;
       rear = null;
   }
   public LinkedList(int size, ListNode first, ListNode last) {
       n = size;
       start = first;
       rear = last;
   }

   public static LinkedList readBigInteger(Scanner in) {
       if (in.hasNext()) {
           LinkedList x = new LinkedList(); // You can move this statement.
           x.n = readInteger(in);
           if (x.n > 0) {
               x.rear = new ListNode(readInteger(in), null);
               if (x.n > 1) {
                   ListNode tmp = x.rear;
                   for (int i = 1; i <= x.n - 2; i++)
                       tmp = new ListNode(readInteger(in), tmp);
                   x.start = new ListNode(readInteger(in), tmp);
               } else {
                   x.start = x.rear;
               }
           }
           return(x);
       }
       return null;
       // Question 1 code goes here.
   }
   public void printBigInteger() {
       // Question 2 code goes here.
       if (this.n > 1) {
           this.reverse(0);
           ListNode tmp = this.start;
           int index = 1;
           while (tmp.data == 0) {
               index++;
               tmp = tmp.next;
           }
           for (int i = index; i <= this.n; i++) {
               System.out.print(tmp.data);
               tmp = tmp.next;
           }
           this.reverse(0);
       } else {
           if (this.n == 1)
               System.out.println(this.rear.data);
       }
   }


   public void reverse(int level) {
       if (this.n != 2 && this.n != 3) {
           Test.checkList(this); // Do not remove or move this statement.
           level++;
           LinkedList r = new LinkedList();
           LinkedList l = new LinkedList();
           r.n = this.n / 2;
           l.n = this.n - r.n;
           r.start = this.start;
           l.rear = this.rear;
           ListNode rRear = r.start;
           for (int i = 1; i <= r.n - 1; i++)
               rRear = rRear.next;
           r.rear = rRear;
           l.start = r.rear.next;
           // recursive part:
           r.reverse(level);
           l.reverse(level);

           ListNode newR_start = l.start;
           ListNode newR_rear = l.rear;
           l.start = r.start;
           l.rear = r.rear;
           r.start = newR_start;
           r.rear = newR_rear;
           r.rear.next = l.start;
           this.start = r.start;
           this.rear = l.rear;
       } else if (this.n == 2) {
           ListNode newRear = this.start;
           this.start = this.rear;
           this.rear = newRear;
           this.start.next = this.rear;
       } else {
           ListNode newRear = this.start;
           this.start = this.rear;
           this.rear = newRear;
           this.start.next = this.rear.next;
           this.start.next.next = this.rear;
       }
       // Question 3 code goes here.
   }

   public void plus_plus() {
       // Question 4 code goes here.
       if (this.start.data != 9)
           this.start.data++;
       else {
           ListNode tmp = this.start;
           while (tmp.data == 9 && tmp != this.rear) {
               tmp.data = 0;
               tmp = tmp.next;
           }
           if (tmp.data != 9)
               tmp.data++;
           else {
               tmp.data = 0;
               this.n++;
               ListNode newRear = new ListNode(1, null);
               tmp.next = newRear;
               this.rear = newRear;
           }

       }
   }

   public LinkedList plus(LinkedList y) {
       LinkedList z = new LinkedList();
       int min = this.n;
       int max = y.n;
       if (min > y.n) {
           min = y.n;
           max = this.n;
       }
       ListNode thisTmp = this.start;
       ListNode yTmp = y.start;
       boolean hasCout = false;
       int firstSum = thisTmp.data + yTmp.data;
       if (firstSum >= 10) {
           firstSum -= 10;
           hasCout = true;
       }
       ListNode zTmp = new ListNode(firstSum, null);
       z.start = zTmp;
       min--;
       max--;
       yTmp = yTmp.next;
       thisTmp = thisTmp.next;
       for (int i = 1; i <= max; i++) {
           if (i <= min) {
               if (!hasCout) {
                   int sum = thisTmp.data + yTmp.data;
                   if (sum >= 10) {
                       sum -= 10;
                       hasCout = true;
                   }
                   ListNode r = new ListNode(sum, null);
                   zTmp.next = r;
                   zTmp = r;
               } else {
                   hasCout = false;
                   int sum = thisTmp.data + yTmp.data + 1;
                   if (sum >= 10) {
                       sum -= 10;
                       hasCout = true;
                   }
                   ListNode r = new ListNode(sum, null);
                   zTmp.next = r;
                   zTmp = r;
               }
               thisTmp = thisTmp.next;
               yTmp = yTmp.next;
           } else {
               if (i <= max) {
                   if (thisTmp == null) {
                       if (hasCout) {
                           hasCout = false;
                           int sum = yTmp.data + 1;
                           if (sum >= 10) {
                               sum -= 10;
                               hasCout = true;
                           }
                           ListNode r = new ListNode(sum, null);
                           zTmp.next = r;
                           zTmp = r;
                       } else {
                           ListNode r = new ListNode(yTmp.data, null);
                           zTmp.next = r;
                           zTmp = r;
                       }
                       yTmp = yTmp.next;
                   } else {
                       if (hasCout) {
                           hasCout = false;
                           int sum = thisTmp.data + 1;
                           if (sum >= 10) {
                               sum -= 10;
                               hasCout = true;
                           }
                           ListNode r = new ListNode(sum, null);
                           zTmp.next = r;
                           zTmp = r;
                       } else {
                           ListNode r = new ListNode(thisTmp.data, null);
                           zTmp.next = r;
                           zTmp = r;
                       }
                       thisTmp = thisTmp.next;
                   }
               }
           }
       }
       z.n = max + 1;
       if (hasCout) {
           hasCout = false;
           ListNode r = new ListNode(1, null);
           zTmp.next = r;
           zTmp = r;
           z.n++;
       }
       z.rear = zTmp;
       // Question 5 code goes here.
       return(z);
   }

// You can use the following routines for this assignment:

// Tries to read in a non-negative integer from the input stream.
// If it succeeds, the integer read in is returned.
// Otherwise the method returns -1.
   public static int readInteger(Scanner in) {
       int n;

       try {
           n = in.nextInt();
           if (n >= 0) return(n);
           else return(-1);
       }
       catch(Exception e) {
//        We are assuming legal integer input values are >= zero.
          return(-1);
       }
   }

// Use this for debugging only.
   public void printList() {
       ListNode current;
       int count = 0;
       current = start;
       while (current != null) {
           count++;
           System.out.println("Item " + count + " in the list is "
                            + current.data);
           current = current.next;
       }
   }
}
