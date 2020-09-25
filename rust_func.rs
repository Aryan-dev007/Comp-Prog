fn main() {
    let mut t = String::new();
    std::io::stdin().read_line(&mut t).expect("Value not found");

    let mut t: usize = match t.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

    while t > 0 {
        solve();
        t -= 1;
    }
}



fn multiple_input<T: std::str::FromStr>() -> Result<Vec<T>, T::Err> {
    let mut s = String::new();
    std::io::stdin()
            .read_line(&mut s)
            .expect("Value not found");
    s.trim()
        .split_whitespace()
        .map(|word| word.parse())
        .collect()
}

fn dedup<T: Eq + Hash + Copy>(v: &mut Vec<T>) {
    // note the Copy constraint
    let mut uniques = HashSet::new();
    v.retain(|e| uniques.insert(*e));
}
    // Usage: let candy = multiple_input::<i64>().unwrap();

fn abs(mut x: isize ) -> isize {
    if x < 0 { x = x * - 1; }
    else { x = x; }
    x
}
                // Usage: position = abs(3 - z) + abs(3 - k - 1)


fn sort(vec: &mut [usize]) {
    // let (mut i, mut j, mut small, mut temp): (usize, usize, usize, usize) = (0, 0, 0, 0);

    for i in 0..vec.len() - 1 {
        let mut small = i;
            for j in (i+1)..vec.len() {
                if vec[j] < vec[small] {
                    small = j;
                }
            }
            let temp = vec[i];
            vec[i] = vec[small];
            vec[small] = temp;
    } 
}
    // usage: sort(ques_each.as_mut_slice());   .as_slice() is important!!!!