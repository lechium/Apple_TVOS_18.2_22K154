//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSTopicAttributes : NSObject
{
    long long _filter;	// 8 = 0x8
    unsigned int _darkWakeEnabled:1;	// 16 = 0x10
    unsigned int _pushWakeEnabled:1;	// 16 = 0x10
    unsigned int _criticalWakeEnabled:1;	// 16 = 0x10
    unsigned int _ultraConstrainedEnabled:1;	// 16 = 0x10
}

+ (id)topicAttributesWithFilter:(long long)arg1 darkWakeEnabled:(_Bool)arg2 pushWakeEnabled:(_Bool)arg3 criticalWakeEnabled:(_Bool)arg4 ultraConstrainedEnabled:(_Bool)arg5;	// IMP=0x0040000000075f73
@property(readonly, nonatomic) long long filter; // @synthesize filter=_filter;
@property(nonatomic, getter=isUltraConstrainedEnabled) _Bool ultraConstrainedEnabled;
@property(nonatomic, getter=isCriticalWakeEnabled) _Bool criticalWakeEnabled;
@property(nonatomic, getter=isPushWakeEnabled) _Bool pushWakeEnabled;
@property(nonatomic, getter=isDarkWakeEnabled) _Bool darkWakeEnabled;
- (id)description;	// IMP=0x0010000000075fd6
- (id)initWithFilter:(long long)arg1 darkWakeEnabled:(_Bool)arg2 pushWakeEnabled:(_Bool)arg3 criticalWakeEnabled:(_Bool)arg4 ultraConstrainedEnabled:(_Bool)arg5;	// IMP=0x0010000000075f02

@end

