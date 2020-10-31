packageb1;
importjava.util.regex.Matcher;
importjava.util.regex.Patern;
importjava.util.regex.*; publicclasswhitespaceremove{
    publicstaticvoidmain(String[]argv) {
        Strings="MynameisSatyam kumar";
        System.out.println(removeWhitespace(s);
    }
                publicstaticStringremoveWhitespace(Strings){
                    Pattern p=Pattern.compile("[\\s]");
                    Matcher m =p.matcher(s);
                        returnm.replaceAl("");
                }
}
