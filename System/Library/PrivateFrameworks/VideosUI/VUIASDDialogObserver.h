//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface VUIASDDialogObserver : NSObject
{
    UIViewController *_presenterViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000068301
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
- (void)handleDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067f79
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067c18
- (void)stopListening;	// IMP=0x0000000000067bd2
- (void)startListening;	// IMP=0x0000000000067b7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

