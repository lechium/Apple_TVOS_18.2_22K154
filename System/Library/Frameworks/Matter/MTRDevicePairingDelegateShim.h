//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTRDevicePairingDelegate;

@interface MTRDevicePairingDelegateShim : NSObject
{
    id <MTRDevicePairingDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019b352
@property(readonly, nonatomic) id <MTRDevicePairingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPairingDeleted:(id)arg1;	// IMP=0x000000000019b2c0
- (void)controller:(id)arg1 commissioningComplete:(id)arg2;	// IMP=0x000000000019b238
- (void)controller:(id)arg1 commissioningSessionEstablishmentDone:(id)arg2;	// IMP=0x000000000019b1b0
- (void)controller:(id)arg1 statusUpdate:(long long)arg2;	// IMP=0x000000000019b150
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000019b054
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000019afd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

