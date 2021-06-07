package com.company;

public class OneGenericClass<T> {
//     T temp = this.temp;    // Why is this false? it's using self reference.
                              // And why don't we get "StackOverFlow" Exception?
                              // Instead we get "NullPointerException" Exception?


//     T temp = new OneGenericClass<T>(1, 2).temp;          // And why do we get "StackOverFlow" Exception here?
                                                            // It is also using self reference.
                                                            // (what is the difference between this one and
                                                            // the previous one?)


    T temp;
    int id;
    int height;
    public OneGenericClass(int id, int height) {
        this.id = id;
        this.height = height;
    }

    public static void main(String[] args) {
        OneGenericClass<OneGenericClass<OneGenericClass<Integer>>> one = new OneGenericClass<>(2, 54);
        OneGenericClass<OneNonGenericClass> two = new OneGenericClass<>(3, 27);
        one.temp.temp.temp = 234; // There is no compiler error or warning here.
                                  // But a Runtime Error occurs here because "one.temp" is null.
                                  // Why doesn't a Compiler Error occur instead of a Runtime one?
                                  // (Because we used Generic classes to avoid Runtime errors)
    }

    static class OneNonGenericClass {
        // Why does the compiler let us create a class inside the "OneGenericClass" class?
        // And what is a static class that Compiler says it has to be in order to be able to
        // be the Generic Type class (<T>) in line 25?
    }

}



