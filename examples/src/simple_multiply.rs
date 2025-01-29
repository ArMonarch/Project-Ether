mod etherc_types;
use etherc_types::EtherInt;

extern "C" {
    fn multiply(val_A: EtherInt, val_B: EtherInt) -> EtherInt;
}

fn main() {
    unsafe {
        println!("Multiply 20.00 * 15.00: {}", multiply(20.00, 15.00));
    }
}
