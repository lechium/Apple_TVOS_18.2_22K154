//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SignpostSupportAnimationGraceTime : NSObject
{
    unsigned long long _animationType;	// 8 = 0x8
    unsigned long long _firstFrameGraceTimeMs;	// 16 = 0x10
}

@property(nonatomic) unsigned long long firstFrameGraceTimeMs; // @synthesize firstFrameGraceTimeMs=_firstFrameGraceTimeMs;
@property(readonly, nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
- (id)initWithAnimationType:(unsigned long long)arg1 firstFrameGraceTimeMs:(unsigned long long)arg2;	// IMP=0x0000000000026827

@end

