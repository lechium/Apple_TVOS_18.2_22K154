//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface MCMContainerSchemaActionCopyContents
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destURL;	// 16 = 0x10
}

+ (id)actionIdentifier;	// IMP=0x00100000000d898d
- (void).cxx_destruct;	// IMP=0x00000000000d8017
- (_Bool)performWithError:(id *)arg1;	// IMP=0x00000000000d7e02
- (id)description;	// IMP=0x00000000000d7d15
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 destFinalPathArgument:(id)arg3 context:(id)arg4;	// IMP=0x00000000000d7bf7

@end

