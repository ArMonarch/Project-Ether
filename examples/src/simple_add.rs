use std::ffi::c_double;

mod etherc_types;
use etherc_types::EtherInt;

extern "C" {
    pub fn add(num_1: c_double, num_2: c_double) -> EtherInt;
}

fn main() {
    unsafe {
        println!("Add 10.00 + 20.00: {}", add(10.00, 20.00));
    }
}
