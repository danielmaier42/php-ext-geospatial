dnl Autotools config.m4 for PHP extension geospatial

PHP_ARG_ENABLE([geospatial],
  [whether to enable geospatial support],
  [AS_HELP_STRING([--enable-geospatial],
    [Enable geospatial support])],
  [no])

AS_VAR_IF([PHP_GEOSPATIAL], [no],, [
  AC_DEFINE([HAVE_GEOSPATIAL], [1],
    [Define to 1 if the PHP extension 'geospatial' is available.])

  PHP_NEW_EXTENSION([geospatial],
    [geospatial.c lib/rdp.c lib/geo_array.c geojson/linestring.c],
    [$ext_shared],,
    [-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1])
])
