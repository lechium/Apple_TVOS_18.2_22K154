//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSHBacklightEnvironmentPresentation, BLSHBacklightEnvironmentStateMachine, BLSHPresentationDateSpecifier;

@protocol BLSHBacklightEnvironmentStateMachineDelegate <NSObject>
- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didUpdateToSpecifier:(BLSHPresentationDateSpecifier *)arg2;
- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didUpdateToPresentation:(BLSHBacklightEnvironmentPresentation *)arg2;
- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didCompleteUpdateToState:(long long)arg2;
- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didBeginUpdateToState:(long long)arg2;
@end

