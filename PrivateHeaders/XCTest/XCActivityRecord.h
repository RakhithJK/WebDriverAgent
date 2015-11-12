// Copyright 2004-present Facebook. All Rights Reserved.

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class NSArray, NSData, NSDate, NSString, NSUUID, XCElementSnapshot, XCSynthesizedEventRecord;

@interface XCActivityRecord : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSUUID *_uuid;
    NSDate *_start;
    NSDate *_finish;
    _Bool _hasSubactivities;
    NSData *_screenImageData;
    XCElementSnapshot *_snapshot;
    NSArray *_elementsOfInterest;
    XCSynthesizedEventRecord *_synthesizedEvent;
}

+ (_Bool)supportsSecureCoding;
@property (atomic, retain) XCSynthesizedEventRecord *synthesizedEvent;
@property (atomic, copy) NSArray *elementsOfInterest;
@property (atomic, retain) XCElementSnapshot *snapshot;
@property (atomic, copy) NSData *screenImageData;
@property (atomic, assign) _Bool hasSubactivities; // @synthesize hasSubactivities=_hasSubactivities;
@property (atomic, copy) NSDate *start;
@property (atomic, copy) NSDate *finish;
@property (atomic, copy) NSUUID *uuid;
@property (atomic, copy) NSString *title;
@property (atomic, readonly) double duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end