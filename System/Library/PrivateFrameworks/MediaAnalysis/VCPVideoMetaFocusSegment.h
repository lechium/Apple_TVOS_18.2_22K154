//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPVideoMetaFocusSegment
{
    long long _focusStatus;	// 8 = 0x8
}

@property long long focusStatus; // @synthesize focusStatus=_focusStatus;
- (void)resetSegment:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000031b305
- (void)updateSegment:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000031b2b1
- (id)initWithFocusStatus:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000031b217

@end

