//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UIBridgedAnimatableProperty <NSObject>
@property(nonatomic) _Bool isVelocityUsableForVFD;
@property(retain, nonatomic) id transformer;
@property(readonly, nonatomic) _Bool isInvalidated;
@property(retain, nonatomic) id velocity;
@property(retain, nonatomic) id presentationValue;
@property(retain, nonatomic) id value;
- (void)invalidateAndStopImmediately:(_Bool)arg1;
- (void)setVelocity:(id)arg1 target:(_Bool)arg2;
- (id)velocityTarget:(_Bool)arg1;
@end

