--TEST--
Check if rdp_simplify exists
--FILE--
<?php
var_dump(
    rdp_simplify(
        [],
        0.1,
    ),
);
?>
--EXPECT--
array(0) {
}