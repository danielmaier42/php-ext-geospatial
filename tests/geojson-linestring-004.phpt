--TEST--
Check if rdp_simplify works
--FILE--
<?php

$json = file_get_contents(__DIR__ . '/fixture/geojson-belgium.json');
$data = json_decode($json, true);
$coordinates = $data[0]['geometry']['coordinates'][0];

$lineStringObj = new \Geospatial\GeoJSON\LineString($coordinates);

$result1 = $lineStringObj->simplify(0.001);
$result2 = $lineStringObj->simplify(0.01);

var_dump(get_class($result1), get_class($result2));
var_dump($result1 === $result2);

?>
--EXPECT--
string(29) "Geospatial\GeoJSON\LineString"
string(29) "Geospatial\GeoJSON\LineString"
bool(false)