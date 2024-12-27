//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject-Protocol.h>

@class NSFileVersion, NSOperationQueue, NSSet, NSURL;

@protocol NSFilePresenter <NSObject>
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;

@optional
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,R

@property(readonly, copy) NSURL *primaryPresentedItemURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURL",?,R,C

- (void)presentedSubitemAtURL:(NSURL *)arg1 didResolveConflictVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didLoseVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didGainVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemDidChangeAtURL:(NSURL *)arg1;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didMoveToURL:(NSURL *)arg2;
- (void)presentedSubitemDidAppearAtURL:(NSURL *)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)presentedItemDidResolveConflictVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidLoseVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidGainVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidChangeUbiquityAttributes:(NSSet *)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(NSURL *)arg1;
- (void)accommodatePresentedItemEvictionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)relinquishPresentedItemToWriter:(void (^)(void (^)(void)))arg1;
- (void)relinquishPresentedItemToReader:(void (^)(void (^)(void)))arg1;
@end

