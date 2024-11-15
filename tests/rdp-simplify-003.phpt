--TEST--
Check if rdp_simplify works
--FILE--
<?php

$json = file_get_contents(__DIR__ . '/fixture/geojson-belgium.json');
$data = json_decode($json, true);
$coordinates = $data[0]['geometry']['coordinates'][0];

$result1 = rdp_simplify($coordinates, 0.001);
$result2 = rdp_simplify($coordinates, 0.01);

var_dump(count($coordinates), count($result1), count($result2));

?>
--EXPECT--
int(1146)
int(1029)
int(261)