//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PBAccountIdentifier : NSObject
{
    NSString *_accountType;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
}

+ (id)anyAccountIdentifier;	// IMP=0x002000000007e83e
- (void).cxx_destruct;	// IMP=0x002000000007eb0f
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007eaef
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007e92d
- (unsigned long long)hash;	// IMP=0x001000000007e8b3
- (id)initWithAccountType:(id)arg1 altDSID:(id)arg2;	// IMP=0x001000000007e785

@end

