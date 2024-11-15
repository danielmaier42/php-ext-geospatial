--TEST--
Check if line string exists
--FILE--
<?php

$inputArray = [
    [1, 2],
    [3, 4],
];

$lineString = new \Geospatial\GeoJSON\LineString($inputArray);

$outputArray = $lineString->getPoints();

var_dump(
    $outputArray,
);

var_dump(
    $outputArray === $inputArray,
);

?>
--EXPECT--
array(2) {
  [0]=>
  array(2) {
    [0]=>
    int(1)
    [1]=>
    int(2)
  }
  [1]=>
  array(2) {
    [0]=>
    int(3)
    [1]=>
    int(4)
  }
}
bool(true)