//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerSecureTransportBaseDefaultEncryptedSession : NSObject
{
}

- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ffb93
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ffb50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

