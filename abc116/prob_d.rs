use std::io;

fn main() {
    let s = {
        let mut s = String::new();
        io::stdin().read_line(&mut s).unwrap();
        s.trim_right().to_owned()
    };

    println!("{}", line);
}
