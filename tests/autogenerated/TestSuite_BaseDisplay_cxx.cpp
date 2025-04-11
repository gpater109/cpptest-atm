#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM/BaseDisplay.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/BaseDisplay.cxx");

class TestSuite_BaseDisplay_cxx_942f3f20 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_BaseDisplay_cxx_942f3f20);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_showBalance_1);
        CPPTEST_TEST(test_showBalance_2);
        CPPTEST_TEST(test_showBalance_3);
        CPPTEST_TEST(test_showBalance_4);
        CPPTEST_TEST(test_showBalance_5);
        CPPTEST_TEST(test_showBalance_6);
        CPPTEST_TEST(test_showBalance_7);
        CPPTEST_TEST(test_showInfoToUser_1);
        CPPTEST_TEST(test_showInfoToUser_2);
        CPPTEST_TEST(test_showInfoToUser_3);
        CPPTEST_TEST(test_showInfoToUser_4);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_showBalance_1();
        void test_showBalance_2();
        void test_showBalance_3();
        void test_showBalance_4();
        void test_showBalance_5();
        void test_showBalance_6();
        void test_showBalance_7();
        void test_showInfoToUser_1();
        void test_showInfoToUser_2();
        void test_showInfoToUser_3();
        void test_showInfoToUser_4();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_BaseDisplay_cxx_942f3f20);

void TestSuite_BaseDisplay_cxx_942f3f20::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_BaseDisplay_cxx_942f3f20::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_BaseDisplay_cxx_942f3f20::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_BaseDisplay_cxx_942f3f20::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_1 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showBalance_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_1 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_2 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showBalance_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_2 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_3 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showBalance_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = cpptestLimitsGetMinNegDouble();
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_3 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_4 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showBalance_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = -1.0;
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_4 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_5 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showBalance_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = cpptestLimitsGetMinPosDouble();
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_5 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_6 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showBalance_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = 1.0;
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_6 */

/* CPPTEST_TEST_CASE_BEGIN test_showBalance_7 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showBalance(double) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showBalance_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (balance) */ 
    double _balance  = 0.0;
    /* Tested function call */
    _cpptest_TestObject.showBalance(_balance);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showBalance_7 */

/* CPPTEST_TEST_CASE_BEGIN test_showInfoToUser_1 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showInfoToUser(const char *) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showInfoToUser_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (message) */ 
    const char * _message  = "";
    /* Tested function call */
    _cpptest_TestObject.showInfoToUser(_message);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showInfoToUser_1 */

/* CPPTEST_TEST_CASE_BEGIN test_showInfoToUser_2 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showInfoToUser(const char *) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showInfoToUser_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (message) */ 
    const char * _message  = "Hello world";
    /* Tested function call */
    _cpptest_TestObject.showInfoToUser(_message);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showInfoToUser_2 */

/* CPPTEST_TEST_CASE_BEGIN test_showInfoToUser_3 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showInfoToUser(const char *) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showInfoToUser_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (message) */ 
    const char * _message  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    _cpptest_TestObject.showInfoToUser(_message);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showInfoToUser_3 */

/* CPPTEST_TEST_CASE_BEGIN test_showInfoToUser_4 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void BaseDisplay::showInfoToUser(const char *) */
void TestSuite_BaseDisplay_cxx_942f3f20::test_showInfoToUser_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Initializing argument 1 (message) */ 
    const char * _message  = 0 ;
    /* Tested function call */
    _cpptest_TestObject.showInfoToUser(_message);
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_showInfoToUser_4 */
