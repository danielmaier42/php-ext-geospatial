/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 74a9d5fdedc7bcfa947bbd2bfef8e41c7242dd6c */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_rdp_simplify, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, coordinates, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, epsilon, IS_DOUBLE, 0, "0.1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Geospatial_GeoJSON_LineString___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, points, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Geospatial_GeoJSON_LineString_getPoints, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Geospatial_GeoJSON_LineString_simplify, 0, 0, Geospatial\\GeoJSON\\LineString, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, epsilon, IS_DOUBLE, 0, "0.1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Geospatial_GeoJSON_LineString_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(rdp_simplify);
ZEND_METHOD(Geospatial_GeoJSON_LineString, __construct);
ZEND_METHOD(Geospatial_GeoJSON_LineString, getPoints);
ZEND_METHOD(Geospatial_GeoJSON_LineString, simplify);
ZEND_METHOD(Geospatial_GeoJSON_LineString, count);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(rdp_simplify, arginfo_rdp_simplify)
	ZEND_FE_END
};


static const zend_function_entry class_Geospatial_GeoJSON_LineString_methods[] = {
	ZEND_ME(Geospatial_GeoJSON_LineString, __construct, arginfo_class_Geospatial_GeoJSON_LineString___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Geospatial_GeoJSON_LineString, getPoints, arginfo_class_Geospatial_GeoJSON_LineString_getPoints, ZEND_ACC_PUBLIC)
	ZEND_ME(Geospatial_GeoJSON_LineString, simplify, arginfo_class_Geospatial_GeoJSON_LineString_simplify, ZEND_ACC_PUBLIC)
	ZEND_ME(Geospatial_GeoJSON_LineString, count, arginfo_class_Geospatial_GeoJSON_LineString_count, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_Geospatial_GeoJSON_LineString(zend_class_entry *class_entry_Countable)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Geospatial\\GeoJSON", "LineString", class_Geospatial_GeoJSON_LineString_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL;
	zend_class_implements(class_entry, 1, class_entry_Countable);

	zval property_points_default_value;
	ZVAL_UNDEF(&property_points_default_value);
	zend_string *property_points_name = zend_string_init("points", sizeof("points") - 1, 1);
	zend_declare_typed_property(class_entry, property_points_name, &property_points_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_READONLY, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_points_name);

	return class_entry;
}
