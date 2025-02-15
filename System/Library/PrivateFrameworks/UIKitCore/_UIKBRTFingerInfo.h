//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerInfo : NSObject
{
    _Bool _unknownSeen;	// 8 = 0x8
    double _radius;	// 16 = 0x10
    double _lastSeenTimestamp;	// 24 = 0x18
    unsigned long long _identity;	// 32 = 0x20
    struct CGPoint _location;	// 40 = 0x28
}

@property(nonatomic) _Bool unknownSeen; // @synthesize unknownSeen=_unknownSeen;
@property(nonatomic) unsigned long long identity; // @synthesize identity=_identity;
@property(nonatomic) double lastSeenTimestamp; // @synthesize lastSeenTimestamp=_lastSeenTimestamp;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) double feedbackAlpha;
- (id)description;	// IMP=0x0000000000ef6036
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ef5f7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ef5efe

@end

