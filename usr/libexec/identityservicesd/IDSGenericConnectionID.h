//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSGenericConnectionID : NSObject
{
    NSString *_account;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    unsigned long long _hash;	// 32 = 0x20
}

+ (id)idWithAccount:(id)arg1 service:(id)arg2 name:(id)arg3;	// IMP=0x00200000003c714c
- (void).cxx_destruct;	// IMP=0x00200000003c76b5
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSString *account; // @synthesize account=_account;
- (unsigned long long)hash;	// IMP=0x00100000003c768d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003c7548
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003c753d
- (id)initWithAccount:(id)arg1 service:(id)arg2 name:(id)arg3;	// IMP=0x00100000003c73ff
- (id)description;	// IMP=0x00100000003c739d
- (id)serviceConnectorServiceForAccount;	// IMP=0x00100000003c71dc

@end

