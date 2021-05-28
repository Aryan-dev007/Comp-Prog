fn main() {
    let mut first_string = String::from("");
    std::io::stdin()
            .read_line(&mut first_string)
            .expect("String not found");

    let mut second_string = String::from("");
        std::io::stdin()
            .read_line(&mut second_string)
            .expect("String not found");

    if first_string.len() != second_string.len() {
        return ()
    }

    let first_string = first_string.to_lowercase();
    let second_string = second_string.to_lowercase();

    if first_string == second_string {println!("0");}

}
