//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NUChannelData, NUChannelFormat;
@protocol NUPipelineNode;

@protocol NUPipelineNode <NSObject>
@property(retain, nonatomic) id <NUPipelineNode> inputNode;
@property(readonly, nonatomic) long long channelType;
- (NUChannelData *)evaluateDataWithFormat:(NUChannelFormat *)arg1 error:(out id *)arg2;
- (_Bool)bindTo:(NUChannelData *)arg1 error:(out id *)arg2;
@end

