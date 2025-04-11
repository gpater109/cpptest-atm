#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM/include/Account.hxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/Account.cxx");

class TestSuite_Account_hxx_5850d6be : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Account_hxx_5850d6be);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_Account_1);
        CPPTEST_TEST(test_Account_2);
        CPPTEST_TEST(test_Account_3);
        CPPTEST_TEST(test_Account_4);
        CPPTEST_TEST(test_Account_5);
        CPPTEST_TEST(test_Account_6);
        CPPTEST_TEST(test_Account_7);
        CPPTEST_TEST(test_Account_8);
        CPPTEST_TEST(test_getAccountNumber_1);
        CPPTEST_TEST(test_getAccountNumber_2);
        CPPTEST_TEST(test_getAccountNumber_3);
        CPPTEST_TEST(test_getAccountNumber_4);
        CPPTEST_TEST(test_getAccountNumber_5);
        CPPTEST_TEST(test_getAccountNumber_6);
        CPPTEST_TEST(test_getAccountNumber_7);
        CPPTEST_TEST(test_getAccountNumber_8);
        CPPTEST_TEST(test_getBalance_1);
        CPPTEST_TEST(test_getBalance_2);
        CPPTEST_TEST(test_getBalance_3);
        CPPTEST_TEST(test_getBalance_4);
        CPPTEST_TEST(test_getBalance_5);
        CPPTEST_TEST(test_getBalance_6);
        CPPTEST_TEST(test_getBalance_7);
        CPPTEST_TEST(test_getBalance_8);
        CPPTEST_TEST(test_getPassword_1);
        CPPTEST_TEST(test_getPassword_2);
        CPPTEST_TEST(test_getPassword_3);
        CPPTEST_TEST(test_getPassword_4);
        CPPTEST_TEST(test_getPassword_5);
        CPPTEST_TEST(test_getPassword_6);
        CPPTEST_TEST(test_getPassword_7);
        CPPTEST_TEST(test_getPassword_8);
        CPPTEST_TEST(test_setAccountNumber_1);
        CPPTEST_TEST(test_setAccountNumber_10);
        CPPTEST_TEST(test_setAccountNumber_2);
        CPPTEST_TEST(test_setAccountNumber_3);
        CPPTEST_TEST(test_setAccountNumber_4);
        CPPTEST_TEST(test_setAccountNumber_5);
        CPPTEST_TEST(test_setAccountNumber_6);
        CPPTEST_TEST(test_setAccountNumber_7);
        CPPTEST_TEST(test_setAccountNumber_8);
        CPPTEST_TEST(test_setAccountNumber_9);
        CPPTEST_TEST(test_setPassword_1);
        CPPTEST_TEST(test_setPassword_10);
        CPPTEST_TEST(test_setPassword_2);
        CPPTEST_TEST(test_setPassword_3);
        CPPTEST_TEST(test_setPassword_4);
        CPPTEST_TEST(test_setPassword_5);
        CPPTEST_TEST(test_setPassword_6);
        CPPTEST_TEST(test_setPassword_7);
        CPPTEST_TEST(test_setPassword_8);
        CPPTEST_TEST(test_setPassword_9);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_Account_1();
        void test_Account_2();
        void test_Account_3();
        void test_Account_4();
        void test_Account_5();
        void test_Account_6();
        void test_Account_7();
        void test_Account_8();
        void test_getAccountNumber_1();
        void test_getAccountNumber_2();
        void test_getAccountNumber_3();
        void test_getAccountNumber_4();
        void test_getAccountNumber_5();
        void test_getAccountNumber_6();
        void test_getAccountNumber_7();
        void test_getAccountNumber_8();
        void test_getBalance_1();
        void test_getBalance_2();
        void test_getBalance_3();
        void test_getBalance_4();
        void test_getBalance_5();
        void test_getBalance_6();
        void test_getBalance_7();
        void test_getBalance_8();
        void test_getPassword_1();
        void test_getPassword_2();
        void test_getPassword_3();
        void test_getPassword_4();
        void test_getPassword_5();
        void test_getPassword_6();
        void test_getPassword_7();
        void test_getPassword_8();
        void test_setAccountNumber_1();
        void test_setAccountNumber_10();
        void test_setAccountNumber_2();
        void test_setAccountNumber_3();
        void test_setAccountNumber_4();
        void test_setAccountNumber_5();
        void test_setAccountNumber_6();
        void test_setAccountNumber_7();
        void test_setAccountNumber_8();
        void test_setAccountNumber_9();
        void test_setPassword_1();
        void test_setPassword_10();
        void test_setPassword_2();
        void test_setPassword_3();
        void test_setPassword_4();
        void test_setPassword_5();
        void test_setPassword_6();
        void test_setPassword_7();
        void test_setPassword_8();
        void test_setPassword_9();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Account_hxx_5850d6be);

