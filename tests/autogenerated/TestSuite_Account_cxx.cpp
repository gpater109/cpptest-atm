#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM/Account.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/Account.cxx");

class TestSuite_Account_cxx_edf04a2a : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Account_cxx_edf04a2a);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_debit_1);
        CPPTEST_TEST(test_debit_10);
        CPPTEST_TEST(test_debit_2);
        CPPTEST_TEST(test_debit_3);
        CPPTEST_TEST(test_debit_4);
        CPPTEST_TEST(test_debit_5);
        CPPTEST_TEST(test_debit_6);
        CPPTEST_TEST(test_debit_7);
        CPPTEST_TEST(test_debit_8);
        CPPTEST_TEST(test_debit_9);
        CPPTEST_TEST(test_deposit_1);
        CPPTEST_TEST(test_deposit_10);
        CPPTEST_TEST(test_deposit_2);
        CPPTEST_TEST(test_deposit_3);
        CPPTEST_TEST(test_deposit_4);
        CPPTEST_TEST(test_deposit_5);
        CPPTEST_TEST(test_deposit_6);
        CPPTEST_TEST(test_deposit_7);
        CPPTEST_TEST(test_deposit_8);
        CPPTEST_TEST(test_deposit_9);
        CPPTEST_TEST(test_foo1_1);
        CPPTEST_TEST(test_foo1_10);
        CPPTEST_TEST(test_foo1_2);
        CPPTEST_TEST(test_foo1_3);
        CPPTEST_TEST(test_foo1_4);
        CPPTEST_TEST(test_foo1_5);
        CPPTEST_TEST(test_foo1_6);
        CPPTEST_TEST(test_foo1_7);
        CPPTEST_TEST(test_foo1_8);
        CPPTEST_TEST(test_foo1_9);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_debit_1();
        void test_debit_10();
        void test_debit_2();
        void test_debit_3();
        void test_debit_4();
        void test_debit_5();
        void test_debit_6();
        void test_debit_7();
        void test_debit_8();
        void test_debit_9();
        void test_deposit_1();
        void test_deposit_10();
        void test_deposit_2();
        void test_deposit_3();
        void test_deposit_4();
        void test_deposit_5();
        void test_deposit_6();
        void test_deposit_7();
        void test_deposit_8();
        void test_deposit_9();
        void test_foo1_1();
        void test_foo1_10();
        void test_foo1_2();
        void test_foo1_3();
        void test_foo1_4();
        void test_foo1_5();
        void test_foo1_6();
        void test_foo1_7();
        void test_foo1_8();
        void test_foo1_9();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Account_cxx_edf04a2a);

void TestSuite_Account_cxx_edf04a2a::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Account_cxx_edf04a2a::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Account_cxx_edf04a2a::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Account_cxx_edf04a2a::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_debit_1 */
//@req 118933
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_1 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_10 */
//@test 118940
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 0.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_10 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_2 */
//@test 118940
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_2 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_3 */
//@test 118940
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_3 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_4 */
//@test 118938
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_4 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_5 */
//@test 118938
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinNegDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_5 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_6 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_6 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_7 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Initializing argument 1 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_7 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_8 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_8 */

/* CPPTEST_TEST_CASE_BEGIN test_debit_9 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void TestSuite_Account_cxx_edf04a2a::test_debit_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 1.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit_9 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_1 */
//@test 118954
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxPosDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_1 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_10 */
//@test 118954
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 0.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_10 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_2 */
//@req 118933
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_2 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_3 */
//@test 118954
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_3 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_4 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_4 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_5 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinNegDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_5 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_6 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = cpptestLimitsGetMaxNegDouble();
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_6 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_7 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Initializing argument 1 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_7 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_8 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = 1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = cpptestLimitsGetMinPosDouble();
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_8 */

/* CPPTEST_TEST_CASE_BEGIN test_deposit_9 */
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void TestSuite_Account_cxx_edf04a2a::test_deposit_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (initial) */ 
        double _initial_0  = -1.0;
    ::Account _cpptest_TestObject (_initial_0);

    /* Initializing argument 1 (amount) */ 
    double _amount  = 1.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.deposit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_deposit_9 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_1 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_1 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_10 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = 0;
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_10 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_2 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_2 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_3 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_3 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_4 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_4 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_5 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_5 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_6 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_6 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_7 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_7 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_8 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_8 */

/* CPPTEST_TEST_CASE_BEGIN test_foo1_9 */
/* CPPTEST_TEST_CASE_CONTEXT void foo1(int, int) */
void TestSuite_Account_cxx_edf04a2a::test_foo1_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (x) */ 
    int _x  = 0;
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    ::foo1(_x, _y);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_foo1_9 */
