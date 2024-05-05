import java.util.ArrayList;


public class A {

    public static void main(String... args) {

        ArrayList<String> animals = new ArrayList<>();

        
        animals.add("Lion");
        animals.add("Tiger");
        animals.add("Cat");
        animals.add("Dog");
	System.out.println(animals);

animals.remove(3);
System.out.println("NOW WE HAVE " + animals);

    }
}