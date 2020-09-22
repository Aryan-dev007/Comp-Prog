
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

fn solve() {

    let mut n = String::new();
    std::io::stdin().read_line(&mut n).expect("Value not found");

    let mut n: usize = match n.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

    if n % 4 != 0 {
        println!("NO");
    } else {
        println!("YES");
        let mut v = Vec::new();

        for i in (1..=n/2) {
            v.push(i*2);
        }
        // println!("len -> {}", v.len());
        // let l = v.len();

        for i in 1..n/2 {
            v.push(i * 2 - 1);
        }
        v.push(3 * n/2 - 1);
        // println!("{:?}", v);
        for i in v {
            print!("{} ",i);
        }
        println!("");
    }
}

