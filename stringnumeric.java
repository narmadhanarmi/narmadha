public class Numeric{
    public static void main(String[]args){
        String string="12345.15";
        boolean numeric=true;
        try{
            Double num=Double.parseDouble(string);
        }catch (NumberFormatException e){
            numeric =false;
        }
        if(numeric)
         system.out.println(string+"is a number");
        else
         system.out.println(string+"is not a number")
    }
}
