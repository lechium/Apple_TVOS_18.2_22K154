//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICFPLeaseSyncSession : NSObject
{
    unsigned int _mediaKind;	// 8 = 0x8
    unsigned long long _accountID;	// 16 = 0x10
    id _leaseID;	// 24 = 0x18
}

+ (id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned int)arg3 returningLeaseSyncRequestData:(id *)arg4 error:(id *)arg5;	// IMP=0x006000000007a6f1
- (void).cxx_destruct;	// IMP=0x000000000007a8d4
@property(readonly, nonatomic) unsigned int mediaKind; // @synthesize mediaKind=_mediaKind;
@property(readonly, nonatomic) id leaseID; // @synthesize leaseID=_leaseID;
@property(readonly, nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
- (_Bool)processRenewResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a868
- (_Bool)importLeaseSyncResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a819
- (_Bool)getLeaseSyncRenewRequestData:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000007a7bc
- (_Bool)endLeaseSyncAndReturnError:(id *)arg1;	// IMP=0x000000000007a76d

@end

