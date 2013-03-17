// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class SOAP12Body;
@class SOAP12Header;

/**
 (public class)
 
*/
@interface SOAP12Envelope : NSObject <PicoBindable> {

@private
    SOAP12Header *_header;
    SOAP12Body *_body;

}


/**
 (public property)
 
 type : class SOAP12Header
*/
@property (nonatomic, retain) SOAP12Header *header;

/**
 (public property)
 
 type : class SOAP12Body
*/
@property (nonatomic, retain) SOAP12Body *body;


@end