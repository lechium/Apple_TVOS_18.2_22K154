//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <NSObject>
@property(readonly, nonatomic) MPPropertySet *queueSectionProperties;
@property(readonly, nonatomic) MPPropertySet *queueItemProperties;
@property(readonly, nonatomic) MPPropertySet *playingItemProperties;
@property(readonly) CDStruct_912cb5d2 tracklistRange;
@property(readonly, nonatomic) MPCPlayerPath *playerPath;

@optional
@property(readonly, nonatomic) NSString *preferredFallbackItemRelationship;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@end

