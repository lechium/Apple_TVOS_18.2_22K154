//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface _EXSinkLoadOperator
{
    NSXPCListenerEndpoint *_endpoint;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000034876
- (void).cxx_destruct;	// IMP=0x00000000000355c0
@property(retain) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;	// IMP=0x00000000000351d0
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;	// IMP=0x00000000000349ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034916
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003487e

@end

