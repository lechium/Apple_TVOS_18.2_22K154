//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSSubscribedStream, NSArray;
@protocol MSSubscriberDelegate;

@protocol MSSubscriber
@property(nonatomic) id <MSSubscriberDelegate> delegate;
- (void)stop;
- (void)abort;
- (MSSubscribedStream *)ownSubscribedStream;
- (NSArray *)subscribedStreams;
- (void)retrieveAssets:(NSArray *)arg1;
- (void)checkForOutstandingActivities;
- (void)checkForNewAssetCollections;
- (void)checkForNewAssetCollectionsIfMissingCtag;
- (void)resetSync;
@end

