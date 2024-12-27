//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFNotifyObserver, NSString;
@protocol OS_dispatch_queue;

@interface ADSystemLanguagePreferencesObserver : NSObject
{
    AFNotifyObserver *_notifyObserver;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _changed;	// 24 = 0x18
}

+ (id)sharedObserver;	// IMP=0x0020000000224d68
- (void).cxx_destruct;	// IMP=0x0020000000224d40
- (_Bool)systemLanguagePreferenceHasChanged;	// IMP=0x0010000000224d37
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x0010000000224d2d
- (id)init;	// IMP=0x0010000000224c6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

