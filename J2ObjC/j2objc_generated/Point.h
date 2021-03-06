//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Java/src/main/java/harrycheung/map/shared/Point.java
//

#ifndef _HCMPoint_H_
#define _HCMPoint_H_

#include "J2ObjC_header.h"

#define HCMPoint_RADIUS 6371000.0

@interface HCMPoint : NSObject {
 @public
  jdouble latitude_, longitude_;
  jdouble speed_;
  jdouble bearing_;
  jdouble hAccuracy_, vAccuracy_, timestamp_;
  jdouble lapDistance_, lapTime_, acceleration_;
  jdouble splitTime_;
  jboolean generated_;
}

- (instancetype)initWithDouble:(jdouble)latitude
                    withDouble:(jdouble)longitude
                   withBoolean:(jboolean)inRadians;

- (instancetype)initWithDouble:(jdouble)latitude
                    withDouble:(jdouble)longitude;

- (instancetype)initWithDouble:(jdouble)latitude
                    withDouble:(jdouble)longitude
                    withDouble:(jdouble)bearing;

- (instancetype)initWithDouble:(jdouble)latitude
                    withDouble:(jdouble)longitude
                    withDouble:(jdouble)speed
                    withDouble:(jdouble)bearing
                    withDouble:(jdouble)horizontalAccuracy
                    withDouble:(jdouble)verticalAccuracy
                    withDouble:(jdouble)timestamp;

- (jboolean)isEqual:(id)point;

- (NSString *)description;

- (void)setLapTimeWithDouble:(jdouble)startTime
                  withDouble:(jdouble)splitStartTime;

- (jdouble)getLatitudeDegrees;

- (jdouble)getLongitudeDegrees;

- (HCMPoint *)subtractWithHCMPoint:(HCMPoint *)Point;

- (jdouble)bearingToWithHCMPoint:(HCMPoint *)Point
                     withBoolean:(jboolean)inRadians;

- (jdouble)bearingToWithHCMPoint:(HCMPoint *)Point;

- (HCMPoint *)destinationWithDouble:(jdouble)bearing
                         withDouble:(jdouble)distance;

- (jdouble)distanceToWithHCMPoint:(HCMPoint *)point;

+ (HCMPoint *)intersectSimpleWithHCMPoint:(HCMPoint *)p
                             withHCMPoint:(HCMPoint *)p2
                             withHCMPoint:(HCMPoint *)q
                             withHCMPoint:(HCMPoint *)q2;

@end

J2OBJC_EMPTY_STATIC_INIT(HCMPoint)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT HCMPoint *HCMPoint_intersectSimpleWithHCMPoint_withHCMPoint_withHCMPoint_withHCMPoint_(HCMPoint *p, HCMPoint *p2, HCMPoint *q, HCMPoint *q2);

J2OBJC_STATIC_FIELD_GETTER(HCMPoint, RADIUS, jdouble)
CF_EXTERN_C_END

typedef HCMPoint HarrycheungMapSharedPoint;

J2OBJC_TYPE_LITERAL_HEADER(HCMPoint)

#endif // _HCMPoint_H_
