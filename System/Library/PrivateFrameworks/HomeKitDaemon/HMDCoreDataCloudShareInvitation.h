//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDeviceToDeviceShareInvitationToken, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudShareInvitation : NSObject
{
    NSURL *_url;	// 8 = 0x8
    CKDeviceToDeviceShareInvitationToken *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c7064
@property(readonly) CKDeviceToDeviceShareInvitationToken *token; // @synthesize token=_token;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSDictionary *content;
- (id)initWithURL:(id)arg1 token:(id)arg2;	// IMP=0x00000000001c6edc

@end

