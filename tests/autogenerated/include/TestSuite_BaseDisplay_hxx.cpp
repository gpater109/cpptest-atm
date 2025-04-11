#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM/include/BaseDisplay.hxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/BaseDisplay.cxx");

class TestSuite_BaseDisplay_hxx_a4a68cfa : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_BaseDisplay_hxx_a4a68cfa);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_BaseDisplay_1);
        CPPTEST_TEST(test_x7eBaseDisplay_1);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_BaseDisplay_1();
        void test_x7eBaseDisplay_1();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_BaseDisplay_hxx_a4a68cfa);

void TestSuite_BaseDisplay_hxx_a4a68cfa::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_BaseDisplay_hxx_a4a68cfa::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_BaseDisplay_hxx_a4a68cfa::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_BaseDisplay_hxx_a4a68cfa::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_BaseDisplay_1 */
/* CPPTEST_TEST_CASE_CONTEXT BaseDisplay::BaseDisplay(void) */
void TestSuite_BaseDisplay_hxx_a4a68cfa::test_BaseDisplay_1()
{
    /* Pre-condition initialization */
    /* Testing constructor. */
    ::BaseDisplay _return;
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_BaseDisplay_1 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eBaseDisplay_1 */
/* CPPTEST_TEST_CASE_CONTEXT BaseDisplay::~BaseDisplay(void) */
void TestSuite_BaseDisplay_hxx_a4a68cfa::test_x7eBaseDisplay_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::BaseDisplay _cpptest_TestObject ;
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eBaseDisplay_1 */
