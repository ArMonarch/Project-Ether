// int value type for etherc compiler
pub type EtherInt = f64;

// char value type for etherc compiler
// pub type EtherChar = u8;

#[cfg(test)]
mod tests {
    use super::*;

    extern crate std;
    use std::mem;

    #[test]
    fn typeof_ether_int() {
        assert_eq!(mem::size_of::<EtherInt>(), 8);
    }

    // #[test]
    // fn typeof_etherc_char() {
    //     assert_eq!(mem::size_of::<EtherChar>(), 2);
    // }
}
