//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSObject-Protocol.h>

@class MCMClientIdentity, MCMUserIdentityCache;
@protocol MCMContainerCache, MCMContainerClassUserIdentityIterator, MCMContainerFactory, MCMGlobalConfiguration;

@protocol MCMCommandContext <NSObject>
@property(readonly, nonatomic) id <MCMContainerClassUserIdentityIterator> classIterator;
@property(readonly, nonatomic) id <MCMGlobalConfiguration> globalConfiguration;
@property(readonly, nonatomic) unsigned int kernelPersonaID;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property(readonly, nonatomic) id <MCMContainerFactory> containerFactory;
@property(readonly, nonatomic) id <MCMContainerCache> containerCache;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity;
@end

