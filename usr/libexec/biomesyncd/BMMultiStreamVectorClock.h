//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BMMultiStreamVectorClock : NSObject
{
    NSMutableDictionary *_vectorClock;	// 8 = 0x8
}

+ (id)deserialize:(id)arg1 error:(id *)arg2;	// IMP=0x002000000002a134
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000029f8a
- (void).cxx_destruct;	// IMP=0x002000000002a1aa
- (id)serialize:(id *)arg1;	// IMP=0x001000000002a110
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000029fb5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000029f92
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000029c5f
- (unsigned long long)hash;	// IMP=0x0010000000029a3f
- (id)description;	// IMP=0x00100000000299cc
- (id)allKeys;	// IMP=0x00100000000299b6
- (id)vectorClockForStreamIdentifier:(id)arg1;	// IMP=0x0010000000029984
- (void)setVectorClockTo:(id)arg1 forStreamIdentifier:(id)arg2;	// IMP=0x0010000000029962
- (id)init;	// IMP=0x001000000002990c

@end

