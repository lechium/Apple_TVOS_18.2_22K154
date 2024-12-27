//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAvoidanceObject-Protocol.h>

@class NSSet, NSString, NSValue;
@protocol UIAvoidanceClientApplicator, UIAvoidanceClientDelegate;

@protocol UIAvoidanceClient <UIAvoidanceObject>
@property(retain, nonatomic) NSValue *avoidancePosition;
@property(retain, nonatomic) id <UIAvoidanceClientApplicator> avoidanceApplicator;
@property(retain, nonatomic) id <UIAvoidanceClientDelegate> avoidanceController;
@property(readonly, nonatomic) NSSet *blockades;
- (void)removeBlockadeWithIdentifier:(NSString *)arg1;
- (void)addBlockadeWithIdentifier:(NSString *)arg1;
@end

