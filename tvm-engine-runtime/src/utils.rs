use tvm_engine_types::H256;

pub fn sha256(input: &[u8]) -> H256 {
    use sha2::Digest;
    H256::from_slice(sha2::Sha256::digest(input).as_slice())
}

pub fn keccak(input: &[u8]) -> H256 {
    use sha3::Digest;
    H256::from_slice(sha3::Keccak256::digest(input).as_slice())
}

pub fn panic_utf8(bytes: &[u8]) -> ! {
    println!("panic: {:?}", bytes);
    unsafe {
        crate::runtime::tvm_log_utf8(bytes.len() as u64, bytes.as_ptr() as u64);
    }
    unreachable!()
}

pub fn log_utf8(bytes: &[u8]) {
    // println!("log: {:?}", bytes);
    unsafe {
        crate::runtime::tvm_log_utf8(bytes.len() as u64, bytes.as_ptr() as u64);
    }
}

#[macro_export]
macro_rules! log_format {
    ($($args:tt)*) => {
        tvm_engine_runtime::utils::log_utf8(format!("{}", format_args!($($args)*)).as_str().as_bytes())
    };
}
