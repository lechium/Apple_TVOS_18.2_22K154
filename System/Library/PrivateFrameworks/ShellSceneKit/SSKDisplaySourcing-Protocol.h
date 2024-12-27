//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShellSceneKit/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, NSSet;
@protocol SSKDisplaySourceObserving;

@protocol SSKDisplaySourcing <NSObject>
@property(readonly, copy, nonatomic) NSSet *connectedIdentities;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
- (void)updateTransformsWithCompletion:(void (^)(void))arg1;
- (void)removeObserver:(id <SSKDisplaySourceObserving>)arg1;
- (void)addObserver:(id <SSKDisplaySourceObserving>)arg1;
- (FBSDisplayConfiguration *)configurationForIdentity:(FBSDisplayIdentity *)arg1;
@end

