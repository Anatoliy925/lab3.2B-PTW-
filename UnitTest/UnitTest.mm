#import <XCTest/XCTest.h>
#import "Student.hpp"
@interface UnitTest : XCTestCase

@end

@implementation UnitTest

- (void)test1 {
    
    Student s[2];
    s[0].math = 5;
    s[1].math = 4;
    XCTAssertEqual(1, mathFive(s, 2));
}

- (void) test2 {
    Student s[2];
    s[0].physics = 3;
    s[1].physics = 3;
    XCTAssertEqual(0, physicsFive(s, 2));
}

- (void)testExample {
    Student s[3];
    s[0].physics = 5;
    s[0].math = 4;
    s[1].physics = 3;
    s[1].math = 2;
    s[2].physics = 5;
    s[2].math = 5;
    XCTAssertEqual(2, PhAndMath(s, 3));
}



@end
