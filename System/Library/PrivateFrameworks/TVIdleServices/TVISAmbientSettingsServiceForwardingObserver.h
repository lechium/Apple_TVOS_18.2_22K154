//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVISAmbientSettingsServiceForwardingObserver : NSObject
{
    CDUnknownBlockType _onSettingsUpdated;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000094a30
@property(readonly, copy, nonatomic) CDUnknownBlockType onSettingsUpdated; // @synthesize onSettingsUpdated=_onSettingsUpdated;
- (void)settingsDidUpdate;	// IMP=0x00000000000949c0
- (id)initWithSettingsUpdateCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000948f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

