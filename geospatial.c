/* geospatial extension for PHP (c) 2024 Daniel Maier */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_geospatial.h"
#include "geospatial_arginfo.h"

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE() \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

ZEND_FUNCTION(rdp_simplify)
{
	zval *points_array;
	double epsilon;

	// Parse Parameters
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ARRAY(points_array)
		Z_PARAM_DOUBLE(epsilon)
	ZEND_PARSE_PARAMETERS_END();

	// array_init(return_value);
	RETURN_EMPTY_ARRAY();
}

/* {{{ PHP_RINIT_FUNCTION */
PHP_RINIT_FUNCTION(geospatial)
{
#if defined(ZTS) && defined(COMPILE_DL_GEOSPATIAL)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION */
PHP_MINFO_FUNCTION(geospatial)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "geospatial support", "enabled");
	php_info_print_table_end();
}
/* }}} */

/* {{{ geospatial_module_entry */
zend_module_entry geospatial_module_entry = {
	STANDARD_MODULE_HEADER,
	"geospatial",					/* Extension name */
	ext_functions,					/* zend_function_entry */
	NULL,							/* PHP_MINIT - Module initialization */
	NULL,							/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(geospatial),			/* PHP_RINIT - Request initialization */
	NULL,							/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(geospatial),			/* PHP_MINFO - Module info */
	PHP_GEOSPATIAL_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_GEOSPATIAL
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(geospatial)
#endif
