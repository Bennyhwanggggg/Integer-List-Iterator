/*
  client to test listIteratorInt.
  Written by ....
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "listIteratorInt.h"


int main(int argc, char *argv[]) {
  
	  /* The following code, inside the comments, may or may not be correct!
	     
	     It's provided in case you find it difficult to understand 
	     how to create a list iterator, and use it's functions.
	     
	     The code below only tests basic operations, however 
	     make sure that you do test all the required functions properly in
	     your test file. 

	  */
	  
	  

	  int val, result;

	  IteratorInt it1 = IteratorIntNew();
	  
	  val = 25;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 25: Success"

	  val = 12;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 12: Success"

	  val = 6;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 6: Success"

	  val = 82;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 82: Success"

	  val = 11;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 11: Success"

	
	
	  int *vp1 = previous(it1);
	  printf("Previous value is: %d \n", *vp1 );  
	  // should print "Previous value is: 11" 
	  
	  int *vp2 = previous(it1);
	  printf("Previous value is: %d \n", *vp2 );  
	  // should print "Previous value is: 82" 
	 
	  int *vp3 = next(it1);
	  printf("Next value is: %d \n", *vp3 );     
	  // should print "Next value is: 82" 
	  
	  int *vp4 = previous(it1);
	  printf("Previous value is: %d \n", *vp4 );     
	  // should print "Next value is: 82"

	  int *vp5 = previous(it1);
	  printf("Previous value is: %d \n", *vp5 );     
	  // should print "Next value is: 6"
	  
	  int *vp6 = next(it1);
	  printf("Next value is: %d \n", *vp6 );     
	  // should print "Next value is: 6"
	
	  int *vp7 = next(it1);
	  printf("Next value is: %d \n", *vp7 );     
	  // should print "Next value is: 82" 
	  
	  int *vp8 = next(it1);
	  printf("Next value is: %d \n", *vp8 );     
	  // should print "Next value is: 11"
		
	  if(hasPrevious(it1) == 1){
		printf("hasprevious returned 1\n");
	  }
	  else{
		printf("hasPrevious returned 0\n");
	  }
	  // Should return 1

	  if(hasNext(it1) == 1){
		printf("hasNext returned 1\n");
	  }
	  else{
		printf("hasNext returned 0\n");
	  }
	  // Should return 0
	  
	  int *vp9 = previous(it1);
	  printf("Previous value is: %d \n", *vp9 );     
	  // should print "Next value is: 11"
	  
	  int *vp10 = previous(it1);
	  printf("Previous value is: %d \n", *vp10 );     
	  // should print "Next value is: 82"
	
	  int *vp11 = previous(it1);
	  printf("Previous value is: %d \n", *vp11 );     
	  // should print "Next value is: 6"
	  
	  int *vp12 = previous(it1);
	  printf("Previous value is: %d \n", *vp12 );     
	  // should print "Next value is: 12"
	
	  if(hasNext(it1) == 1){
		printf("hasNext returned 1\n");
	  }
	  else{
		printf("hasNext returned 0\n");
	  }
	  // Should return 1
	 
	  if(hasPrevious(it1) == 1){
		printf("hasprevious returned 1\n");
	  }
	  else{
		printf("hasPrevious returned 0\n");
	  }
	  // Should return 1
	
	  val = 52;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 52: Success"

	  if(hasPrevious(it1) == 1){
		printf("hasprevious returned 1\n");
	  }
	  else{
		printf("hasPrevious returned 0\n");
	  }
	  // Should return 1
	 
	  int *vp13 = previous(it1);
	  printf("Previous value is: %d \n", *vp13 );     
	  // should print "Previous value is: 52"
	
	  if(hasPrevious(it1) == 1){
		printf("hasprevious returned 1\n");
	  }
	  else{
		printf("hasPrevious returned 0\n");
	  }
	  // Should return 1
	
	  int *vp14 = previous(it1);
	  printf("Previous value is: %d \n", *vp14 );     
	  // should print "Next value is: 25"
	
	  if(hasPrevious(it1) == 1){
		printf("hasprevious returned 1\n");
	  }
	  else{
		printf("hasPrevious returned 0\n");
	  }
	  // Should return 0
	
	  deleteElm(it1);	printf("deleting 25\n");
	  int *vp17 = next(it1);
	  printf("Next value is: %d \n", *vp17 );     
	  // should print "Next value is: 52"
	  
	  int *vp15 = next(it1);
	  printf("Next value is: %d \n", *vp15 );     
	  // should print "Next value is: 12"
	  
	  deleteElm(it1); printf("deleting 12\n");
	  
	  int *vp16 = next(it1);
	  printf("Next value is: %d \n", *vp16 );     
	  // should print "Next value is: 6"
	  
	  int *vp18 = next(it1);
	  printf("Next value is: %d \n", *vp18 );     
	  // should print "Next value is: 82"
	
	  int *vp19 = next(it1);
	  printf("Next value is: %d \n", *vp19 );     
	  // should print "Next value is: 11"
	
	  deleteElm(it1); printf("deleting 11\n");
	
	  if(hasNext(it1) == 1){
		printf("hasNext returned 1\n");
	  }
	  else{
		printf("hasNext returned 0\n");
	  }
	  // Should return 0
	  
	  int *vp20 = previous(it1);
	  printf("Previous value is: %d \n", *vp20 );     
	  // should print "Previous value is: 82"

	  val = 2;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 2: Success"

	  val = 2;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 2: Success"

	  val = 32;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 32: Success"

	  val = 82;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 82: Success"

	  int *vp21 = previous(it1);
	  printf("Previous value is: %d \n", *vp21 );     
	  // should print "Previous value is: 82"
	  
	  int *vp22 = previous(it1);
	  printf("Previous value is: %d \n", *vp22 );     
	  // should print "Previous value is: 32"
	  
	  int set1 = 22;
	  set(it1, set1);

	  int *vp23 = previous(it1);
	  printf("Previous value is: %d \n", *vp23 );     
	  // should print "Previous value is: 2"

	  val = 32;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  // should print "Inserting 32: Success"

	  int set2 = 72;
	  set(it1, set2);
	 
	  int *vp24 = next(it1);
	  printf("Next value is: %d \n", *vp24 );     
	  // should print "Next value is: 72"
	
	  int *vp25 = next(it1);
	  printf("Next value is: %d \n", *vp25 );     
	  // should print "Next value is: 22"

	  int *vp26 = next(it1);
	  printf("Next value is: %d \n", *vp26 );     
	  // should print "Next value is: 82"

	  val = 99;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 9;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 89;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  int set3 = 42;
	  set(it1, set3);

	  val = 19;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	
	  findPrevious(it1, 6);

	  int *vp27 = next(it1);
	  printf("Next value is: %d \n", *vp27 );     
	  // should print "Next value is: 6"

	  findNext(it1, 82);

	  int *vp28 = previous(it1);
	  printf("Previous value is: %d \n", *vp28 );     
	  // should print "Previous value is: 82"

	  deleteElm(it1);	printf("deleting 82\n");
	  
	  int *vp29 = previous(it1);
	  printf("Previous value is: %d \n", *vp29 );     
	  // should print "Previous value is: 19"

	  int *vp27a = next(it1);
	  printf("Next value is: %d \n", *vp27a );     
	  // should print "Next value is: 19"

	  int *vp29a = previous(it1);
	  printf("Previous value is: %d \n", *vp29a );     
	  // should print "Previous value is: 19"

	  val = 89;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  int *vp30 = previous(it1);
	  printf("Previous value is: %d \n", *vp30 );     
	  // should print "Previous value is: 89"

	  previous(it1);
	  previous(it1);
 	  previous(it1);
	  int *vp31 = previous(it1);
	  printf("Previous value is: %d \n", *vp31 );     
	  // should print "Previous value is: 42"
	  
	  findNext(it1, 89);
	  findNext(it1, 89);
	  
	  int *vp32 = next(it1);
	  printf("Next value is: %d \n", *vp32 );     
	  // should print "Next value is: 19"

	  findPrevious(it1, 89);

	  int *vp33 = previous(it1);
	  printf("Previous value is: %d \n", *vp33 );     
	  // should print "Previous value is: 89"

	  findPrevious(it1, 89);
	  findPrevious(it1, 2);
	  findPrevious(it1, 89);
	  
	  int *vp34 = previous(it1);
	  printf("Previous value is: %d \n", *vp34 );     
	  // should print "Previous value is: 6"

	  val = 87;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  findNext(it1, 99);
	  val = 15;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  findNext(it1, 89);
	  findNext(it1, 89);
	  int *vp35 = next(it1);
	  printf("Next value is: %d \n", *vp35 );     
	  // should print "Next value is: 19"

	  findPrevious(it1, 89);
	  
	  val = 25;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  reset(it1);
	
	  int *vp36 = next(it1);
	  printf("Next value is: %d \n", *vp36 );     
	  // should print "Previous value is: 52"
	  
	  int *vp37 = next(it1);
	  printf("Next value is: %d \n", *vp37 );     
	  // should print "Previous value is: 87"

	  freeIt(it1);

	  it1 = IteratorIntNew();

	  val = 25;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 225;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  
	  val = 2;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  
	  deleteElm(it1);	printf("deleting but error or nothin\n");
	  set(it1, 88);
	  // Nothing should happen

	  val = 12;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  reset(it1);
	  val = 112;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  reset(it1);
	  val = 43;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  /*
	  findNext(it1, 2);
	  set(it1, 77);

	  freeIt(it1);

	  it1 = IteratorIntNew();

	  val = 1;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 2;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 3;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	
	  int *vp40 = previous(it1);
	  printf("Previous value is: %d \n", *vp40 );     
	  // should print "Previous value is: 3"

	  deleteElm(it1); printf("deleting 3\n");
	
	  int *vp41 = previous(it1);
	  printf("Previous value is: %d \n", *vp41 );     
	  // should print "Previous value is: 2"

	  deleteElm(it1); printf("deleting 2\n");

	  int *vp42 = previous(it1);
	  printf("Previous value is: %d \n", *vp42 );     
	  // should print "Previous value is: 1"
	
	  deleteElm(it1); printf("deleting 1\n");

	  val = 3;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 13;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	
	  int *vp43 = previous(it1);
	  printf("Previous value is: %d \n", *vp43 );     
	  // should print "Previous value is: 13"

	  int *vp44 = next(it1);
	  printf("Next value is: %d \n", *vp44 );     
	  // should print "Previous value is: 13"

	  findNext(it1, 33);
	  
	  val = 5;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  */
	  freeIt(it1);
	  printf("+++++++++++++++++++++++++++\n");
	  
	  it1 = IteratorIntNew();

	  val = 20;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 12;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	
	  val = 33;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 25;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  
	  int *t1 = previous(it1);
	  printf("Previous value is: %d \n", *t1 );     
	  // should print "Previous value is: 25"

	  int *t2 = previous(it1);
	  printf("Previous value is: %d \n", *t2 );     
	  // should print "Previous value is: 33"

	  int *t3 = next(it1);
	  printf("Next value is: %d \n", *t3 );     
	  // should print "Next value is: 33"

	  deleteElm(it1); printf("deleting 33\n");

	  int *t4 = previous(it1);
	  printf("Previous value is: %d \n", *t4 );     
	  // should print "Previous value is: 12"	

	  deleteElm(it1); printf("deleting 12\n");  

	  int *t5 = previous(it1);
	  printf("Previous value is: %d \n", *t5 );     
	  // should print "Previous value is: 20"

	  deleteElm(it1); printf("deleting 20\n");  

	  int *t6 = next(it1);
	  printf("Next value is: %d \n", *t6 );     
	  // should print "Next value is: 25"

	  deleteElm(it1); printf("deleting 25\n");

	  val = 55;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 29;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  reset(it1);

	  int *t7 = next(it1);
	  printf("Next value is: %d \n", *t7 );     
	  // should print "Next value is: 55"

	  val = 62;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 44;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  int *t8 = previous(it1);
	  printf("Previous value is: %d \n", *t8 );     
	  // should print "Previous value is: 44"

	  int *t9 = next(it1);
	  printf("Next value is: %d \n", *t9 );     
	  // should print "Next value is: 44"

	  deleteElm(it1); printf("deleting 44\n");

	  int *t10 = previous(it1);
	  printf("Previous value is: %d \n", *t10 );     
	  // should print "Previous value is: 62"

	  int *t11 = next(it1);
	  printf("Next value is: %d \n", *t11 );     
	  // should print "Next value is: 62"

	  deleteElm(it1); printf("deleting 62\n");
	  deleteElm(it1); printf("deleting Nothing\n");

	  int *t12 = next(it1);
	  printf("Next value is: %d \n", *t12 );     
	  // should print "Next value is: 29"

	  deleteElm(it1); printf("deleting 29\n");

	  int *t13 = previous(it1);
	  printf("Previous value is: %d \n", *t13 );     
	  // should print "Previous value is: 55"

	  deleteElm(it1); printf("deleting 55\n");
	  deleteElm(it1); printf("deletes nothing\n");
	
	  val = 62;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 6;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 
	
	  freeIt(it1);
	  printf("+++++++++++++++++++++++++++\n");
	  
	  it1 = IteratorIntNew();

	  val = 20;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 12;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	
	  val = 33;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );

	  val = 25;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	  
	  int *at1 = previous(it1);
	  printf("Previous value is: %d \n", *at1 );     
	  // should print "Previous value is: 25"

	  int *at2 = previous(it1);
	  printf("Previous value is: %d \n", *at2 );     
	  // should print "Previous value is: 33"

	  int *at3 = next(it1);
	  printf("Next value is: %d \n", *at3 );     
	  // should print "Next value is: 33"

	  deleteElm(it1); printf("deleting 33\n");

	  int *at4 = previous(it1);
	  printf("Previous value is: %d \n", *at4 );     
	  // should print "Previous value is: 12"	

	  deleteElm(it1); printf("deleting 12\n");  

	  int *at5 = previous(it1);
	  printf("Previous value is: %d \n", *at5 );     
	  // should print "Previous value is: 20"

	  deleteElm(it1); printf("deleting 20\n");  

	  int *at6 = next(it1);
	  printf("Next value is: %d \n", *at6 );     
	  // should print "Next value is: 25"

	  deleteElm(it1); printf("deleting 25\n");

	  val = 55;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 29;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  reset(it1);

	  int *at7 = next(it1);
	  printf("Next value is: %d \n", *at7 );     
	  // should print "Next value is: 55"

	  val = 62;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 44;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  int *a8 = previous(it1);
	  printf("Previous value is: %d \n", *a8 );     
	  // should print "Previous value is: 44"

	  int *at9 = next(it1);
	  printf("Next value is: %d \n", *at9 );     
	  // should print "Next value is: 44"

	  deleteElm(it1); printf("deleting 44\n");

	  int *at10 = previous(it1);
	  printf("Previous value is: %d \n", *at10 );     
	  // should print "Previous value is: 62"

	  int *at11 = next(it1);
	  printf("Next value is: %d \n", *at11 );     
	  // should print "Next value is: 62"

	  deleteElm(it1); printf("deleting 62\n");
	  deleteElm(it1); printf("deleting Nothing\n");

	  int *at12 = next(it1);
	  printf("Next value is: %d \n", *at12 );     
	  // should print "Next value is: 29"

	  deleteElm(it1); printf("deleting 29\n");

	  int *at13 = previous(it1);
	  printf("Previous value is: %d \n", *at13 );     
	  // should print "Previous value is: 55"

	  deleteElm(it1); printf("deleting 55\n");
	  deleteElm(it1); printf("deletes nothing\n");
	  printf("++++++++++++++extra+++++++++++++\n");
	  val = 62;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 6;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") );
	
	  val = 6;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 
	 
	  val = 16;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 62;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 
	
	  val = 62;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 15;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 
	
	  val = 62;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 6;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  findPrevious(it1, 15);

	  int *ab = previous(it1);
	  printf("Previous value is: %d \n", *ab );     
	  // should print "Previous value is: 62"

	  val = 13;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  int *att11 = next(it1);
	  printf("Next value is: %d \n", *att11 );     
	  // should print "Next value is: 62"

	  int *at112 = next(it1);
	  printf("Next value is: %d \n", *at112 );     
	  // should print "Next value is: 15"

	  findPrevious(it1, 6);

	  int *catt11 = next(it1);
	  printf("Next value is: %d \n", *catt11 );     
	  // should print "Next value is: 6"

	  int *cat112 = next(it1);
	  printf("Next value is: %d \n", *cat112 );     
	  // should print "Next value is: 16"

	  findPrevious(it1, 600); //nothing should happen

	  int *dat112 = previous(it1);
	  printf("Previous value is: %d \n", *dat112 );     
	  // should print "Next value is: 16"

	  findPrevious(it1, 62);

	  int *eat112 = next(it1);
	  printf("Next value is: %d \n", *eat112 );     
	  // should print "Next value is: 62"

	  findPrevious(it1, 600); //Nothing should happen

	  int *hat112 = next(it1);
	  printf("Next value is: %d \n", *hat112 );     
	  // should print "Next value is: 6"

	  val = 11;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  val = 13;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  deleteElm(it1); printf("deleting 6\n");
	  
	  int *dat2 = previous(it1);
	  printf("Previous value is: %d \n", *dat2 );     
	  // should print "Next value is: 13"

	  findPrevious(it1, 62);
	  deleteElm(it1); printf("deleting 62\n");

	  int *ct11 = next(it1);
	  printf("Next value is: %d \n", *ct11 );     
	  // should print "Next value is: 11"

	  int *c112 = next(it1);
	  printf("Next value is: %d \n", *c112 );     
	  // should print "Next value is: 13"

	  findNext(it1, 62);
	  findNext(it1, 62);
	  findNext(it1, 62);
	  int *c1t = next(it1);
	  printf("Next value is: %d \n", *c1t );     
	  // should print "Next value is: 6"

	  findPrevious(it1, 13);
	  int *c1at = next(it1);
	  printf("Next value is: %d \n", *c1at );     
	  // should print "Next value is: 13"

	  val = 13;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 

	  reset(it1);

	  findNext(it1, 62);
	  deleteElm(it1); printf("deleting 62\n");
	  findNext(it1, 62);
	  findPrevious(it1, 62);
	  int *ddat2 = previous(it1);
	  printf("Previous value is: %d \n", *ddat2 );     
	  // should print "previoius value is: 13"

	  reset(it1);
	  findNext(it1, 13);
	  findNext(it1, 13);
	  findNext(it1, 13);
	  int *a5t2 = previous(it1);
	  printf("Previous value is: %d \n", *a5t2 );     
	  // should print "Prevopis value is: 13"

	  deleteElm(it1); printf("deleting 13\n");
	  findNext(it1, 6);
	  deleteElm(it1); printf("deleting 6\n");
	  int *dh = previous(it1);
	  printf("Previous value is: %d \n", *dh );     
	  // should print "previoius value is: 62"
	  int *dh2= previous(it1);
	  printf("Previous value is: %d \n", *dh2 );     
	  // should print "previoius value is: 15"
	  findPrevious(it1, 13);
	  findPrevious(it1, 13);
	  int *dh3= previous(it1);
	  printf("Previous value is: %d \n", *dh3 ); 
	  // should print "previoius value is: 11"
	  deleteElm(it1); printf("deleting 11\n");
	  int *dh4= next(it1);
	  printf("Next value is: %d \n", *dh4 ); 
	  // should print "next value is: 13"
	  findNext(it1, 15);
	  deleteElm(it1); printf("deleting 15\n");
	  findPrevious(it1, 13);
	  findPrevious(it1, 13);
	  deleteElm(it1); printf("deleting 13\n");
	  findNext(it1, 62);
	  deleteElm(it1); printf("deleting 62\n");
	  findNext(it1, 62);
	  deleteElm(it1); printf("deleting 62\n");

	  int *dht2= previous(it1);
	  printf("Previous value is: %d \n", *dht2 );     
	  // should print "previoius value is: 13"
	  freeIt(it1);

	  it1 = IteratorIntNew();
	  previous(it1);
	  findNext(it1, 62);
	  next(it1);
	  deleteElm(it1);
	  //printf("Previous value is: %p \n", *dht3 );
	  val = 13;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 
	  next(it1);
	  int *dht3= previous(it1);
	  printf("Previous value is: %d \n", *dht3 );   
	  // should print "previoius value is: 13"
	  previous(it1);
	  int *dht4= next(it1);
	  printf("Next value is: %d \n", *dht4 );   
	  // should print "next value is: 13"
	  freeIt(it1);
	  printf("_________________________\n");
	  previous(it1);
	  int *dht5= next(it1);
	  printf("Next value is: %d \n", *dht5 ); 
	  //Should print some random address
	  it1 = IteratorIntNew();
	  val = 13;
	  result = add(it1 , val); 
	  printf("Inserting %d: %s \n", val, (result==1 ? "Success" : "Failed") ); 
	  previous(it1);
	  set(it1, 22);
	  int *dd2 = next(it1);
	  printf("Next value is: %d \n", *dd2);
	  // should print "next value is: 22"
	  deleteElm(it1);
	  set(it1, 11); 
	  
  return EXIT_SUCCESS;

}
