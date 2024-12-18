/* geospatial extension for PHP (c) 2024 Daniel Maier */

#ifndef PHP_GEOSPATIAL_H
# define PHP_GEOSPATIAL_H

extern zend_module_entry geospatial_module_entry;
# define phpext_geospatial_ptr &geospatial_module_entry

# define PHP_GEOSPATIAL_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_GEOSPATIAL)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_GEOSPATIAL_H */
