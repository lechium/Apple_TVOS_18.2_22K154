//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileManager, NSString;

@interface CPLCloudKitComputeStateNoEncryptionHelper : NSObject
{
    NSFileManager *_fm;	// 8 = 0x8
    NSData *_prefix;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004264c
@property(readonly, nonatomic) NSData *prefix; // @synthesize prefix=_prefix;
- (_Bool)decryptFileAtURL:(id)arg1 outputFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000422b5
- (_Bool)encryptFileAtURL:(id)arg1 outputFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004211a
- (void)shutdown;	// IMP=0x0010000000042114
- (void)start;	// IMP=0x001000000004210e
- (id)init;	// IMP=0x00100000000420f5
- (id)initWithPrefix:(id)arg1;	// IMP=0x0010000000042039

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

