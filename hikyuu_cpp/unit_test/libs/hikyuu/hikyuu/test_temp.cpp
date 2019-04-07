#ifdef TEST_ALL_IN_ONE
    #include <boost/test/unit_test.hpp>
#else
    #define BOOST_TEST_MODULE test_hikyuu_base
    #include <boost/test/unit_test.hpp>
#endif

#include <hikyuu/StockManager.h>
#include <hikyuu/data_driver/HistoryFinanceReader.h>

using namespace hku;

BOOST_AUTO_TEST_CASE( test_temp ) {
    std::cout << "*****************" << std::endl;
    Stock stk = getStock("sh600000");
    Parameter f = stk.getFinanceInfo();
    std::cout << f << std::endl;
    std::cout << "*****************" << std::endl;
}
