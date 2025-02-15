//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSystemUIServiceSystemState;

@interface PBSystemUIServiceConduit : NSObject
{
    PBSystemUIServiceSystemState *_systemState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000025b962
@property(readonly, nonatomic) PBSystemUIServiceSystemState *systemState; // @synthesize systemState=_systemState;
- (void)setCurrentScheduledSleep:(id)arg1;	// IMP=0x001000000025b8ad
- (void)setDictationDeviceIdentifier:(id)arg1;	// IMP=0x001000000025b802
- (void)setSiriPresentationVisibility:(long long)arg1;	// IMP=0x001000000025b796
- (void)setSplitViewVisibility:(long long)arg1;	// IMP=0x001000000025b72a
- (void)setPlaybackControlsState:(long long)arg1;	// IMP=0x001000000025b6be
- (void)updateSystemStateUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000025b577
- (id)init;	// IMP=0x001000000025b521

@end

