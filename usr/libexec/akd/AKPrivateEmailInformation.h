//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AKPrivateEmailInformation : NSObject
{
    _Bool _invalidListVersionSupplied;	// 8 = 0x8
    _Bool _shouldSyncWithServer;	// 9 = 0x9
    int _protocolVersion;	// 12 = 0xc
    NSString *_privateEmailListVersion;	// 16 = 0x10
    NSArray *_addedPrivateEmails;	// 24 = 0x18
    NSArray *_removedPrivateEmails;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007a90b
@property(readonly, nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) _Bool shouldSyncWithServer; // @synthesize shouldSyncWithServer=_shouldSyncWithServer;
@property(readonly, copy, nonatomic) NSArray *removedPrivateEmails; // @synthesize removedPrivateEmails=_removedPrivateEmails;
@property(readonly, copy, nonatomic) NSArray *addedPrivateEmails; // @synthesize addedPrivateEmails=_addedPrivateEmails;
@property(readonly, nonatomic) _Bool invalidListVersionSupplied; // @synthesize invalidListVersionSupplied=_invalidListVersionSupplied;
@property(readonly, copy, nonatomic) NSString *privateEmailListVersion; // @synthesize privateEmailListVersion=_privateEmailListVersion;
- (id)description;	// IMP=0x001000000007a887
- (void)_processDictionary:(id)arg1 addedPrivateEmails:(id *)arg2 removedPrivateEmails:(id *)arg3;	// IMP=0x001000000007a67b
- (id)initWithResponseBody:(id)arg1;	// IMP=0x001000000007a1fd

@end

