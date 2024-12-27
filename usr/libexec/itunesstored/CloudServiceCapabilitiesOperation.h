//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface CloudServiceCapabilitiesOperation : ISOperation
{
    _Bool _allowsPromptingForPrivacyAcknowledgement;	// 91 = 0x5b
    _Bool _allowsBypassOfPrivacyAcknowledgement;	// 92 = 0x5c
    CDUnknownBlockType _responseBlock;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000001ce677
- (id)_newResponseWithSubscriptionStatus:(id)arg1;	// IMP=0x00100000001ce565
- (void)run;	// IMP=0x00100000001cdcfc
@property(copy) CDUnknownBlockType responseBlock;
@property(nonatomic) _Bool allowsBypassOfPrivacyAcknowledgement;
@property(nonatomic) _Bool allowsPromptingForPrivacyAcknowledgement;

@end

