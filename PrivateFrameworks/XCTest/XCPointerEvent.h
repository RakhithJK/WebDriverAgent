/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCPointerEvent : NSObject <NSSecureCoding>
{
    unsigned long long _eventType;
    unsigned long long _buttonType;
    double _offset;
    struct CGPoint _coordinate;
}

+ (CDUnknownBlockType)offsetComparator;
+ (id)pointerEventWithType:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 coordinate:(struct CGPoint)arg3 offset:(double)arg4;
+ (_Bool)supportsSecureCoding;
@property (atomic, assign) double offset; // @synthesize offset=_offset;
@property (atomic, assign) struct CGPoint coordinate; // @synthesize coordinate=_coordinate;
@property (atomic, assign) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property (atomic, assign) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end