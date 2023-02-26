use std::io::stdin;

fn main() {
    let mut s = String::new();
    stdin().read_line(&mut s).ok().expect("Something went wrong");
    println!("{}", s);
    let mut split = s.split(", ");   
   let mut vec = Vec::new();
    for s in split {
        vec.push(s.parse::<i32>().unwrap());
    }
    
    let mut result = qcheck(&mut vec);
    println!("{}", result);
}

fn qcheck(vec: &mut Vec<i32>) -> bool {
    for i in 0..vec.len() - 1 {
        for j in i + 1..vec.len() {
            let mut pi = vec[i];
            let mut pj = vec[j];
            if pi == pj || (pi - pj).abs() as usize == j - i {
                return false;
            }
        }
    }
    return true;
}