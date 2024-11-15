--TEST--
test1() Basic test
--EXTENSIONS--
geospatial
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension geospatial is loaded and working!
NULL
