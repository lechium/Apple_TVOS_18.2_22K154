//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSUUID;
@protocol _SFXPCBlockContainerProtocol, _TtP7Sharing36_SFXPCAsyncSequenceContainerProtocol_;

@protocol _SFXPCBlockContainerProtocol
- (void)invoke:(NSUUID *)arg1 parametersData:(NSData *)arg2 parametersAsyncSequenceContainer:(id <_TtP7Sharing36_SFXPCAsyncSequenceContainerProtocol_>)arg3 parametersBlocksContainer:(id <_SFXPCBlockContainerProtocol>)arg4 sync:(_Bool)arg5 completion:(void (^)(NSData *, id <_TtP7Sharing36_SFXPCAsyncSequenceContainerProtocol_>, id <_SFXPCBlockContainerProtocol>, _SFXPCError *))arg6;
@end

