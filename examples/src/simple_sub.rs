mod etherc_types;
use etherc_types::EtherInt;

extern "C" {
    fn sub(val_A: EtherInt, val_B: EtherInt) -> EtherInt;
}

fn main() {
    unsafe {
        println!("Subtract 20.00 - 15.00: {}", sub(20.00, 15.00));
    }
}
