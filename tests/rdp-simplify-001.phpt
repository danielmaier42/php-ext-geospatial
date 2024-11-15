--TEST--
Check if rdp_simplify works
--FILE--
<?php

$json = file_get_contents(__DIR__ . '/fixture/geojson-belgium.json');
$data = json_decode($json, true);
$coordinates = $data[0]['geometry']['coordinates'][0];

var_dump(
    rdp_simplify(
        $coordinates,
        0.1,
    ),
);

?>
--EXPECT--
array(26) {
  [0]=>
  array(2) {
    [0]=>
    float(3.0275144577026)
    [1]=>
    float(50.770740509033)
  }
  [1]=>
  array(2) {
    [0]=>
    float(2.635861158371)
    [1]=>
    float(50.816944122314)
  }
  [2]=>
  array(2) {
    [0]=>
    float(2.5469443798065)
    [1]=>
    float(51.092803955078)
  }
  [3]=>
  array(2) {
    [0]=>
    float(3.1978611946106)
    [1]=>
    float(51.349056243896)
  }
  [4]=>
  array(2) {
    [0]=>
    float(3.8959167003632)
    [1]=>
    float(51.207748413086)
  }
  [5]=>
  array(2) {
    [0]=>
    float(4.4768056869507)
    [1]=>
    float(51.478553771973)
  }
  [6]=>
  array(2) {
    [0]=>
    float(5.0434999465942)
    [1]=>
    float(51.486888885498)
  }
  [7]=>
  array(2) {
    [0]=>
    float(5.2353887557983)
    [1]=>
    float(51.262306213379)
  }
  [8]=>
  array(2) {
    [0]=>
    float(5.8499722480774)
    [1]=>
    float(51.152442932129)
  }
  [9]=>
  array(2) {
    [0]=>
    float(5.6832499504089)
    [1]=>
    float(50.761112213135)
  }
  [10]=>
  array(2) {
    [0]=>
    float(6.2727499008179)
    [1]=>
    float(50.627471923828)
  }
  [11]=>
  array(2) {
    [0]=>
    float(6.1820831298828)
    [1]=>
    float(50.545360565186)
  }
  [12]=>
  array(2) {
    [0]=>
    float(6.4038610458374)
    [1]=>
    float(50.326751708984)
  }
  [13]=>
  array(2) {
    [0]=>
    float(5.9626388549805)
    [1]=>
    float(50.172054290771)
  }
  [14]=>
  array(2) {
    [0]=>
    float(5.734555721283)
    [1]=>
    float(49.89966583252)
  }
  [15]=>
  array(2) {
    [0]=>
    float(5.8745555877686)
    [1]=>
    float(49.576416015625)
  }
  [16]=>
  array(2) {
    [0]=>
    float(5.4776387214661)
    [1]=>
    float(49.49361038208)
  }
  [17]=>
  array(2) {
    [0]=>
    float(4.8565001487732)
    [1]=>
    float(49.791862487793)
  }
  [18]=>
  array(2) {
    [0]=>
    float(4.877694606781)
    [1]=>
    float(50.155334472656)
  }
  [19]=>
  array(2) {
    [0]=>
    float(4.1989722251892)
    [1]=>
    float(49.957748413086)
  }
  [20]=>
  array(2) {
    [0]=>
    float(4.2068057060242)
    [1]=>
    float(50.273223876953)
  }
  [21]=>
  array(2) {
    [0]=>
    float(3.6948888301849)
    [1]=>
    float(50.310943603516)
  }
  [22]=>
  array(2) {
    [0]=>
    float(3.6091389656067)
    [1]=>
    float(50.492416381836)
  }
  [23]=>
  array(2) {
    [0]=>
    float(3.2929723262787)
    [1]=>
    float(50.522277832031)
  }
  [24]=>
  array(2) {
    [0]=>
    float(3.2567777633667)
    [1]=>
    float(50.697334289551)
  }
  [25]=>
  array(2) {
    [0]=>
    float(3.0275144577026)
    [1]=>
    float(50.770740509033)
  }
}