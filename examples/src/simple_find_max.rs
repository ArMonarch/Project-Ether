mod etherc_types;
use etherc_types::EtherInt;

extern "C" {
    fn max(val_A: EtherInt, val_B: EtherInt) -> EtherInt;
}

fn main() {
    unsafe {
        println!("Max of 20.00 , 15.00: {}", max(20.00, 15.00));
    }
}
