//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSUUID;

@protocol LXTranscriptEntityQueryingXPCServerProtocol
- (void)stopTranscriptEntitiesEnumerationWithId:(NSUUID *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)getTranscriptEntitiesBatchWithId:(NSUUID *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)getTranscriptEntitiesWithParameters:(NSData *)arg1 reply:(void (^)(NSUUID *, NSError *))arg2;
@end

