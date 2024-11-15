/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 313fcba19e90bf3de1c30793661cc2bd654443fe */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_rdp_simplify, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, coordinates, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, epsilon, IS_DOUBLE, 0, "0.1")
ZEND_END_ARG_INFO()


ZEND_FUNCTION(rdp_simplify);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(rdp_simplify, arginfo_rdp_simplify)
	ZEND_FE_END
};
