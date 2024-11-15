//
// Created by Daniel Maier on 15.11.24.
//

#include "php.h"
#include "php_geospatial.h"
#include "geospatial_arginfo.h"

ZEND_METHOD(Geospatial_GeoJSON_LineString, __construct)
{
    zval *points;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ARRAY(points)
    ZEND_PARSE_PARAMETERS_END();

    zend_update_property(
        Z_OBJCE_P(ZEND_THIS),
        Z_OBJ_P(ZEND_THIS),
        "points",
        strlen("points"),
        points
    );
}

ZEND_METHOD(Geospatial_GeoJSON_LineString, getPoints)
{
    ZEND_PARSE_PARAMETERS_NONE();

    RETURN_ZVAL(
        zend_read_property(
            Z_OBJCE_P(ZEND_THIS),
            Z_OBJ_P(ZEND_THIS),
            "points",
            strlen("points"),
            false,
            NULL
        ),
        true,
        false
    );
}