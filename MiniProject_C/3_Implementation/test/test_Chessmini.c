#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <chess.h>
#define PROJECT_NAME    "Chessmini"

/* Prototypes for all the test functions */
void test_initialize(void);
void test_wrongStart(void);
void test_pawn(void);
void test_rook(void);
void test_queen(void);
void test_bishop(void);
void test_horse(void);
void test_king(void);
void test_check(void);
void test_gameover(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "initialize", test_initialize);
  CU_add_test(suite, "wrongStart", test_wrongStart);
  CU_add_test(suite, "pawn", test_pawn);
  CU_add_test(suite, "rook", test_rook);
  CU_add_test(suite, "queen", test_queen);
  CU_add_test(suite, "bishop", test_bishop);
  CU_add_test(suite, "horse", test_horse);
  CU_add_test(suite, "king", test_king);
  CU_add_test(suite, "check", test_check);
  CU_add_test(suite, "gameover", test_gameover);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_initialize(void) {
  CU_ASSERT(1 == initialize());
  
  /* Dummy fail*/
/*  CU_ASSERT(1500 == add(750, 7500)); */
}

void test_wrongStart(void) {
  CU_ASSERT(1 == wrongStart());
  
  /* Dummy fail*/
/*  CU_ASSERT(1 == subtract(1000, 900));  */
}

void test_pawn(void) {
  CU_ASSERT(1 == pawn(5,1,5,2));
  
  /* Dummy fail*/
/*  CU_ASSERT(2 == multiply(2, 5));  */
}

void test_rook(void) {
  CU_ASSERT(1 == rook(0,0,0,1));
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}
void test_queen(void) {
  CU_ASSERT(1 == queen(4,7,4,6));
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}
void test_bishop(void) {
  CU_ASSERT(1 == bishop(5,7,4,7));
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}
void test_horse(void) {
  CU_ASSERT(1 == horse(1,7,1,6));
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}
void test_king(void) {
  CU_ASSERT(1 == king(3,7,3,6));
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}
void test_check(void) {
  CU_ASSERT(1 == check());
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}
void test_gameover(void) {
  CU_ASSERT(1 == gameover());
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}
