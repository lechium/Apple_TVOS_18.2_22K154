//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID;

@interface SILogicalTimestampInternal : NSObject
{
    MISSING_TYPE *clockIdentifier;	// 25 = 0x19
    MISSING_TYPE *nanosecondsSinceBoot;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x0000000000030d34
- (id)init;	// IMP=0x0000000000030bb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000030ae7
- (id)initWithClockIdentifier:(id)arg1 nanosecondsSinceBoot:(unsigned long long)arg2;	// IMP=0x00000000000306aa
@property(nonatomic, readonly) unsigned long long nanosecondsSinceBoot; // @synthesize nanosecondsSinceBoot;
@property(nonatomic, readonly) NSUUID *clockIdentifier;

@end