void TestSuite_Account_hxx_5850d6be::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Account_hxx_5850d6be::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Account_hxx_5850d6be::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Account_hxx_5850d6be::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_Account_1 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_5850d6be::test_Account_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = cpptestLimitsGetMaxPosDouble();
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_2 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_5850d6be::test_Account_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = cpptestLimitsGetMaxNegDouble();
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_2 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_3 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_5850d6be::test_Account_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = cpptestLimitsGetMinNegDouble();
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_3 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_4 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_5850d6be::test_Account_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = -1.0;
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_4 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_5 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_5850d6be::test_Account_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = cpptestLimitsGetMinPosDouble();
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_5 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_6 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_5850d6be::test_Account_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = 1.0;
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_6 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_7 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(double) */
void TestSuite_Account_hxx_5850d6be::test_Account_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (initial) */ 
    double _initial  = 0.0;
    /* Testing constructor. */
    ::Account _return(_initial);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_7 */

/* CPPTEST_TEST_CASE_BEGIN test_Account_8 */
/* CPPTEST_TEST_CASE_CONTEXT Account::Account(void) */
void TestSuite_Account_hxx_5850d6be::test_Account_8()
{
    /* Pre-condition initialization */
    /* Testing constructor. */
    ::Account _return;
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myAccountNumber", ( _return.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _return.myBalance", ( _return.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _return.myPassword", ( _return.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_Account_8 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_1 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_2 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_3 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_3 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_4 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_4 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_5 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_5 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_6 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_6 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_7 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 0.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_7 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccountNumber_8 */
/* CPPTEST_TEST_CASE_CONTEXT int Account::getAccountNumber(void) const */
void TestSuite_Account_hxx_5850d6be::test_getAccountNumber_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Tested function call */
    int _return  = _cpptest_TestObject.getAccountNumber();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getAccountNumber_8 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_1 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_2 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_3 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_3 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_4 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_4 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_5 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_5 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_6 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_6 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_7 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 0.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_7 */

/* CPPTEST_TEST_CASE_BEGIN test_getBalance_8 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::getBalance(void) */
void TestSuite_Account_hxx_5850d6be::test_getBalance_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Tested function call */
    double _return  = _cpptest_TestObject.getBalance();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getBalance_8 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_1 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_2 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_3 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_3 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_4 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_4 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_5 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_5 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_6 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_6 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_7 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 0.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_7 */

/* CPPTEST_TEST_CASE_BEGIN test_getPassword_8 */
/* CPPTEST_TEST_CASE_CONTEXT const char * Account::getPassword(void) */
void TestSuite_Account_hxx_5850d6be::test_getPassword_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Tested function call */
    const char * _return  = _cpptest_TestObject.getPassword();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_getPassword_8 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_1 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_10 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = 0;
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_10 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_2 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_3 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_3 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_4 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMinInt();
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_4 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_5 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMinInt();
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_5 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_6 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = -1;
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_6 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_7 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = -1;
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_7 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_8 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = 1;
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_8 */

/* CPPTEST_TEST_CASE_BEGIN test_setAccountNumber_9 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setAccountNumber(int) */
void TestSuite_Account_hxx_5850d6be::test_setAccountNumber_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 0.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (num) */ 
    int _num  = 1;
    /* Tested function call */
    _cpptest_TestObject.setAccountNumber(_num);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setAccountNumber_9 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_1 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_10 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = 0 ;
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_10 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_2 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_3 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_3 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_4 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Initializing argument 1 (password) */ 
    const char * _password  = "";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_4 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_5 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "Hello world";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_5 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_6 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "Hello world";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_6 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_7 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_7 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_8 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMinPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_8 */

/* CPPTEST_TEST_CASE_BEGIN test_setPassword_9 */
/* CPPTEST_TEST_CASE_CONTEXT void Account::setPassword(const char *) */
void TestSuite_Account_hxx_5850d6be::test_setPassword_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (password) */ 
    const char * _password  = 0 ;
    /* Tested function call */
    _cpptest_TestObject.setPassword(_password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_setPassword_9 */
