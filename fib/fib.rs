use std::collections::HashMap;

fn fib(num: u128) -> u128 {
    let mut fibs: HashMap<u128, u128> = HashMap::new();

    if num < 2 {
        return 1;
    }

    fibWithMap(num-1, &mut fibs)+fibWithMap(num-2, &mut fibs)
}

fn fibWithMap(num: u128, fibs: *mut HashMap<u128, u128>) -> u128{
    if num < 2 {
        return num;
    }

    unsafe{
        match (*fibs).get(&num){
            Some(result) => return *result,
            None => {
                let result=fibWithMap(num-1, fibs)+fibWithMap(num-2, fibs);
                (*fibs).insert(num, result);
                result
            }
        }
    }
}

fn main(){
    println!("{}", fib(10));
}