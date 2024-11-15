--TEST--
Check if line string exists
--FILE--
<?php

$lineString = new \Geospatial\GeoJSON\LineString([]);

var_dump(
    get_class($lineString),
);

?>
--EXPECT--
string(29) "Geospatial\GeoJSON\LineString"